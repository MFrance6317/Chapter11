#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int numbArray[12];

	for (int i = 0; i < size(numbArray); i++){
		cout << "Enter a number: ";
		cin >> numbArray[i];
	}
	sort(numbArray, numbArray + size(numbArray));
	for (int i = 0; i < size(numbArray); i++){
		cout << numbArray[i] << endl;
	}

	system("pause");
	return 0;
}