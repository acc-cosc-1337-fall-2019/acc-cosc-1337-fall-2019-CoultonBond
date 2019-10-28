//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;


bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || 
		check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else if (check_board_full())
	{
		winner = "C";
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

string TicTacToe::get_winner() const
{
	return winner;
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
	for (std::size_t i = 0; i < 9; i += 3)
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

void TicTacToe::set_winner()
{
	if (next_player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::istream& operator>>(std::istream& in, TicTacToe& position)
{
	int placement;//position
	cout << "Enter the chosen position for " << position.get_player() << ": ";
	in >> placement;

	while (placement <= 0 || placement > 9)
	{
		cout << "Please choose a position between 1 and 9: ";
		in >> placement;
	}
	position.mark_board(placement);
	return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& display)
{
	out << display.pegs[0] << "|" << display.pegs[1] << "|" << display.pegs[2] << "\n"
	    << display.pegs[3] << "|" << display.pegs[4] << "|" << display.pegs[5] << "\n"
	    << display.pegs[6] << "|" << display.pegs[7] << "|" << display.pegs[8] << "\n";

	return out;
}