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

};