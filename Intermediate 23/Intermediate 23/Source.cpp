//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by <Michael France> on <10/02/2018>
#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	do {
		int points[5] = { 62, 75, 100, 83, 85 };
		char grades[5] = { 'D', 'C', 'A', 'B', 'B' };

		cout << points[x] << "->" << grades[x] << endl;
		x++;
	} while (x < 5);

	system("pause");
	return 0;
}