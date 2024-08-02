#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, n3, n4;
    int swap;

    printf("Enter four integers numbers : ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
    {
        swap = n1;
        n1 = n2;
        n2 = swap;
    }

    if (n1 > n3)
    {
        swap = n1;
        n1 = n3;
        n3 = swap;
    }

    if (n1 > n4)
    {
        swap = n1;
        n1 = n4;
        n4 = swap;
    }

    if (n2 > n3)
    {
        swap = n2;
        n2 = n3;
        n3 = swap;
    }

    if (n2 > n4)
    {
        swap = n2;
        n2 = n4;
        n4 = swap;
    }

    if (n3 > n4)
    {
        swap = n3;
        n3 = n4;
        n4 = swap;
    }


    if (n2 == n1 + 1 && n3 == n2 + 1 && n4 == n3 + 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

