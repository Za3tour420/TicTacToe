#ifndef XO_H_INCLUDED
#define XO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void setboard(char board[][3]);
void player1move(char board[][3]);
void player2move(char board[][3]);
void showboard(char board[][3]);
int checkspace(char board[][3],int row,int column);
int checkwinner(char board[][3]);

#endif // XO_H_INCLUDED
