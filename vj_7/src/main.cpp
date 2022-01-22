#include <iostream>
#include "board.hpp"
#include "point.hpp"

int main()
{

	Board b1(13,33);
	Board b2;
	Board b3 = b1;

	Point dot1(10,15),dot2(5,4),dot3(10,24),dot4(8,15);

	b1.drawBoard(dot3);
	b1.drawBoard(dot4);
	b1.drawUpLine(dot4);
	b1.drawUpLine(dot3);
	
	b1.drawLine(dot3,dot4);
	b1.printBoard();

	b3.drawBoard(dot1);
	b3.drawBoard(dot2);
	b3.drawLine(dot1,dot2);
	b3.drawUpLine(dot1);
	b3.drawUpLine(dot2);
	b3.printBoard();

}