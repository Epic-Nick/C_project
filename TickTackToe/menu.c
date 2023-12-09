int menu()

{
    system("cls");
    int choice = 0;
    printf("\n   Welcome to the Game\n");
    printf("\n\nPress 1 to start the game \npress 2 to exit the program\npress 3 to view score\n ");
    char Tboard[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    printf("\n");
    for (int i = 0; i < 3; i++) // Loop for displaying Game board
    {
        printf("\t");
        for (int j = 0; j < 3; j++)
        {
            printf("%c", Tboard[i][j]);
            if (j < 2)
                printf(" | ");
        }
        if (i < 2)
            printf("\n\t----------\n");
    }
    printf("\n\n\t-->");
    scanf("%d", &choice);
    return choice;
}
