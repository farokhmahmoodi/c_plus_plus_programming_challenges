/*In the student sample program files for this chapter, you will find a text file named GasPrices.txt. 
The file contains the weekly average prices for a gallon of gas in the United States, beginning on April 5, 1993,
and ending on August 26, 2013. Figure 17-10 shows an example of the first few lines of the file's contents:

Figure 17-10 Contents of the GasPrices.txt File

Each line in the file contains the average price for a gallon of gas on a specific date. Each line is formatted 
in the following way:

MM-DD-YYYY:Price
MM is the two-digit month, DD is the two-digit day, and YYYY is the four-digit year. Price is the average price 
per gallon of gas on the specified date.

For this assignment you are to write one or more programs that read the contents of the file and perform the 
following calculations:

AVERAGE PRICE PER YEAR: Calculate the average price of gas per year, for each year in the file. (The file's 
data starts in April 1993, and it ends in August 2013. Use the data that is present for the years 1993 and 2013.)

AVERAGE PRICE PER MONTH: Calculate the average price for each month in the file.

HIGHEST AND LOWEST PRICES PER YEAR: For each year in the file, determine the date and amount for the lowest 
price, and the highest price.

LIST OF PRICES, LOWEST TO HIGHEST: Generate a text file that lists the dates and prices, sorted from the 
lowest price to the highest.

LIST OF PRICES, HIGHEST TO LOWEST: Generate a text file that lists the dates and prices, sorted from the 
highest price to the lowest.

You can write one program to perform all of these calculations, or you can write different programs, one 
for each calculation. Regardless of the approach that you take, you should read the contents of the 
GasPrices.txt file, and extract its data into one or more STL containers appropriate for your algorithm.*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
    ifstream in("GasPrices.txt", ios::in);
    int month,day,year,count = 1;
    double price;
    string line;
    char dash1, dash2, colon;
    map<int, double> avgPricePerYear;

    if (!in)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    while (getline(in, line))
    {
        getline(in, line);
        istringstream istr(line);
        istr >> month >> dash1 >> day >> dash2 >> year >> colon >> price;
    }
    in.close();

    return 0;
}
