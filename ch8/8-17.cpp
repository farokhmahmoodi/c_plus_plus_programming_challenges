// 
//

#include "DrinkMachine.h"


int main()
{
	DrinkMachine a;
	int choice;
	do
	{
		do
		{
			a.displayChoices();
			cin >> choice;
			if (choice < 1 || choice > 6)
				cout << "Input error. Please enter valid choice (1-6)." << endl;
		} while (choice < 1 || choice > 6);
		if (choice != 6)
			a.buyDrink(choice);
	} while (choice != 6);
	
	return 0;
}


