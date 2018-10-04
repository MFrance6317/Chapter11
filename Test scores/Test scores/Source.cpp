#include <iostream>
#include <string>
using namespace std;

int main()
{
	double average;
	double highScore = 80;
	double lowScore = 35;
	double testScore;
	double scoreArray[10] = { 0.0 };

	for (int i = 0; i < size(scoreArray); i++) {

		cout << "Enter a test score: ";
		cin >> testScore;

		if (testScore <= lowScore) {
			lowScore = testScore;
			cout << "Too bad, come in after school to retake and try to fix your low score. " << endl;
		}
		else if (testScore >= highScore && testScore < 101) {
			highScore = testScore;

			cout << "Congrats on your highscore! " << endl;
		}
		else if (testScore > 100 || testScore < 0) {
			cout << "Incorrect, try again" << endl;
		}
		else if (testScore > lowScore && testScore > highScore) {
		cout << "You passed. " << endl;
		}
	}

	system("pause");
	return 0;
}