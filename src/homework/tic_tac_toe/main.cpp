#include <tic_tac_toe.h>
#include<iostream>

using std::cin; using std::cout;

int main()
{
	string player;
	int position;
	string choice = "y";

	TicTacToe game;

	do //(choice == "y" || choice == "Y")
	{
		cout << "Would player 1 rather be X or O? : ";
		cin >> player;

		while (player != "X" && player != "O")
		{
			cout << "Please enter either an X or O: ";
			cin >> player;
		}

		game.start_game(player);

		while (!game.game_over())
		{
			cin >> game;
			cout << game;
		}

		cout << "Winner\n";
		cout << "Enter y to play again: ";
		cin >> choice;


	} while (choice == "y" || choice == "Y");
	return 0;
}
		
