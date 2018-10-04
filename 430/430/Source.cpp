#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	int valuesArray[7] = { 52, 47, 35, 26, 54, 75, 72};
	int total = 0;

	for (int i = 0; i < size(valuesArray); i++)
	{
		cout << valuesArray[i] << endl;
		total = total + valuesArray[i];
	}
	cout << total << endl;

	system("pause");
	return 0;
}