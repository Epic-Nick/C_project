
extern char board[3][3];

void displayboard()
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t");
        for (int j = 0; j < 3; j++)
        {
            printf("%c", board[i][j]);
            if (j < 2)
                printf(" | ");
        }
        if (i < 2)
            printf("\n\t----------\n");
    }
}