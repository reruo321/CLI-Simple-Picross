#pragma once
#include "Board.h"
#include "Cursor.h"

class Picross
{
	vector<string> name;
	vector<AnswerBoard> answer;
	Board * mark;
	Cursor * cursor;
public:
	Picross() {
		cursor = new Cursor(0, 0);
	};
	void drawScreen();
	void addBoard(vector<vector<vector<char>>> ansArr, vector<string> name, int n);
	short getLine(size_t n) const;
	void drawTitle() const;
	void addMenu(short x, short y) const;
	void startGame(short index);
	void drawHints(short x_start, short y_start, Board board, short lennrow, short lenncol, vector<vector<int>> nrow, vector<vector<int>> ncol) const;
	void updateBoard(short x_start, short y_start, Board board, short lennrow, short lenncol, short cursor_x, short cursor_y) const;
	void markBoard(Board board, COORD crd);
	~Picross() {
		vector<string>().swap(name);
		vector<AnswerBoard>().swap(answer);
		delete[]mark;
		delete[]cursor;
	}
//	void checkAnswer() const;
};

