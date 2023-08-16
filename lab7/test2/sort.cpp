#include <stdio.h>
#include "sort.h"

int main()
{
    int a[6] = {32, 53, 45 ,12, 43};
    int b[6] = {12, 32, 4, 45, 43};

    sort_insert(a, 6);
    sort_select(b, 6);

    for(int i = 0; i < 6; i ++ )
        printf("%d ", a[i]);
    printf("\n");

    for(int i = 0; i < 6; i ++ )
        printf("%d ", b[i]);
    printf("\n");
    
    return 0;
}