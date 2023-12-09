void taking_input(char playersign)
{
    int position;
B:
    printf("\n\n\nEnter a number(1-9) or press 0 to exit the program : \n\n\t\t -->");
    scanf("%d", &position);
    if (position == 0)
    {
        printf("\nGAME QUIT\n");
        printf("\n");
        exit(0);
    }
    if (position > 9)
    {
        system("cls");
        printf("\n\n\tPlease Enter Valid Input\n\n\tPress ENTER to ontinue_");
        getch();
        system("cls");
        if (playersign == 'X')
        {
            printf("\n      Player 1 turn\n");
        }
        else
            printf("\n      Player 2 turn\n");
        displayboard();
        goto B;
    }
    entervalue(position, playersign);
}