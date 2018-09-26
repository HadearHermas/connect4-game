#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#ifndef connect4.h
#define connect4.h

class Connect4
{
	private:
		/* add your variables here */
		player class_p;
		GameState class_gs;
		board_holes board[6][7];
	public:
			void Print();
			Connect4(player Firstplayer);
			player GetCurrentPlayer();
			GameState PutDisc(int Column);

};



#endif // connect4
