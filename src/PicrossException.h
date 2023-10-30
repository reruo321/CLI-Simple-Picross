#pragma once
#include <iostream>
using namespace std;

class Exception {
public:
	virtual void ShowException() const = 0;
};

class Over30Exception: Exception {
	int index;
public:
	Over30Exception(int index): index(index){}
	void ShowException() const {
		cout << index << "번째 게임 판은 너무 큽니다. 가로세로 30칸 이하의 게임을 넣어주십시오." << endl;
	}
};

class Less10Exception : Exception {
	int index;
public:
	Less10Exception(int index): index(index){}
	void ShowException() const {
		cout << index << "번째 게임 판은 너무 작습니다. 가로세로 10칸 이상의 게임을 넣어주십시오." << endl;
	}
};

class SheetValueException : Exception {
	int index;
public:
	SheetValueException(int index): index(index){}
	void ShowException() const {
		cout << index << "번째 정답시트 값이 잘못되었습니다. 0과 1 이외의 값을 수정하십시오." << endl;
	}
};

class SheetShapeException : Exception {
	int index;
public:
	SheetShapeException(int index) : index(index) {}
	void ShowException() const {
		cout << index << "번째 정답시트의 형태가 올바르지 않습니다. 직사각형 형태로 맞추십시오." << endl;
	}
};

class SheetException {
	int index;
public:
	SheetException(int index) : index(index) {}
	void ShowException() const {
		cout << index << "번째 정답시트는 존재하지 않습니다. 정답시트의 개수를 확인하십시오." << endl;
	}
};

class SheetNameException {
	int index;
public:
	SheetNameException(int index): index(index){}
	void ShowException() const {
		cout << index << "번째 정답시트의 이름이 존재하지 않습니다. 이름의 개수를 확인하십시오." << endl;
	}
};