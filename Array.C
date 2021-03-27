#include <stdio.h>

int main()
{
    int a[3][3], i, j, sm, sc;
    sm = 0;
    sc = 0;
    printf("Enter the elements of the matrix, row wise:- ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nelement - [%d][%d] : ", i, j);
            scanf("%d", *(a + i) + j);
        }
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j)
            sm += *(*(a + i) + j);
        }
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if((i + j) == 2)
            sc += *(*(a + i) + j);
        }
    }
    printf("\nYou have entered the following elements ;-\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d", *(*(a + i) + j));
        }
        printf("\n");
    }
    printf("\nThe sum of the elements of the main diagonal is:- %d", sm);
    printf("\nThe sum of the elements of the counter diagonal is:- %d", sc);
    return 0;
}
