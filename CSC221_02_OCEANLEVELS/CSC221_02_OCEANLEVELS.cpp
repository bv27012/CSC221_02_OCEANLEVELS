//Calculates and displays the sea level rise over 5, 7, and 10 years.

#include <iostream>
using namespace std;
int main()
{
	const double levelrise = 1.5;
	int numberofyears = 5;
	double yearlyRise = levelrise * numberofyears;
	cout << "The sea level rises about 1.5mL every year. Here's what it will be at after every 5, 7, and 10 years. \n";
	cout << "After five years, the sea level will go up by " << yearlyRise << "mm. \n";
	cout << endl;

	numberofyears = 7;
	yearlyRise = levelrise * numberofyears;
	cout << "After seven years, the sea level will go up by " << yearlyRise << "mm. \n";
	cout << endl;

	numberofyears = 10;
	yearlyRise = levelrise * numberofyears;
	cout << "After ten years, the sea level will go up by " << yearlyRise << "mm. \n";
	cout << endl;

	return 0;
}