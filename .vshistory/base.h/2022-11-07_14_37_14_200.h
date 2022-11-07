#pragma once
#include "structs.h"

//Set up the board
Board initBoard() {
	Board board = new Board();
	board.lastMove = Move(-1, -1);
	for (int i = 0; i < 64; i++) {
		Piece piece;
		if (i < 16) {
			piece.color = WHITE;
			if (i > 7) {
				piece.type = PAWN;
			}
		}
		else if (i >= 48) {
			piece.color = BLACK;
			if (i < 56) {
				piece.type = PAWN;
			}
		}
		board.squares.push_back(piece);
	}
	/*board.squares[0].type = ROOK;
	board.squares[1].type = KNIGHT;
	board.squares[2].type = BISHOP;
	board.squares[3].type = QUEEN;
	board.squares[4].type = KING;
	board.squares[5].type = BISHOP;
	board.squares[6].type = KNIGHT;
	board.squares[7].type = ROOK;

	board.squares[56].type = ROOK;
	board.squares[57].type = KNIGHT;
	board.squares[58].type = BISHOP;
	board.squares[59].type = QUEEN;
	board.squares[60].type = KING;
	board.squares[61].type = BISHOP;
	board.squares[62].type = KNIGHT;
	board.squares[63].type = ROOK;
	*/
	return board;
}

//Given a board state, return a list of moves
void getMoves(Board board, bool validate = true) {

}

//Flip the board upside down
void flipBoard() {

}

//Apply a move to the board state
void makeMove() {

}