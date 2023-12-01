#include "DrinkMachine.h"

double DrinkMachine::inputMoney(int menuChoice)
{
	double input = 0.0;
	switch (menuChoice)
	{
	case 1:
		do {
			cout << "How much money do you wish to input to purchase a cola?";
			cin >> input;
			if (input < 0)
				cout << "Error. input cannot be negative" << endl;
		} while (input < 0);
		break;
	case 2:
		do {
			cout << "How much money do you wish to input to purchase a root beer?";
			cin >> input;
			if (input < 0)
				cout << "Error. input cannot be negative" << endl;
		} while (input < 0);
		break;
	case 3:
		do {
			cout << "How much money do you wish to input to purchase an orange soda?";
			cin >> input;
			if (input < 0)
				cout << "Error. input cannot be negative" << endl;
		} while (input < 0);
		break;
	case 4:
		do {
			cout << "How much money do you wish to input to purchase a grape soda?";
			cin >> input;
			if (input < 0)
				cout << "Error. input cannot be negative" << endl;
		} while (input < 0);
		break;
	case 5:
		do {
			cout << "How much money do you wish to input to purchase a bottled water?";
			cin >> input;
			if (input < 0)
				cout << "Error. input cannot be negative" << endl;
		} while (input < 0);
		break;
	}
	return input;
}

void DrinkMachine::dailyReport()
{
	cout << "Quantity of each drink left in machine" << endl;
	cout << "Cola: " << a[0].numInMachine << endl;
	cout << "Root beer: " << a[1].numInMachine << endl;
	cout << "Orange soda: " << a[2].numInMachine << endl;
	cout << "Grape soda: " << a[3].numInMachine << endl;
	cout << "Bottled water: " << a[4].numInMachine << endl << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Money Collected: $" << moneyCollected << endl;
}

DrinkMachine::DrinkMachine()
{
	moneyCollected = 0.0;
}

DrinkMachine::~DrinkMachine()
{
	dailyReport();
}

void DrinkMachine::displayChoices()
{
	cout << "Select a drink from menu below." << endl;
	cout << "1. Cola" << setw(20) << "$1.00" << endl;
	cout << "2. Root beer" << setw(15) << "$1.00" << endl;
	cout << "3. Orange soda" << setw(13) << "$1.00" << endl;
	cout << "4. Grape soda" << setw(14) << "$1.00" << endl;
	cout << "5. Bottled water" << setw(11) << "$1.50" << endl;
	cout << "6. Quit" << endl;
}

