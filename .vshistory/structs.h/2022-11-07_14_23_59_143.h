#pragma once
#include "constants.h"

//Piece type that makes up the board
struct Piece {
	short type = -1;
	COLOR color = WHITE;
	bool moved = true;

	Piece(short t, COLOR c, bool m) {
		type = t;
		color = c;
		moved = m;
	}
};

//Used to process moving around the board
struct Move {
	char startSquare;
	char endSquare;
	char captureSquare;
	short promoteType;
	char altStartSquare;
	char altEndSquare;

	Move(char start, char end, char capture = -1, short type = -1, char altStart = -1, char altEnd = -1) {
		//Where the piece was
		startSquare = start;
		//Where it goes to
		endSquare = end;
		//The square that gets captured - necessary for en passant
		captureSquare = capture;
		//The type of piece that this piece promotes to - for pawn promotion
		promoteType = type;
		//If another piece moves at the same time - for the rook during castling
		altStartSquare = altStart;
		altEndSquare = altEnd;
	}
};