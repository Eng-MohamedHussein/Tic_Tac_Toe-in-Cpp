#include"Board.h"
#include"functions.h"




int main() {
	string player1, player2, currenPlayer;
	int playernumber,row, column,turns;

	getPlayers(player1, player2);
	setPlayer(player1,player2,currenPlayer,playernumber);
	Board gameBoard;
	gameBoard.setBoard();
	
	turns = 0;
	while (turns<10)
	{
		if (turns == 4) {
			cout << "it's draw" << endl;
			break;
		}
		getEntry(row, column);
		gameBoard.updateBoard(row, column, playernumber);
		
		if (gameBoard.checkWinner(playernumber)) {
			cout << "the winner is: " << currenPlayer << endl;
			break;
		}
		changePlayer(player1, player2, currenPlayer, playernumber);
		getEntry(row, column);
		
		gameBoard.updateBoard(row, column, playernumber);
		
		if (gameBoard.checkWinner(playernumber)) {
			cout << "the winner is: " << currenPlayer << endl;
			break;
		}
		changePlayer(player1, player2, currenPlayer, playernumber);
		turns++;
	}
}