#include <string>
#include "Picross.h"
#include "PicrossException.h"

void Picross::drawScreen() {
	while (1) {
		int cur_r = 3;
		int cur_c = 13;
		int titlerow = 160;
		int titlecolumn = 80;
		string sysstr = "mode con cols=" + to_string(titlerow) + " lines=" + to_string(titlecolumn) + " | title Simple Picross";
		SetConsoleTextAttribute(cursor->GetConsole(), 15);
		system(sysstr.c_str());
		drawTitle();
		addMenu(cur_r + 10, cur_c);
		startGame(cursor->SelectTitleMenu(cur_r + 7, cur_c, answer.size()));
	}
}

void Picross::drawTitle() const {
	cout << endl << endl << endl;
	cout << "                  ######" << endl;
	cout << "                  #     # #  ####  #####   ####   ####   ####" << endl;
	cout << "                  #     # # #    # #    # #    # #      #" << endl;
	cout << "                  ######  # #      #    # #    #  ####   ####" << endl;
	cout << "                  #       # #      #####  #    #      #      #" << endl;
	cout << "                  #       # #    # #   #  #    # #    # #    #" << endl;
	cout << "                  #       #  ####  #    #  ####   ####   ####" << endl;
}

void Picross::addBoard(vector<vector<vector<char>>> ansArr, vector<string> name, int n) {
	try {
		if (ansArr.size() <= n)
			throw SheetException(n);
		if (name.size() <= n)
			throw SheetNameException(n);
		if (ansArr[n].size() > 30 || ansArr[n][0].size() > 30)
			throw Over30Exception(n);
		if (ansArr[n].size() < 10 || ansArr[n][0].size() < 10)
			throw Less10Exception(n);
		int check_arr_size;
		for (int i = 0; i < ansArr[n].size(); i++) {
			check_arr_size = ansArr[n][0].size();
			for (int j = 0; j < ansArr[n][i].size(); j++) {
				if (check_arr_size != ansArr[n][j].size())
					throw SheetShapeException(n);
				if (ansArr[n][i][j] != 0 && ansArr[n][i][j] != 1)
					throw SheetValueException(n);
			}
		}
		answer.push_back(AnswerBoard(ansArr[n]));
		this->name.push_back(name[n]);
	}
	catch(Exception &e){
		e.ShowException();
		exit(-1);
	}
}
void Picross::addMenu(short x, short y) const {

	DWORD written = 0;
	for (unsigned int i = 0; i < answer.size(); i++) {
		cursor->SetPosition(x, y);
		string str = to_string(i+1) + ". " + to_string(answer[i].getRow()) + "x" + to_string(answer[i].getColumn()) + " Picross\n";
		WriteConsoleA(cursor->GetConsole(), str.c_str(), str.length(), &written, NULL);
		y++;
	}
	cout << endl;
	cursor->SetPosition(x, y+1);
	cout << "Exit";
	cursor->SetPosition(x, y + 5);
	cout << "б┘ Press \"Space bar\" to Select Menu. б┘";
}
short Picross::getLine(size_t n) const {
	if (n % 2)
		return ++n;
	else
		return n;
}

void Picross::startGame(short index) {
	if (index == answer.size() + 1)
		exit(0);
	
	AnswerBoard playing = answer[index];
	mark = new Board(playing.getArr());
	cursor->SetPosition(50, 30);
	vector<vector<int>> nrow = playing.calRowNum();
	vector<vector<int>> ncol = playing.calColNum();
	short lennrow = getLine(playing.getRow()) * 2;
	short lenncol = getLine(playing.getColumn());
	const short x_start = 10;
	const short y_start = 4;
	short cursor_x = x_start + lennrow;
	short cursor_y = y_start + lenncol;
	COORD crd;

	system("cls");
	drawHints(x_start, y_start, playing, lennrow, lenncol, nrow, ncol);
	SetConsoleTextAttribute(cursor->GetConsole(), 15);
	cursor->SetPosition(x_start, y_start + lenncol + mark->getColumn() + 4);
	cout << "Press Space Bar, бр: Empty, бс: Checked, б╪: Guess to Empty";
	while (1) {
		updateBoard(x_start, y_start, *mark, lennrow, lenncol, cursor_x, cursor_y);
		if (*mark == playing)
			break;
		Sleep(300);
		crd = cursor->GameCursor(x_start+lennrow, y_start+lenncol, mark->getRow(), mark->getColumn(), cursor->GetCursorCoord().X, cursor->GetCursorCoord().Y);
		cursor_x = cursor->GetCursorCoord().X;
		cursor_y = cursor->GetCursorCoord().Y;
		mark->markBoard(crd.X, crd.Y);
	}

	Sleep(1000);
	updateBoard(x_start, y_start, playing, lennrow, lenncol, cursor_x, cursor_y);

	cursor->SetPosition(x_start, y_start + lenncol + mark->getColumn() + 4);
	cout << "The Answer is: " << name[index] << " !                                                      ";
	cursor->SetPosition(x_start, y_start + lenncol + mark->getColumn() + 5);
	cout << "Congratulations!";
	cursor->SetPosition(x_start, y_start + lenncol + mark->getColumn() + 7);
	cout << "Press Q to Go Back to the Title." << endl;

	while (1) {
		if (GetAsyncKeyState(0x51) & 0x8000) {
			system("cls");
			return;
		}
	}
}

void Picross::drawHints(short x_start, short y_start, Board board, short lennrow, short lenncol, vector<vector<int>> nrow, vector<vector<int>> ncol) const {

	// Row Hints
	for (unsigned int i = 0; i < nrow.size(); i++) {
		for (unsigned int j = 0; j < nrow[i].size(); j++) {
			SetConsoleTextAttribute(cursor->GetConsole(), 11 + 3 * (i % 2));
			cursor->SetPosition(x_start + lennrow - (4 * (nrow[i].size() - j) - 2), y_start + lenncol + i);
			cout << (nrow[i][j]);
		}
	}

	// Column Hints
	for (unsigned int i = 0; i < ncol.size(); i++) {
		for (unsigned int j = 0; j < ncol[i].size(); j++) {
			SetConsoleTextAttribute(cursor->GetConsole(), 13 - 3 * (i % 2));
			cursor->SetPosition(x_start + lennrow + 2 * i, y_start + lenncol - (2 * (static_cast<int>(ncol[i].size()) - 1 - j) + 1));
			cout << (ncol[i][j]);
		}
	}
}

void Picross::updateBoard(short x_start, short y_start, Board board, short lennrow, short lenncol, short cursor_x, short cursor_y) const {

	for (int i = 0; i < board.getRow(); i++) {
		cursor->SetPosition(x_start + lennrow, y_start + lenncol + i);
		for (int j = 0; j < board.getColumn(); j++) {
			if (board.getElement(i, j) == 0)
				cout << "бр";
			else if(board.getElement(i, j) == 1)
				cout << "бс";
			else
				cout << "б╪";
		}
		cout << endl;
	}
	cursor->SetPosition(cursor_x, cursor_y);
}