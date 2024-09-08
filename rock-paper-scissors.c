#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int winner(int userThrow, int computerthrow);
int playRound();

int main()
{
    srand(time(NULL)); // Initialization, should only be called once.

    int one;
    printf("Lets play rock paper scissors! Read? \n enter any number to start: ");
    scanf("%d", &one);

    int round = playRound();

    printf("\n");
    return 0;
}

int winner(int userThrow, int computerthrow)
{
    switch (userThrow)
    {
    case 1 /* Rock */:
        switch (computerthrow)
        {
        case 1 /* Rock */:
            return 2;
            printf("I threw Rock! \n");
            break;
        case 2 /* paper */:
            return 0;
            printf("I threw Paper! ");
            break;
        case 3 /* Scissors */:
            printf("I threw scissors! ");

            return 1;
            break;
        }
        break;
    case 2 /* Paper */:
        switch (computerthrow)
        {
        case 1 /* Rock */:
            printf("I threw Rock! ");

            return 1;
            break;
        case 2 /* paper */:
            printf("I threw Paper! ");
            return 2;

            break;
        case 3 /* Scissors */:
            printf("I threw scissors! ");

            return 0;

            break;
        }
        break;

    case 3 /* Scissors */:
        switch (computerthrow)
        {
        case 1 /* Rock */:
            printf("I threw Rock! ");

            return 0;
            break;
        case 2 /* paper */:
            printf("I threw Paper! ");

            return 1;

            break;
        case 3 /* Scissors */:
            printf("I threw scissors! ");
            return 2;
            break;
        }
        break;
    }
}

int playRound()
{
    int userThrow;
    int computerThrow = rand() % 4;
    // Ask the user to type a number
    printf("Press 1 to throw Rock, 2 for Paper, 3 for Scissors  : \n");
    scanf("%d", &userThrow);
    if (userThrow != 1 && userThrow != 2 && userThrow != 3)
    {
        printf("Please throw rock paper or scissors! \n");
        playRound();
    }
    else
    {
        int whoWins = winner(userThrow, computerThrow);
        switch (whoWins)
        {
        case 0 /* player loses */:
            printf("You lose!! \n");
            break;
        case 1 /*Player wins*/:
            printf("You win!!");
            break;
        case 2 /*player ties!*/:
            printf("We tied!!");
            break;
        }
        return whoWins;
    }
}