void DrinkMachine::buyDrink(int menuChoice)
{
	char choice;
	double in = inputMoney(menuChoice);
	cout << fixed << showpoint << setprecision(2);
	switch (menuChoice)
	{
	case 1:	
		do
		{
			cout << "Do you still wish to purchase this cola? (Y\\N)";
			cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N')
				cout << "Input error. Please enter a valid choice (Y for yes or N for no)." << endl;
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
		if (toupper(choice) == 'Y')
		{
			if (a[0].numInMachine > 0 && in == 1.00)
			{
				a[0].numInMachine--;
				moneyCollected += in;
			}
			else if (a[0].numInMachine > 0 && in > 1.00)
			{
				a[0].numInMachine--;
				moneyCollected += 1.00;
				cout << "Change due: $" << in - 1.00 << endl;
				cout << "here is your cola" << endl;
			}
			else if (a[0].numInMachine == 0)
			{
				cout << "sold out of cola" << endl;
				cout << "Returning your money input: $" << in << endl;
			}
			else if (in < 1.00)
			{
				cout << "Not enough money input to purchase a cola." << endl;
				cout << "Returning your money input: $" << in << endl;
			}
		}
		else
			cout << "Returning your money input: $" << in << endl;
		break;
	case 2:
		do
		{
			cout << "Do you still wish to purchase this root beer? (Y\\N)";
			cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N')
				cout << "Input error. Please enter a valid choice (Y for yes or N for no)." << endl;
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
		if (toupper(choice) == 'Y')
		{
			if (a[1].numInMachine > 0 && in == 1.00)
			{
				a[1].numInMachine--;
				moneyCollected += in;
			}
			else if (a[1].numInMachine > 0 && in > 1.00)
			{
				a[1].numInMachine--;
				moneyCollected += 1.00;
				cout << "Change due: $" << in - 1.00 << endl;
				cout << "here is your root beer" << endl;
			}
			else if (a[1].numInMachine == 0)
			{
				cout << "sold out of root beer" << endl;
				cout << "Returning your money input: $" << in << endl;
			}
			else if (in < 1.00)
			{
				cout << "Not enough money input to purchase a root beer." << endl;
				cout << "Returning your money input: $" << in << endl;
			}
		}
		else 
			cout << "Returning your money input: $" << in << endl;
		break;
	case 3:
		do
		{
			cout << "Do you still wish to purchase this orange soda? (Y\\N)";
			cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N')
				cout << "Input error. Please enter a valid choice (Y for yes or N for no)." << endl;
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
		if (toupper(choice) == 'Y')
		{
			if (a[2].numInMachine > 0 && in == 1.00)
			{
				a[2].numInMachine--;
				moneyCollected += in;
			}
			else if (a[2].numInMachine > 0 && in > 1.00)
			{
				a[2].numInMachine--;
				moneyCollected += 1.00;
				cout << "Change due: $" << in - 1.00 << endl;
				cout << "here is your orange soda" << endl;
			}
			else if (a[2].numInMachine == 0)
			{
				cout << "sold out of orange soda" << endl;
				cout << "Returning your money input: $" << in << endl;
			}
			else if (in < 1.00)
			{
				cout << "Not enough money input to purchase an orange soda." << endl;
				cout << "Returning your money input: $" << in << endl;
			}
		}
		else 
			cout << "Returning your money input: $" << in << endl;
		break;
	case 4:
		do
		{
			cout << "Do you still wish to purchase this grape soda? (Y\\N)";
			cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N')
				cout << "Input error. Please enter a valid choice (Y for yes or N for no)." << endl;
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
		if (toupper(choice) == 'Y')
		{
			if (a[3].numInMachine > 0 && in == 1.00)
			{
				a[3].numInMachine--;
				moneyCollected += in;
			}
			else if (a[3].numInMachine > 0 && in > 1.00)
			{
				a[3].numInMachine--;
				moneyCollected += 1.00;
				cout << "Change due: $" << in - 1.00 << endl;
				cout << "here is your grape soda" << endl;
			}
			else if (a[3].numInMachine == 0)
			{
				cout << "sold out of grape soda" << endl;
				cout << "Returning your money input: $" << in << endl;
			}
			else if (in < 1.00)
			{
				cout << "Not enough money input to purchase a grape soda." << endl;
				cout << "Returning your money input: $" << in << endl;
			}
		}
		else 
			cout << "Returning your money input: $" << in << endl;
		break;
	case 5:
		do
		{
			cout << "Do you still wish to purchase this bottled water? (Y\\N)";
			cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N')
				cout << "Input error. Please enter a valid choice (Y for yes or N for no)." << endl;
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');
		if (toupper(choice) == 'Y')
		{
			if (a[4].numInMachine > 0 && in == 1.50)
			{
				a[4].numInMachine--;
				moneyCollected += in;
			}
			else if (a[4].numInMachine > 0 && in > 1.50)
			{
				a[4].numInMachine--;
				moneyCollected += 1.50;
				cout << "Change due: $" << in - 1.50 << endl;
				cout << "here is your bottled water" << endl;
			}
			else if (a[4].numInMachine == 0)
			{
				cout << "sold out of bottled water" << endl;
				cout << "Returning your money input: $" << in << endl;
			}
			else if (in < 1.50)
			{
				cout << "Not enough money input to purchase a bottled water." << endl;
				cout << "Returning your money input: $" << in << endl;
			}
		}
		else 
			cout << "Returning your money input: $" << in << endl;
		break;
	}
}

