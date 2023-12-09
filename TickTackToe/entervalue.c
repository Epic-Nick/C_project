
extern char board[3][3];

void entervalue(int pos, char sign)
{
    switch (pos)
    {
    case 1:
        if (board[0][0] != ' ')
        {
            
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[0][0] = sign;
        break;
    case 2:
        if (board[0][1] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[0][1] = sign;
        break;
    case 3:
        if (board[0][2] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[0][2] = sign;
        break;
    case 4:
        if (board[1][0] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[1][0] = sign;
        break;
    case 5:
        if (board[1][1] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[1][1] = sign;
        break;
    case 6:
        if (board[1][2] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[1][2] = sign;
        break;
    case 7:
        if (board[2][0] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[2][0] = sign;
        break;
    case 8:
        if (board[2][1] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[2][1] = sign;
        break;
    case 9:
        if (board[2][2] != ' ')
        {
            printf("\nAlready Occupied\n");
            taking_input(sign);
        }
        else
            board[2][2] = sign;
        break;
    }
}