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

		do
		{
			game.display_board();
			cout << "Enter the the chosen position for " << game.get_player() << ": ";
			cin >> position;

			while (position <= 0 || position > 9)
			{
				cout << "Please choose a position between 1 and 9: ";
				cin >> position;
			}

			game.mark_board(position);

		} while (game.game_over() != true);
		game.display_board();
		cout << "Winner\n";
		cout << "Enter y to play again: ";
		cin >> choice;


	} while (choice == "y" || choice == "Y");
	return 0;
}
		
