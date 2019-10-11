//cpp
#include "tic_tac_toe.h"
#include <iostream>


bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || 
		check_diagonal_win() || check_board_full())
	{
		return true;
	}
	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

/*
Remember position is what user sees.
When you save position to vector subtract 1 from position.
*/
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();

}

string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::display_board() const
{
	cout << pegs[0] << "|" << pegs[1] << "|" << pegs[2] << "\n";
	cout << pegs[3] << "|" << pegs[4] << "|" << pegs[5] << "\n";
	cout << pegs[6] << "|" << pegs[7] << "|" << pegs[8] << "\n";
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else 
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[i + 6] != " ")
		{
			return true;
		}

	}
	return false;
}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2]
			&& pegs[i + 2] != " ")
		{
			return true;
		}

	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " "
		|| pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
		return true;
	return false;
}

void TicTacToe::clear_board()
{
	vector<string> pegs{ 9, " " };
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < 9; i++)
		if (pegs[i] == " ")
		{
			return false;
		}
	return true;
}
