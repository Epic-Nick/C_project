int game_in_progress()
{
    int flag = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            system("cls");
            printf("\n      Player 1 turn\n");
            displayboard();
            taking_input('X');
            flag = checkWinner('X');
            if (flag == 1)
            {
                winning_message('X');
                return flag;
            }
        }
        else
        {
            system("cls");
            printf("\n      Player 2 turn\n");
            displayboard();
            taking_input('O');
            flag = checkWinner('O');
            if (flag == 1)
            {
                winning_message('O');
                return flag;
            }
        }
    }
    return flag;
}