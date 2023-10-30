#include "Picross.h"
#include "AnswerSheet.h"

int main() {
	Picross * pic = new Picross();
	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 0);
	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 1);
	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 2);
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 3); // 15x45 Over30Exception
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 4); // 45x15 Over30Exception
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 5); // 10x9 Less10Exception
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 6); // 9x10 Less10Exception
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 7); // SheetShapeException
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 8); // SheetValueException
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::SheetName, 9); // SheetException
//	pic->addBoard(AnswerSheetSample::Sheet, AnswerSheetSample::ExceptionName, 5); // SheetNameException
	pic->drawScreen();

	return 0;
}