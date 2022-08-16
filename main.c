#include "xo.h"

int main()
{
    int choice,score1=0,score2=0;
    char board[3][3];
    printf("TIC TAC TOE PVP v1.0");
    do
    {
        do
        {
            printf("\n1.Play\n0.Quit\n");
            scanf("%d",&choice);
        }
        while(choice>1||choice<0);
        switch(choice)
        {
            case 1 : play : setboard(board);
            showboard(board);
            while(checkwinner(board)==0)
            {
                player1move(board);
                if(checkwinner(board)==-1)
                {
                    printf("\n\nDraw\n\n");
                    printf("Player1 : %d\t\tPlayer2 : %d\n\n\n\n\n",score1,score2);
                    goto play;
                }
                if(checkwinner(board)==1)
                {
                    score1++;
                    printf("\n\nPLAYER 1 WINS!!\n\n");
                    printf("Player1 : %d\t\tPlayer2 : %d\n\n\n\n\n",score1,score2);
                    goto play;
                }
                player2move(board);
                if(checkwinner(board)==1)
                {
                    score2++;
                    printf("\n\nPLAYER 2 WINS!!\n\n");
                    printf("Player1 : %d\t\tPlayer2 : %d\n\n\n\n\n",score1,score2);
                    goto play;
                }
            }
        }
    }
    while(choice!=0);
    return 0;
}
