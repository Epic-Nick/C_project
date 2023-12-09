#include<stdio.h>
extern int score1 = 0;
extern int score2 = 0;

void winning_message(char sign)

{
    system("cls");
    if (sign == 'X')
    {
        printf("\n      Player 1 Won\n");
        score1++;
        displayboard();
        printf("\n\n   Press ENTER to continue_");
        getch();
    }
    else
    {
        system("cls");
        printf("\n      Player 2 Won\n");
        score2++;
        displayboard();
        printf("\n\n   Press ENTER to continue_");
        getch();
    }
}