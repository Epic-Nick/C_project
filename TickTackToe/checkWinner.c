
extern char board[3][3];

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