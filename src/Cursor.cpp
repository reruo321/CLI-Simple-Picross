#include "Cursor.h"

using namespace std;

COORD Cursor::GetCursorCoord() const {
	CONSOLE_SCREEN_BUFFER_INFO csbi = {};
	BOOL ok = GetConsoleScreenBufferInfo(hConsole, &csbi);
	return csbi.dwCursorPosition;
}

void Cursor::SetPosition(short x, short y) const {
	SetConsoleCursorPosition(hConsole, { x, y });
}

HANDLE Cursor::GetConsole() const {
	return hConsole;
}

short Cursor::SelectTitleMenu(short x_start, short y_start, size_t gamelen) const {
	short x = x_start;
	short y = y_start;
	DWORD written = 0;

	SetPosition(x, y);
	cout << "¡Ú";
	SetPosition(x, y);

	while (1) {
		if (GetAsyncKeyState(VK_UP) & 0x8000 && y > y_start) {
			cout << "  ";
			SetPosition(x, --y);
			cout << "¡Ú";
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000 && y < y_start + gamelen + 1) {
			cout << "  ";
			SetPosition(x, ++y);
			cout << "¡Ú";
		}
		if (GetAsyncKeyState(VK_SPACE) & 0x8000 && (y - y_start != gamelen)) {
			SetPosition(x, y);
			return (y - y_start);
		}
		SetPosition(x, y);
		Sleep(30);
	}
}

COORD Cursor::GameCursor(short board_x, short board_y, size_t arrrow, size_t arrcolumn, short cursor_x, short cursor_y) const {
	short x = cursor_x;
	short y = cursor_y;
	DWORD written = 0;
	arrrow *= 2;

	COORD crd;

	while (1) {
		if (GetAsyncKeyState(VK_UP) & 0x8000 && y > board_y) {
			SetPosition(x, --y);
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000 && y < board_y + arrcolumn - 1) {
			SetPosition(x, ++y);
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000 && x > board_x) {
			SetPosition(--(--x), y);
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000 && x < board_x + arrrow - 2) {
			SetPosition(++(++x), y);
		}
		if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
			SetPosition(x, y);
			// return row-index and col-index as a COORD. DO NOT FORGET!!!
			// row
			crd.X = GetCursorCoord().Y - board_y;
			// col
			crd.Y = (GetCursorCoord().X - board_x) / 2;
			return crd;
		}
		Sleep(100);
	}
}