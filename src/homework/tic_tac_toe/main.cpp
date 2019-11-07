#include <tic_tac_toe_manager.h>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>

using std::cin; using std::cout;

int main()
{
	unique_ptr<TicTacToeManager> manager = 
		std::make_unique<TicTacToeManager>();
	string player;
	int game_type;
	int position;
	string choice = "y";

	do //(choice == "y" || choice == "Y")
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		unique_ptr<TicTacToe> game;//pointer

		if (game_type == 3)
		{
			std::make_unique<TicTacToe3>();
		}
		else
		{
			std::make_unique<TicTacToe4>();
		}

		//TicTacToe game;

		cout << "Would player 1 rather be X or O? : ";
		cin >> player;

		while (player != "X" && player != "O")
		{
			cout << "Please enter either an X or O: ";
			cin >> player;
		}

		game->start_game(player);

		while (!game->game_over())
		{
			cin >> *game;
			cout << *game;
		}

		manager->save_game(game);

		cout << "Winner\n";
		cout << "Enter y to play again: ";
		cin >> choice;


	} while (choice == "y" || choice == "Y");

	cout << "History: \n";
	cout << manager;

	return 0;
}
		
