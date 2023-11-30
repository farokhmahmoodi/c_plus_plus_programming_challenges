#include "TestGrader.h"

TestGrader::TestGrader()
{
	for (int i = 0; i < 20; i++)
		answers[i] = ' ';
}

void TestGrader::setKey(const string a)
{
	for (int i = 0; i < 20; i++)
		answers[i] = a[i];
}

string TestGrader::grade(const char a[])
{
	string grade, pass_fail, right, wrong,  wrongList;
	int correct, incorrect;
	correct = incorrect = 0;
	int b[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		if (answers[i] == a[i])
			correct++;
		else 
		{
			incorrect++;
			b[i] = i + 1;
		}
	}

	if (correct >= 15)
		pass_fail = "You passed the exam. ";
	else
		pass_fail = "You failed the exam. ";

	switch (correct)
	{
	case 0:
		right = "You got 0 correct answers.";
		break;
	case 1:
		right = "You got 1 right answer.";
		break;
	case 2:
		right = "You got 2 right answers.";
		break;
	case 3:
		right = "You got 3 right answers.";
		break;
	case 4:
		right = "You got 4 right answers.";
		break;
	case 5:
		right = "You got 5 right answers.";
		break;
	case 6:
		right = "You got 6 right answers.";
		break;
	case 7:
		right = "You got 7 right answers.";
		break;
	case 8:
		right = "You got 8 right answers.";
		break;
	case 9:
		right = "You got 9 right answers.";
		break;
	case 10:
		right = "You got 10 right answers.";
		break;
	case 11:
		right = "You got 11 right answers.";
		break;
	case 12:
		right = "You got 12 right answers.";
		break;
	case 13:
		right = "You got 13 right answers.";
		break;
	case 14:
		right = "You got 14 right answers.";
		break;
	case 15:
		right = "You got 15 right answers.";
		break;
	case 16:
		right = "You got 16 right answers.";
		break;
	case 17:
		right = "You got 17 right answers.";
		break;
	case 18:
		right = "You got 18 right answers.";
		break;
	case 19:
		right = "You got 19 right answers.";
		break;
	case 20:
		right = "You got 20 right answers.";
		break;
	}

	switch (incorrect)
	{
	case 0:
		wrong = "You got 0 wrong answers.";
		break;
	case 1:
		wrong = "You got 1 wrong answer.";
		break;
	case 2:
		wrong = "You got 2 wrong answers.";
		break;
	case 3:
		wrong = "You got 3 wrong answers.";
		break;
	case 4:
		wrong = "You got 4 wrong answers.";
		break;
	case 5:
		wrong = "You got 5 wrong answers.";
		break;
	case 6:
		wrong = "You got 6 wrong answers.";
		break;
	case 7:
		wrong = "You got 7 wrong answers.";
		break;
	case 8:
		wrong = "You got 8 wrong answers.";
		break;
	case 9:
		wrong = "You got 9 wrong answers.";
		break;
	case 10:
		wrong = "You got 10 wrong answers.";
		break;
	case 11:
		wrong = "You got 11 wrong answers.";
		break;
	case 12:
		wrong = "You got 12 wrong answers.";
		break;
	case 13:
		wrong = "You got 13 wrong answers.";
		break;
	case 14:
		wrong = "You got 14 wrong answers.";
		break;
	case 15:
		wrong = "You got 15 wrong answers.";
		break;
	case 16:
		wrong = "You got 16 wrong answers.";
		break;
	case 17:
		wrong = "You got 17 wrong answers.";
		break;
	case 18:
		wrong = "You got 18 wrong answers.";
		break;
	case 19:
		wrong = "You got 19 wrong answers.";
		break;
	case 20:
		wrong = "You got 20 wrong answers.";
		break;
	}

	if (incorrect > 0)
	{
		wrongList = " Question numbers of incorrectly answered questions:";
		for (int i = 0; i < 20; i++)
		{
			if (b[i] != 0)
			{
				switch (b[i])
				{
				case 1:
					wrongList = wrongList + "1 ";
					break;
				case 2:
					wrongList = wrongList + "2 ";
					break;
				case 3:
					wrongList = wrongList + "3 ";
					break;
				case 4:
					wrongList = wrongList + "4 ";
					break;
				case 5:
					wrongList = wrongList + "5 ";
					break;
				case 6:
					wrongList = wrongList + "6 ";
					break;
				case 7:
					wrongList = wrongList + "7 ";
					break;
				case 8:
					wrongList = wrongList + "8 ";
					break;
				case 9:
					wrongList = wrongList + "9 ";
					break;
				case 10:
					wrongList = wrongList + "10 ";
					break;
				case 11:
					wrongList = wrongList + "11 ";
					break;
				case 12:
					wrongList = wrongList + "12 ";
					break;
				case 13:
					wrongList = wrongList + "13 ";
					break;
				case 14:
					wrongList = wrongList + "14 ";
					break;
				case 15:
					wrongList = wrongList + "15 ";
					break;
				case 16:
					wrongList = wrongList + "16 ";
					break;
				case 17:
					wrongList = wrongList + "17 ";
					break;
				case 18:
					wrongList = wrongList + "18 ";
					break;
				case 19:
					wrongList = wrongList + "19 ";
					break;
				case 20:
					wrongList = wrongList + "20 ";
					break;
				}
			}

		}
		grade = pass_fail + right + wrong + wrongList;
	}
	else
		grade = pass_fail + right + wrong;
	return grade;
}