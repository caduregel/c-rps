#include <stdio.h>
#include <stdbool.h>

int main()
{
    // A comment!
    int i;
    for ( i = 0; i < 10; i++)
    {
        if(i==4){
            break;
        }
        printf("%d", i);
    }
    
    printf("\n");
    return 0;
}