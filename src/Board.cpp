#include "Board.h"

using namespace std;

vector<vector<int>> AnswerBoard::calRowNum() {
	
	vector<vector<int>> vec;
	int n;
	for (unsigned int i = 0; i < arr.size(); i++) {
		vec.push_back(vector<int>());
		n = 0;
		for (unsigned int j = 0; j < arr[i].size(); j++) {
			if (arr[i][j])
				n++;
			else
			{
				if (n) {
					vec[i].push_back(n);
					n = 0;
				}
			}
		}
		if (n)
			vec[i].push_back(n);
		if (!vec[i].size())
			vec[i].push_back(0);
	}
	return vec;
}

vector<vector<int>> AnswerBoard::calColNum() {

	vector<vector<int>> vec;
	unsigned int n;
	for (unsigned int i = 0; i < arr[0].size(); i++) {
		vec.push_back(vector<int>());
		n = 0;
		for (unsigned int j = 0; j < arr.size(); j++) {
			if (arr[j][i])
				n++;
			else
			{
				if (n) {
					vec[i].push_back(n);
					n = 0;
				}
			}
		}
		if (n)
			vec[i].push_back(n);
		if (!vec[i].size())
			vec[i].push_back(0);
	}
	return vec;
}

void Board::clearBoard() {
	fill(&arr[0][0], &arr[0][0]+sizeof(arr), 0);
}

void Board::markBoard(short row, short col) {
	if (static_cast<unsigned int>(arr[row][col]) < 2)
		++arr[row][col];
	else
		arr[row][col] = 0;
}

bool operator==(const Board& ref1, const Board& ref2) {
	for (unsigned int i = 0; i < ref1.arr.size(); i++) {
		for (unsigned int j = 0; j < ref1.arr[i].size(); j++) {
			if ((ref1.arr[i][j] & 0x1) ^ (ref2.arr[i][j] & 0x1))
				return false;
		}
	}
	return true;
}