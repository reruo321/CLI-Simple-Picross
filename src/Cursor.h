#pragma once
#include <iostream>
#include <windows.h>

namespace KEY_INPUT {
	enum {
		LEFT,
		RIGHT,
		UP,
		DOWN
	};
}

class Cursor
{
	HANDLE hConsole;
public:
	Cursor(short x, short y){
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsole, { x, y });
	}
	COORD GetCursorCoord() const;
	void SetPosition(short x, short y) const;
	HANDLE GetConsole() const;
	short SelectTitleMenu(short x_start, short y_start, size_t gamelen) const;
	COORD GameCursor(short board_x, short board_y, size_t arrrow, size_t arrcolumn, short cursor_x, short cursor_y) const;
};
