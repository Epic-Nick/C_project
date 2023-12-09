#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "menu.c"
#include "new_board.c"
#include "displayboard.c"
#include "occupied.c"
#include "entervalue.c"
#include "taking_input.c"
#include "wrong_input.c"
#include "checkWinner.c"
#include "viewscore.c"
#include "winning_message.c"
#include "game_in_progress.c"
#include "game_draw.c"

char board[3][3];
int score1 = 0;
int score2 = 0;

// void occupied(char sign)
// {
//     system("cls");
//     printf("\n\n\tAlready occupied\n\n\tPress ENTER to ontinue_");
//     getch();
//     taking_input(sign);
// }

// void displayboard()
// {
//     printf("\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("\t");
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%c", board[i][j]);
//             if (j < 2)
//                 printf(" | ");
//         }
//         if (i < 2)
//             printf("\n\t----------\n");
//     }
// }

// void entervalue(int pos, char sign)
// {
//     switch (pos)
//     {
//     case 1:
//         if (board[0][0] != ' ')
//         {
            
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[0][0] = sign;
//         break;
//     case 2:
//         if (board[0][1] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[0][1] = sign;
//         break;
//     case 3:
//         if (board[0][2] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[0][2] = sign;
//         break;
//     case 4:
//         if (board[1][0] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[1][0] = sign;
//         break;
//     case 5:
//         if (board[1][1] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[1][1] = sign;
//         break;
//     case 6:
//         if (board[1][2] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[1][2] = sign;
//         break;
//     case 7:
//         if (board[2][0] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[2][0] = sign;
//         break;
//     case 8:
//         if (board[2][1] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[2][1] = sign;
//         break;
//     case 9:
//         if (board[2][2] != ' ')
//         {
//             printf("\nAlready Occupied\n");
//             taking_input(sign);
//         }
//         else
//             board[2][2] = sign;
//         break;
//     }
// }

// void taking_input(char playersign)
// {
//     int position;
// B:
//     printf("\n\n\nEnter a number(1-9) or press 0 to exit the program : \n\n\t\t -->");
//     scanf("%d", &position);
//     if (position == 0)
//     {
//         printf("\nGAME QUIT\n");
//         printf("\n");
//         exit(0);
//     }
//     if (position > 9)
//     {
//         system("cls");
//         printf("\n\n\tPlease Enter Valid Input\n\n\tPress ENTER to ontinue_");
//         getch();
//         system("cls");
//         if (playersign == 'X')
//         {
//             printf("\n      Player 1 turn\n");
//         }
//         else
//             printf("\n      Player 2 turn\n");
//         displayboard();
//         goto B;
//     }
//     entervalue(position, playersign);
// }

// int checkWinner(char sg)
// {
//     // check all rows
//     if (board[0][0] == sg && board[0][1] == sg && board[0][2] == sg ||
//         board[1][0] == sg && board[1][1] == sg && board[1][2] == sg ||
//         board[2][0] == sg && board[2][1] == sg && board[2][2] == sg)
//     {
//         return 1;
//     }
//     // check all columns
//     else if (board[0][0] == sg && board[1][0] == sg && board[2][0] == sg ||
//              board[0][1] == sg && board[1][1] == sg && board[2][1] == sg ||
//              board[0][2] == sg && board[1][2] == sg && board[2][2] == sg)
//     {
//         return 1;
//     }
//     // check both diagonals
//     else if (board[0][0] == sg && board[1][1] == sg && board[2][2] == sg ||
//              board[0][2] == sg && board[1][1] == sg && board[2][0] == sg)
//     {
//         return 1;
//     }

//     // There is no winner
//     return 0;
// }

// int menu()

// {
//     system("cls");
//     int choice = 0;
//     printf("\n   Welcome to the Game\n");
//     printf("\n\nPress 1 to start the game \npress 2 to exit the program\npress 3 to view score\n ");
//     char Tboard[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
//     printf("\n");
//     for (int i = 0; i < 3; i++) // Loop for displaying Game board
//     {
//         printf("\t");
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%c", Tboard[i][j]);
//             if (j < 2)
//                 printf(" | ");
//         }
//         if (i < 2)
//             printf("\n\t----------\n");
//     }
//     printf("\n\n\t-->");
//     scanf("%d", &choice);
//     return choice;
// }

// void viewscore(int s1, int s2)
// {
//     system("cls");
//     printf("\n\nPlayer 1 score : %d \nPlayer 2 score : %d", s1, s2);
//     printf("\n\n\tPress ENTER to continue_");
//     getch();
// }

// void winning_message(char sign)

// {
//     system("cls");
//     if (sign == 'X')
//     {
//         printf("\n      Player 1 Won\n");
//         score1++;
//         displayboard();
//         printf("\n\n   Press ENTER to continue_");
//         getch();
//     }
//     else
//     {
//         system("cls");
//         printf("\n      Player 2 Won\n");
//         score2++;
//         displayboard();
//         printf("\n\n   Press ENTER to continue_");
//         getch();
//     }
// }

// void new_board()
// {
//     system("cls");
//     printf("\tGame Starts\n");
//     for (int i = 0; i < 3; i++) // Loop for reating a blank game board
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             board[i][j] = ' ';
//         }
//     }
// }

// void wrong_input()
// {
//     system("cls");
//     printf("\n\n\tPlease Enter Valid Input\n\n\tPress ENTER to ontinue_");
//     getch();
//     system("cls");
// }

// int game_in_progress()
// {
//     int flag = 0;
//     for (int i = 0; i < 9; i++)
//     {
//         if (i % 2 == 0)
//         {
//             system("cls");
//             printf("\n      Player 1 turn\n");
//             displayboard();
//             taking_input('X');
//             flag = checkWinner('X');
//             if (flag == 1)
//             {
//                 winning_message('X');
//                 return flag;
//             }
//         }
//         else
//         {
//             system("cls");
//             printf("\n      Player 2 turn\n");
//             displayboard();
//             taking_input('O');
//             flag = checkWinner('O');
//             if (flag == 1)
//             {
//                 winning_message('O');
//                 return flag;
//             }
//         }
//     }
//     return flag;
// }

// void game_draw()
// {
//     system("cls");
//     printf("\n\n\t   DRAW\n");
//     displayboard();
//     printf("\n\n   Press ENTER to continue_");
//     getch();
// }

int main()
{
    int flag = 0;
    int choice = 0;

A:
    choice = menu();
    if (choice == 2)
        exit(0);
    else if (choice == 1)
    {
        // Game Start
        new_board();
        displayboard(board);
        flag = game_in_progress();
    }
    else if (choice == 3)
    {
        viewscore(score1, score2);
        goto A;
    }
    else
    {
        wrong_input();
        goto A;
    }
    if (flag == 0)
    {
        game_draw();
    }
    goto A;
}