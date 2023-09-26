#include<stdio.h>
#include<stdlib.h>

char board[3][3];
void taking_input(char playersign);

// Function responsible for displaying Game board each time when it is called.


void displayboard()
{
    printf("\n");
    for(int i = 0; i<3; i++)
    {
        printf("\t");
        for(int j=0; j<3; j++)
        {
            printf("%c",board[i][j]);
            if(j<2)
                printf(" | ");
        }
        if(i<2)
        printf("\n\t----------\n");
    }
}

// This function assign the location choosen by the player and checks if the location is empty or not.

void entervalue(int pos,char sign)

{
    switch(pos)
    {
        case 1:
            if(board[0][0] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[0][0] = sign;
            break;
        case 2:
            if(board[0][1] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[0][1] = sign;
            break;
        case 3:
            if(board[0][2] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[0][2] = sign;
            break;
        case 4:
            if(board[1][0] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[1][0] = sign;
            break;
        case 5:
            if(board[1][1] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[1][1] = sign;
            break;
        case 6:
            if(board[1][2] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[1][2] = sign;
            break;
        case 7:
            if(board[2][0] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[2][0] = sign;
            break;
        case 8:
            if(board[2][1] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[2][1] = sign;
            break;
        case 9:
            if(board[2][2] != ' ')
            {
                printf("\nAlready Occupied\n");
                taking_input(sign);
            }
            else
                board[2][2] = sign;
            break;
    }
}

//This function takes the input from the user and checks if the entered number is correct or not.

void taking_input(char playersign)
{
    int position;
    B:printf("\nEnter a number(1-9) or press 0 to exit the program : ");
    scanf("%d",&position);
    if(position == 0)
    {
        printf("\nGAME QUIT\n");
        printf("\n");
        exit(0);
    }
    if(position > 9)
    {
        printf("\nEnter Valid Input\n");
        goto B;
    }
    entervalue(position,playersign);
}

//This function is responsible for Checking the winning condition each time user enter a location.

int checkWinner(char sg)
{
    // check all rows
    if (board[0][0] == sg && board[0][1] == sg && board[0][2] == sg ||
      board[1][0] == sg && board[1][1] == sg && board[1][2] == sg ||
      board[2][0] == sg && board[2][1] == sg && board[2][2] == sg)
    {
        return 1;
      }
      // check all columns
    else if (board[0][0] == sg && board[1][0] == sg && board[2][0] == sg ||
           board[0][1] == sg && board[1][1] == sg && board[2][1] == sg ||
           board[0][2] == sg && board[1][2] == sg && board[2][2] == sg)
    {
        return 1;
    }
    // check both diagonals
    else if (board[0][0] == sg && board[1][1] == sg && board[2][2] == sg ||
           board[0][2] == sg && board[1][1] == sg && board[2][0] == sg)
    {
        return 1;
    }
 
    // There is no winner
    return 0;
}

void viewscore(int s1, int s2)
{
    system("cls");
    printf("\n\nPlayer 1 score : %d \nPlayer 2 score : %d",s1,s2);
}

int main()
{
    int flag = 0;
    int choice=0;
    int score1=0;
    int score2=0;
    A:
    printf("\n   Welcome to the Game\n");
    W:printf("\n\nPress 1 to start the game \npress 2 to exit the program\npress 3 to view score\n");
    char Tboard[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    printf("\n");
    for(int i = 0; i<3; i++) // Loop for displaying Game board
    {
        printf("\t");
        for(int j=0; j<3; j++)
        {
            printf("%c",Tboard[i][j]);
            if(j<2)
                printf(" | ");
        }
        if(i<2)
        printf("\n\t----------\n");
    }
    printf("\n\n\t-->");
    scanf("%d",&choice);
    if(choice == 2)
    exit(0);
    else if(choice == 1)
    {
        system("cls");
        printf("\tGame Starts\n");
        for(int i = 0; i<3; i++) // Loop for reating a blank game board
        {
            for(int j=0; j<3; j++)
            {
                board[i][j]=' ';
            }
        }
        displayboard(board);
    }
    else if(choice ==3)
    {
        viewscore(score1,score2);
        goto W;
    }
    else
    {
        system("cls");
        printf("Please enter valid input\n");
        goto A;
    }
    for(int i=0; i<9; i++)
    {
        if(i%2==0)
        {
            system("cls");
            displayboard();
            printf("\nPlayer 1 turn");
            taking_input('X');
            flag = checkWinner('X');
            if(flag==1)
                goto Q;
        }
        else
        {
            system("cls");
            displayboard();
            printf("\nPlayer 2 turn");
            taking_input('O');
            flag = checkWinner('O');
            if(flag==1)
                goto P;
        }
    }
    if(flag==0)
    {
        system("cls");
        printf("\nDRAW\n");
        displayboard();
        goto W;
    }
    else
    {
        Q:system("cls");
        printf("\nPlayer 1 Won\n");
        score1++;
        displayboard();
        printf("\n\n");
        goto W;
        P:system("cls");
        printf("\nPlayer 2 Won\n");
        score2++;
        displayboard();
        printf("\n\n");
        goto W;
    }
}