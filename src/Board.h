#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Board
{
	size_t row;
	size_t column;
protected:
	vector<vector<char>> arr;
public:
	Board(vector<vector<char>> ansArr) {
		row = ansArr.size();
		column = ansArr[0].size();
		arr.resize(row, vector<char>(column, 0));
	}
	size_t getRow() const { return row; }
	size_t getColumn() const { return column; }
	char getElement(short x, short y) const { return arr[x][y]; }
	vector<vector<char>> getArr() const { return arr; }
	virtual void clearBoard();
	virtual void markBoard(short x, short y);
	friend bool operator==(const Board& ref1, const Board& ref2);
	~Board() {
		vector<vector<char>>().swap(arr);
	}
};

class AnswerBoard : public Board
{
	vector<vector<int>> numRow;
	vector<vector<int>> numCol;
public:
	AnswerBoard(vector<vector<char>> ansArr): Board(ansArr) {
		copy(ansArr.begin(), ansArr.end(), this->arr.begin());
	}
	vector<vector<int>> calRowNum();
	vector<vector<int>> calColNum();
	void clearBoard() {};
	void markBoard(short row, short col) {};
	~AnswerBoard() {
		vector<vector<int>>().swap(numRow);
		vector<vector<int>>().swap(numCol);
	}
};