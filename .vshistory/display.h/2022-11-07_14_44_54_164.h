#pragma once
#include "structs.h"

//Converts a move (see structs.h) into a string like "e2-e4"
std::string moveToString() {

	return "";
}

//Takes both a string like "e2-e4" and a list of possible moves and returns the index of the move in that list
short findMove(std::vector<Move> moves) {

	return -1;
}

//Takes a board as an argument, and returns a stylized string showing the board
std::string displayBoard(Board board) {
	std::string msg = "";
	char letter;
	for (int i = 7; i >= 0; i--) {
		for (int j = 0; j < 8; j++) {
			switch (board.squares[i * 8 + j].type) {
			case PAWN: letter = 'P'; break;
			case KNIGHT: letter = 'N'; break;
			case BISHOP: letter = 'B'; break;
			case ROOK: letter = 'R'; break;
			case QUEEN: letter = 'Q'; break;
			case KING: letter = 'K'; break;
			default: letter = '#'; if ((i % 2 == j % 2)) { letter = ' '; };
			}
			if (letter != ' ') {
				if (board.squares[i * 8 + j].color == BLACK) {
					letter = tolower(letter);
				}
			}
			msg += letter + " ";
		}
		msg += "\n";
	}
	return msg;
}