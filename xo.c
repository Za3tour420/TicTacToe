#include "xo.h"

void setboard(char board[][3])
{
    board[0][0]=' ';
    board[0][1]=' ';
    board[0][2]=' ';
    board[1][0]=' ';
    board[1][1]=' ';
    board[1][2]=' ';
    board[2][0]=' ';
    board[2][1]=' ';
    board[2][2]=' ';
}

void player1move(char board[][3])
{
    int row,column,checksp;
    do
    {
        printf("\nEnter row : ");
        scanf("\n%d",&row);
    }
    while(row>3||row<1);
    do
    {
        printf("\nEnter column : ");
        scanf("\n%d",&column);
    }
    while(column>3||column<1);
    row--;
    column--;
    checksp=checkspace(board,row,column);
    if(checksp==1)
    {
        board[row][column]='X';
        showboard(board);
    }
}

void player2move(char board[][3])
{
    int row,column,checksp;
    do
    {
        printf("\nEnter row : ");
        scanf("\n%d",&row);
    }
    while(row>3||row<1);
    do
    {
        printf("\nEnter column : ");
        scanf("\n%d",&column);
    }
    while(column>3||column<1);
    row--;
    column--;
    checksp=checkspace(board,row,column);
    if(checksp==1)
    {
        board[row][column]='O';
        showboard(board);
    }
}

void showboard(char board[][3])
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", board[0][0], board[0][1], board[0][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", board[1][0], board[1][1], board[1][2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", board[2][0], board[2][1], board[2][2]);
    printf("     |     |     \n\n");
}

int checkspace(char board[][3],int row,int column) /*RETURNS 1 IF SPACE EMPTY, ELSE 0*/
{
    if(board[row][column]==' ')
        return 1;
    else
        return 0;
}

int checkwinner(char board[][3]) /*RETURNS 1 IF ONE OF THE PLAYERS WIN, -1 IF DRAW, ELSE 0*/
{
    if (board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][1] == board[0][2])
        return 1;

    else if (board[1][0] != ' ' && board[1][0] == board[1][1] && board[1][1] == board[1][2])
        return 1;

    else if (board[2][0] != ' ' && board[2][0] == board[2][1] && board[2][1] == board[2][2])
        return 1;

    else if (board[0][0] != ' ' && board[0][0] == board[1][0] && board[1][0] == board[2][0])
        return 1;

    else if (board[0][1] != ' ' && board[0][1] == board[1][1] && board[1][1] == board[2][1])
        return 1;

    else if (board[0][2] != ' ' && board[0][2] == board[1][2] && board[1][2] == board[2][2])
        return 1;

    else if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;

    else if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    else if(board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
        return -1;

    else
        return 0;
    }
