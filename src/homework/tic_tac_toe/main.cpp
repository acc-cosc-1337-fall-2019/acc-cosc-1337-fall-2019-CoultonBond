#include <tic_tac_toe_manager.h>
#include<iostream>

using std::cin; using std::cout;

int main()
{
	TicTacToeManager manager;
	string player;
	int position;
	string choice = "y";

	do //(choice == "y" || choice == "Y")
	{
		TicTacToe game;

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

		manager.save_game(game);

		cout << "Winner\n";
		cout << "Enter y to play again: ";
		cin >> choice;


	} while (choice == "y" || choice == "Y");

	cout << "History: \n";
	cout << manager;

	return 0;
}
		
