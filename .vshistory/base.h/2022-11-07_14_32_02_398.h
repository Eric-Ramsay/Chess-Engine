#pragma once
#include "structs.h"

//Set up the board
Board initBoard() {
	Board board;
	board.lastMove = Move(-1, -1);
	for (let i = 0; i < 64; i++) {
		Piece piece;
		if (i < 16) {
			board[i].color = WHITE;
			if (i > 7) {
				board[i].type = PAWN;
			}
		}
		if (i >= 48) {
			board[i].color = BLACK;
			if (i < 56) {
				board[i].type = PAWN;
			}
		}
	}
	board[0].type = ROOK;
	board[1].type = KNIGHT;
	board[2].type = BISHOP;
	board[3].type = QUEEN;
	board[4].type = KING;
	board[5].type = BISHOP;
	board[6].type = KNIGHT;
	board[7].type = ROOK;

	board[56].type = ROOK;
	board[57].type = KNIGHT;
	board[58].type = BISHOP;
	board[59].type = QUEEN;
	board[60].type = KING;
	board[61].type = BISHOP;
	board[62].type = KNIGHT;
	board[63].type = ROOK;
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