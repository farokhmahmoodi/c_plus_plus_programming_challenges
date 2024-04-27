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
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

void calcAvgPricePerYear(ifstream&, string&);
void calcAvgPricePerMonth(ifstream&, string&);
void highestAndLowestPricePerYear(ifstream&, string&);
void lowestToHighestPrices(ifstream&, string&);
void highestToLowestPrices(ifstream&, string&);

int main()
{
    ifstream in("GasPrices.txt", ios::in);
    if (!in)
    {
        cout << "File failed to open.\n";
        return 0;
    }
    string line;

    //calcAvgPricePerYear(in, line);
    //cout << endl;
    //calcAvgPricePerMonth(in, line);
    //cout << endl;
    //highestAndLowestPricePerYear(in, line);
    lowestToHighestPrices(in, line);
    in.close();

    return 0;
}

void calcAvgPricePerYear(ifstream& in, string& line)
{
    set<int> years;
    vector<double> prices;
    map<int, double> avgPricePerYear;
    int month, year;
    double price, avg = 0;

    in.clear();
    in.seekg(0L, ios::beg);
    while (getline(in, line))
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (ispunct(line[i]))
            {
                if (line[i] != '.')
                    line.replace(i, 1, " ");
            }
        }
        line.erase(0, 6);
        istringstream istr(line);
        istr >> year >> price;
        auto it = years.find(year); //find if year is in set
        if (it != years.end()) //if year is found in set
        {
            prices.emplace_back(price); //accumulate price
        }
        else //if year is not found in set
        {
            if (years.size() == 0)
            {
                years.emplace(year);
                prices.emplace_back(price);
            }
            else
            {
                years.emplace(year);
                for (int i = 0; i < prices.size(); i++)
                {
                    avg += prices[i];
                }
                avg /= prices.size();
                it--;
                it--;
                avgPricePerYear.emplace(*it, avg);
                prices.clear();
                avg = 0;
                prices.emplace_back(price);
            }
        }
    }
    auto it = years.find(year); // add last year and average to map
    for (int i = 0; i < prices.size(); i++)
    {
        avg += prices[i];
    }
    avg /= prices.size();
    avgPricePerYear.emplace(*it, avg);
    prices.clear();
    cout << setw(35) << "Average Gas Price per Year\n";
    cout << "---------------------------------------------\n";
    cout << setw(10) << "Year" << setw(30) << "Average Price\n";
    for (auto elem : avgPricePerYear)
        cout << setw(10) << elem.first << setw(20)
        << "$" << fixed << showpoint << setprecision(3) << elem.second << endl;
    in.clear();
    in.seekg(0L, ios::beg);
}

void calcAvgPricePerMonth(ifstream& in, string& line)
{   
    vector<string> months;
    vector<double> prices, avgPrices;
    string month,year, monthYear, hold;
    double price, avg = 0;

    in.clear();
    in.seekg(0L, ios::beg);
    while (getline(in, line))
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (ispunct(line[i]))
            {
                if (line[i] != '.')
                    line.replace(i, 1, " ");
            }
        }
        line.erase(3, 3);
        istringstream istr(line);
        istr >> month >> year >> price;
        monthYear = month + " " + year;
        auto it = find(months.begin(), months.end(), monthYear);
        if (it != months.end())
        {
            prices.emplace_back(price);
        }
        else
        {
            if (months.size() == 0)
            {
                months.emplace_back(monthYear);
                prices.emplace_back(price);
            }
            else
            {
                months.emplace_back(monthYear);
                for (int i = 0; i < prices.size(); i++)
                {
                    avg += prices[i];
                }
                avg /= prices.size();
                avgPrices.emplace_back(avg);
                prices.clear();
                avg = 0;
                prices.emplace_back(price);
            }
        }
    }
    auto it = find(months.begin(), months.end(), monthYear); //add last month into average price vector
    for (int i = 0; i < prices.size(); i++)
    {
        avg += prices[i];
    }
    avg /= prices.size();
    avgPrices.emplace_back(avg);
    prices.clear();
    cout << setw(35) << "Average Gas Price per Month\n";
    cout << "---------------------------------------------\n";
    cout << setw(17) << "Month and Year" << setw(23) << "Average Price\n";
    for (int i = 0; i < months.size(); i++)
    {
        cout << setw(13) << months[i] << setw(17)
            << "$" << fixed << showpoint << setprecision(3) << avgPrices[i] << endl;
    }
    in.clear();
    in.seekg(0L, ios::beg);
}

void highestAndLowestPricePerYear(ifstream& in, string& line)
{
    set<int> years;
    vector<double> prices;
    map<int, vector<double>> highLowPerYear;
    int year;
    double price, highest, lowest;

    in.clear();
    in.seekg(0L, ios::beg);
    while (getline(in, line))
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (ispunct(line[i]))
            {
                if (line[i] != '.')
                    line.replace(i, 1, " ");
            }
        }
        line.erase(0, 6);
        istringstream istr(line);
        istr >> year >> price;
        auto it = years.find(year);
        if (it != years.end())
        {
            prices.emplace_back(price);
        }
        else
        {
            if (years.size() == 0)
            {
                years.emplace(year);
                prices.emplace_back(price);
            }
            else
            {
                years.emplace(year);
                auto it2 = max_element(prices.begin(), prices.end());
                highest = *it2;
                it2 = min_element(prices.begin(), prices.end());
                lowest = *it2;
                prices.clear();
                prices.emplace_back(highest);
                prices.emplace_back(lowest);
                it--;
                it--;
                highLowPerYear.emplace(*it, prices);
                prices.clear();
                prices.emplace_back(price);
            }
        }
    }
    years.emplace(year);
    auto it = max_element(prices.begin(), prices.end());
    highest = *it;
    it = min_element(prices.begin(), prices.end());
    lowest = *it;
    prices.clear();
    prices.emplace_back(highest);
    prices.emplace_back(lowest);
    auto it2 = years.end();
    it2--;
    highLowPerYear.emplace(*it2, prices);
    prices.clear();
    cout << setw(55) << "Highest and Lowest Gas Price per Year\n";
    cout << "----------------------------------------------------------------------\n";
    cout << setw(10) << "Year" << setw(30) << "Highest Price" << setw(25) << "Lowest Price\n";
    for (auto elem : highLowPerYear)
    {
        cout << setw(10) << elem.first << setw(20);
        for (auto price : elem.second)
        {
            cout << "$" << fixed << showpoint << setprecision(3) << price << setw(20);
        }
        cout << endl;
    }
    in.clear();
    in.seekg(0L, ios::beg);
}

void lowestToHighestPrices(ifstream& in, string& line)
{
    string date;
    double price;
    map<double, string> lowToHigh;
    ofstream out("lowestToHighest.txt", ios::out);
    in.clear();
    in.seekg(0L, ios::beg);

    while (getline(in, line))
    {
        line.erase(10, 1);
        line.insert(10, ": ");
        istringstream istr(line);
        istr >> date >> price;
        lowToHigh.emplace(price, date);
    }
    for (auto elem : lowToHigh)
    {
        out << elem.second << elem.first << endl;
    }
    in.clear();
    in.seekg(0L, ios::beg);
    out.close();
}

void highestToLowestPrices(ifstream& in, string& line)
{
   
    in.clear();
    in.seekg(0L, ios::beg);



    in.clear();
    in.seekg(0L, ios::beg);
}