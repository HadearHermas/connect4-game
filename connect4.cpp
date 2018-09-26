#include <iostream>
#include <string>
#include <cstdlib>
#include "connect4.h"
using namespace std;



void Connect4::Print()
{

}
Connect4::Connect4(player Firstplayer)
{
    class_p = Firstplayer;
    class_gs = okay;
    for(int i=0;i<6;i++)
    {
        for(int x=0;x<7;x++)
        {
            board[i][x]=Empty;
        }
    }
}

player Connect4::GetCurrentPlayer()
{
   return !class_p;

}

bool Connect4::win_hole(board_holes x)
{
   static magic_number=0;


}


GameState Connect4::PutDisc(int Column) //global row col (or private members)
{
    bool win=false;
     static int Row;
     player p=GetCurrentPlayer();
     if(p==Red)
        board[Row][Column]=Red;
     else if(p==Yellow)
        board[Row][Column]=Yellow;
     win = win_hole(board[Row][Column]);
     Row++;
     if(Row>5)
        Row=0;
     bool

}
