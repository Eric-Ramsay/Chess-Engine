#pragma once
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

struct Move {
	char startSquare;
	char endSquare;
	char captureSquare;
	short promoteType;
	char altStartSquare;
	char altEndSquare;

	Move(char start, char end, char capture = -1, short type = -1, char altStart = -1, char altEnd = -1) {
		startSquare = start;
		endSquare = end;
		captureSquare = capture;
		promoteType = type;
		altStartSquare = altStart;
		altEndSquare = altEnd;
	}
};