#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int userThrow;
    // Ask the user to type a number
    printf("Press 1 to throw Rock, 2 for Paper, 3 for Rock: \n");
    scanf("%d", &userThrow);

    switch (userThrow)
    {
    case 1 /* Rock */:
        printf("Rock\n");

        break;
    case 2 /* Paper */:
        printf("Paper\n");

        break;
    case 3 /* Scissors */:
        printf("Scissors \n");

        break;

    default:
        printf("You didnt press 1, 2, or 3, game lost!\n");
        break;
    }

    printf("\n");
    return 0;
}