#include<string>
#include<vector>
#include<iostream>

using std::string; using std::vector; using std::cout;

//h
/*
Represents one game of Tic-Tac-Toe
*/
class TicTacToe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player()const;
	friend std::istream& operator >> (std::istream& in, TicTacToe& position);
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& display);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();

	vector<string> pegs{ 9, " " };//initializer
	string next_player;
};