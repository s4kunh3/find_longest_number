#include <stdio.h>
#include "longest.h"

int main(){
    int array[] = {1000, 2, 300, -50000, 400};
    size_t size = sizeof(array) / sizeof(array[0]);

    int output = find_longest_number(array, size);
    printf("Answer: %d\n",output);
    return 0;
}