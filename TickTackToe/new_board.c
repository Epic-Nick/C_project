
extern char board[3][3];

void new_board()
{
    system("cls");
    printf("\tGame Starts\n");
    for (int i = 0; i < 3; i++) // Loop for reating a blank game board
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}