#include<iostream>
#include<string>
using namespace std;
int main() {
	int playchoice = 0;
	do {
		int i = 0, win1 = 0, win2 = 0;
		char num1, num2;
		string str1, str2;
		cout << "Enter player1 name: ";
		cin >> str1;
		cout << "Enter player2 name: ";
		cin >> str2;
		char array1[3][3] = { { 'A', 'B', 'C' }, { 'D', 'E', 'F' }, { 'G', 'H', 'I' } };

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "\t\t" << array1[i][j] << "  ";
			}
			cout << endl;
			cout << endl;
		}
		while (i < 5 && (win1 != 1 || win2 != 1)) {
			cout << "Player1(" << str1 << ")" << "turn";
			cin >> num1;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (array1[i][j] == num1) {
						array1[i][j] = 'O';
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					cout << "\t\t" << array1[i][j] << "  ";
				}
				cout << endl;
				cout << endl;
			}
			if (array1[0][0] == 'O' && array1[0][1] == 'O' && array1[0][2] == 'O') {
				++win1;
			}
			else if (array1[1][0] == 'O' && array1[1][1] == 'O' && array1[1][2] == 'O') {
				++win1;
			}
			else if (array1[2][0] == 'O' && array1[2][1] == 'O' && array1[2][2] == 'O') {
				++win1;
			}
			else if (array1[0][0] == 'O' && array1[1][0] == 'O' && array1[2][0] == 'O') {
				++win1;
			}
			else if (array1[0][1] == 'O' && array1[1][1] == 'O' && array1[2][1] == 'O') {
				++win1;
			}
			else if (array1[0][2] == 'O' && array1[1][2] == 'O' && array1[2][2] == 'O') {
				++win1;
			}
			else if (array1[0][0] == 'X' && array1[0][1] == 'X' && array1[0][2] == 'X') {
				++win2;
			}
			else if (array1[1][0] == 'X' && array1[1][1] == 'X' && array1[1][2] == 'X') {
				++win2;
			}
			else if (array1[2][0] == 'X' && array1[2][1] == 'X' && array1[2][2] == 'X') {
				++win2;
			}
			else if (array1[0][0] == 'X' && array1[1][0] == 'X' && array1[2][0] == 'X') {
				++win2;
			}
			else if (array1[0][1] == 'X' && array1[1][1] == 'X' && array1[2][1] == 'X') {
				++win2;
			}
			else if (array1[0][2] == 'X' && array1[1][2] == 'X' && array1[2][2] == 'X') {
				++win2;
			}
			else if (array1[0][0] == 'O' && array1[1][1] == 'O' && array1[2][2] == 'O') {
				++win1;
			}
			else if (array1[0][0] == 'X' && array1[1][1] == 'X' && array1[2][2] == 'X') {
				++win2;
			}
			else if (array1[0][2] == 'O' && array1[1][1] == 'O' && array1[2][0] == 'O') {
				++win1;
			}
			else if (array1[0][2] == 'X' && array1[1][1] == 'X' && array1[2][0] == 'X') {
				++win2;
			}
			if (win1 == 1) {
				cout << "Player1 win." << endl;
				break;
			}
			else if (win2 == 1) {
				cout << "Player2 win." << endl;
				break;
			}
			else if (i == 4) {
				cout << "Game Draw:";
				break;
			}

			cout << "Player2(" << str2 << ")" << "turn";
			cin >> num2;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (array1[i][j] == num2) {
						array1[i][j] = 'X';
					}
				}
			}
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					cout << "\t\t" << array1[i][j] << "  ";
				}
				cout << endl;
				cout << endl;
			}
			if (array1[0][0] == 'O' && array1[0][1] == 'O' && array1[0][2] == 'O') {
				++win1;
			}
			else if (array1[1][0] == 'O' && array1[1][1] == 'O' && array1[1][2] == 'O') {
				++win1;
			}
			else if (array1[2][0] == 'O' && array1[2][1] == 'O' && array1[2][2] == 'O') {
				++win1;
			}
			else if (array1[0][0] == 'O' && array1[1][0] == 'O' && array1[2][0] == 'O') {
				++win1;
			}
			else if (array1[0][1] == 'O' && array1[1][1] == 'O' && array1[2][1] == 'O') {
				++win1;
			}
			else if (array1[0][2] == 'O' && array1[1][2] == 'O' && array1[2][2] == 'O') {
				++win1;
			}
			else if (array1[0][0] == 'X' && array1[0][1] == 'X' && array1[0][2] == 'X') {
				++win2;
			}
			else if (array1[1][0] == 'X' && array1[1][1] == 'X' && array1[1][2] == 'X') {
				++win2;
			}
			else if (array1[2][0] == 'X' && array1[2][1] == 'X' && array1[2][2] == 'X') {
				++win2;
			}
			else if (array1[0][0] == 'X' && array1[1][0] == 'X' && array1[2][0] == 'X') {
				++win2;
			}
			else if (array1[0][1] == 'X' && array1[1][1] == 'X' && array1[2][1] == 'X') {
				++win2;
			}
			else if (array1[0][2] == 'X' && array1[1][2] == 'X' && array1[2][2] == 'X') {
				++win2;
			}
			else if (array1[0][0] == 'O' && array1[1][1] == 'O' && array1[2][2] == 'O') {
				++win1;
			}
			else if (array1[0][0] == 'X' && array1[1][1] == 'X' && array1[2][2] == 'X') {
				++win2;
			}
			else if (array1[0][2] == 'O' && array1[1][1] == 'O' && array1[2][0] == 'O') {
				++win1;
			}
			else if (array1[0][2] == 'X' && array1[1][1] == 'X' && array1[2][0] == 'X') {
				++win2;
			}

			if (win1 == 1) {
				cout << "Player1 win." << endl;
				break;
			}
			else if (win2 == 1) {
				cout << "Player2 win." << endl;
				break;
			}
			else if (i == 4) {
				cout << "Game Draw:";
				break;
			}
			i++;

		}
		cout << "iF! you want to play again press (1) for exit your game press (0)!";
		cin >> playchoice;
	}
	while (playchoice == 1);
	system("pause");
}