#include <stdio.h>
#include "calc.h"

void sort_insert(int arr[], int len) {
    int a = add(1, 2);
    printf("%d\n", a);
    
    for (int i = 1; i < len; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}