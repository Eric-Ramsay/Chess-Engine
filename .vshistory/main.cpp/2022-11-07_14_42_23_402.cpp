#include <iostream>
#include <string>

#include "eval.h"
#include "display.h"


int main() {
	int ape;
	Board board = initBoard();
	std::cout << displayBoard(board) << std::endl;
	std::cin >> ape;

	return 0;
}