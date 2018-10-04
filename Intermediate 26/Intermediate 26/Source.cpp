//Intermediate26.cpp - increases the prices stored in
//an array and then displays the increased prices
//Created/revised by <Michael France> on <10/03/2018>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	//declare variable
	//declare array
	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	double percentInc;
	double increase = 0.0;
	
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	percentInc = (increase / 100) + 1;
	for (int i = 0; i < prices[i]; i++) {
		cout << prices[i] * percentInc << endl;
	}

	system("pause");
	return 0;
}	//end of main function