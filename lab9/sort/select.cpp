#include <stdio.h>

void sort_select(int arr[], int len) {
    for(int i = 0; i < len - 1; i ++ )
    {
        int m = i;
        int j = i + 1;
        while(j < len)
        {
            if(arr[j] < arr[m]) m = j;
            j ++;
        }
        if(m != i){
            int t = arr[m];
            arr[m] = arr[i];
            arr[i] = t;
        }
    }
}