#pragma once
#include "structs.h"

//Set up the board
Board initBoard() {
	Board board;
	board.turn = WHITE;
	board.lastMove = Move(-1, -1);

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