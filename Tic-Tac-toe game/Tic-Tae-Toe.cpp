
#include<stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "loading.h"

using namespace std;

char board[3][3] = {
				   {'1', '2', '3'},
			   {'4', '5', '6'},
			   {'7', '8', '9'}
};

int input;
int row, column;
char turn = 'X';

string player1;
string player2;
bool draw = false;//假設空間一開始還沒有被使用

// 主要的遊戲版面
void displayBoard()
{
	system("cls");

	system("color 0E");

	cout << endl << endl;

	cout << "\t\t\t\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Tic Tac Toe Game \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \xB2\n";

	cout << "\t\t\t _______________________________________________ \n";

	cout << "\t\t\t|\t\t\t\t\t\t|\n";

	cout << "\t\t\t|\t\t\t\t\t\t|\n";

	cout << "\t\t\t|\t\t     |     |     \t\t|" << endl;

	cout << "\t\t\t|\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  \t\t|" << endl;

	cout << "\t\t\t|\t\t_____|_____|_____\t\t|" << endl;

	cout << "\t\t\t|\t\t     |     |     \t\t|" << endl;

	cout << "\t\t\t|\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  \t\t|" << endl;

	cout << "\t\t\t|\t\t_____|_____|_____\t\t|" << endl;

	cout << "\t\t\t|\t\t     |     |     \t\t|" << endl;

	cout << "\t\t\t|\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  \t\t|" << endl;

	cout << "\t\t\t|\t\t     |     |     \t\t|" << endl;

	cout << "\t\t\t|\t\t\t\t\t\t|" << endl << "\t\t\t|\t\t\t\t\t\t|" << endl;

	cout << "\t\t\t|_______________________________________________|\t";

}

void choice()
{
	cout << endl << "\n\n\t\t\t";
	cout <<"當輪到妳的回合,請輸入妳想要使用的數字位置" <<endl << "\n\n\t\t\t";
	if (turn == 'X')
	{
		cout << player1 << "'s turn [X] : ";
	}

	if (turn == 'O')
	{
		cout << player2 << "'s turn [O] : ";
	}


	cin >> input;

	switch (input)
	{
	case 1: row = 0; column = 0;
		break;

	case 2: row = 0; column = 1;
		break;

	case 3: row = 0; column = 2;
		break;

	case 4: row = 1; column = 0;
		break;

	case 5: row = 1; column = 1;
		break;

	case 6: row = 1; column = 2;
		break;

	case 7: row = 2; column = 0;
		break;

	case 8: row = 2; column = 1;
		break;

	case 9: row = 2; column = 2;
		break;

	default:
		cout << "\t\t\t錯誤的輸入\n";

	}

	if (turn == 'X' && (board[row][column] != 'X') && (board[row][column] != 'O'))
	{
		board[row][column] = 'X';
		turn = 'O';
	}

	else if (turn == 'O' && (board[row][column] != 'X') && (board[row][column] != 'O'))
	{
		board[row][column] = 'O';
		turn = 'X';
	}

	else
	{
		cout << "\t\t\t位置已經被使用 !, 請再試一次";
		choice();
	}

	displayBoard();
}

//判斷遊戲是否結束的function

bool gameOver()

{
	for (int i = 0; i < 3; i++)

		if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) || (board[0][i] == board[1][i] && board[0][i] == board[2][i]))

			return false; 

	if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0]))

		return false;	

		// 遍歷所有位置,來看是否還有空位的位置

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

			if (board[i][j] != 'X' && board[i][j] != 'O')

				return true; 

	draw = true; //目前還有使用的空間

	return false;	
}

int main()
{
	
	loadingBar();

	system("cls");

	system("color 0E");

	cout << "\n\n------------------------------------------\xB2 歡迎來到 Tic Toe Game \xB2----------------------------------------";

	cout << "\n\n\n\n\t\t\t請輸入 player 1 名字 : ";
	cin >> player1;

	cout << "\n\n\t\t\t請輸入 player 2 名字 : ";
	cin >> player2;

	while (gameOver()) // 會不斷執行直到遊戲結束

	{
		displayBoard();

		choice();

		gameOver();
	}

	if (turn == 'O' && draw == false)
		cout << "\n\n\t\t\t" << player1 << " Wins!\a \n\n";

	else if (turn == 'X' && draw == false)
		cout << "\n\n\t\t\t" << player2 << " Wins! \a\n\n";

	else
		cout << "\n\n\t\t\t Match Draw! \a \n\n";

	_getch();

	return 0;
}