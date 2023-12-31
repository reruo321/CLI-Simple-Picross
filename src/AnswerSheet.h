#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace AnswerSheetSample {
	const vector<string> SheetName = { "Apple", "Checkered", "Pyramid", "15x45_Over30Exception", "45x15_Over30Exception", "10x9_Less10Exception", "9x10_Less10Exception", "SheetShapeException", "SheetValueException"};
	const vector<string> ExceptionName = { "Exception" };

	// 10 columns 	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	// 15 columns   {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}

	const vector<vector<vector<char>>> Sheet = {
		{
			// 10 x 10 Apple
			{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
			{0, 0, 1, 1, 1, 0, 1, 1, 0, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 0, 1, 1, 0, 0, 1, 1, 0, 0}
		},

		{
			// 10 x 10 Checkered Pattern
			{1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
			{0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
			{1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
			{0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
			{1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
			{0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
			{1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
			{0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
			{1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
			{0, 1, 0, 1, 0, 1, 0, 1, 0, 1}
		},

		{
			// 15 x 15 Pyramid
			{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}, // 5
			{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
			{0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0}, // 10
			{0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
			{1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 15
		},

		{
		// 15 x 45 Over30Exception
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, // 5
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, // 10
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, // 15
		},

		{
			// 45 x 15 Over30Exception
			{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}, // 5
			{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
			{0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0}, // 10
			{0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
			{1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 15
			{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}, // 5
			{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
			{0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0}, // 10
			{0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
			{1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 15
			{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}, // 5
			{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
			{0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0}, // 10
			{0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
			{1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 15
		},

		{
			// 10 x 9 Less10Exception
			{0, 0, 0, 0, 0, 0, 1, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0},
			{0, 0, 1, 1, 1, 0, 1, 1, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1},
			{0, 1, 1, 1, 1, 1, 1, 1, 1},
			{0, 1, 0, 1, 1, 1, 1, 1, 1},
			{0, 1, 0, 1, 1, 1, 1, 1, 1},
			{0, 1, 1, 1, 1, 1, 1, 1, 1},
			{0, 1, 1, 1, 1, 1, 1, 1, 1},
			{0, 0, 1, 1, 0, 0, 1, 1, 0}
		},

		{
			// 9 x 10 Less10Exception
			{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
			{0, 0, 1, 1, 1, 0, 1, 1, 0, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
		},

		{
		// SheetShapeException
		{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},    // Exception!
		{0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}, // 5
		{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
		{0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0}, // 10
		{0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
		{1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 15
		},

		{
			// SheetValueException
			{0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0}, // 5
			{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
			{0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},
			{0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0}, // 10
			{0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
			{0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
			{1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2}, // Exception!
		}

	};
}