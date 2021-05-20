#pragma once
#include<iostream>
#include<cstring>
#include<string>
using namespace std;


class Board
{
	string arr[3][3];
public:

	void setBoard();
	void updateBoard(int& p1, int& p2, int& number);
	void printBoard();
	bool checkWinner(int&num);
};

void Board::setBoard() {
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = "_";
		}
	}
}
void Board::printBoard() {
	cout << "   1| 2| 3|" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << " " << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void Board::updateBoard(int& p1, int& p2, int& number) {

	if (number == 1) {
		arr[p1 - 1][p2 - 1] = "x";
	}
	else if (number == 2) {
		arr[p1 - 1][p2 - 1] = "o";
	}
	printBoard();
}
bool Board::checkWinner(int&num) {
	
	if (num == 1) { //checking the first player

		//checking the diagonals

		if (arr[0][0] == "x" && arr[1][1] == "x" && arr[2][2] == "x") { return true; }
		else if (arr[0][2] == "x" && arr[1][1] == "x" && arr[2][0] == "x") { return true; }

		//checking the rows.

		else if (arr[0][0] == "x" && arr[0][1] == "x" && arr[0][2] == "x") { return true; }
		else if (arr[1][0] == "x" && arr[1][1] == "x" && arr[1][2] == "x") { return true; }
		else if (arr[2][0] == "x" && arr[2][1] == "x" && arr[2][2] == "x") { return true; }

		//checking the columns

		else if (arr[0][0] == "x" && arr[1][0] == "x" && arr[2][0] == "x") { return true; }
		else if (arr[0][1] == "x" && arr[1][1] == "x" && arr[2][1] == "x") { return true; }
		else if (arr[0][2] == "x" && arr[1][2] == "x" && arr[2][2] == "x") { return true; }
		else { return false; }
	}

	else if (num == 2) { //checking the second player
		
		//checking the diagonals

		if (arr[0][0] == "o" && arr[1][1] == "o" && arr[2][2] == "o") { return true; }
		else if (arr[0][2] == "o" && arr[1][1] == "o" && arr[2][0] == "o") { return true; }

		//checking the rows.

		else if (arr[0][0] == "o" && arr[0][1] == "o" && arr[0][2] == "o") { return true; }
		else if (arr[1][0] == "o" && arr[1][1] == "o" && arr[1][2] == "o") { return true; }
		else if (arr[2][0] == "o" && arr[2][1] == "o" && arr[2][2] == "o") { return true; }

		//checking the columns

		else if (arr[0][0] == "o" && arr[1][0] == "o" && arr[2][0] == "o") { return true; }
		else if (arr[0][1] == "o" && arr[1][1] == "o" && arr[2][1] == "o") { return true; }
		else if (arr[0][2] == "o" && arr[1][2] == "o" && arr[2][2] == "o") { return true; }
		else { return false; }
		
	}	
}