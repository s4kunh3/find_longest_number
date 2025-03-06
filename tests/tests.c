#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include "../src/longest.h"

extern int find_longest_number(int* nums, int nums_size);

void test_function(){
    int arr1[] = {1000, 2, 300, -50000, 400};
    assert(find_longest_number(arr1, 5) == -50000);

    int arr2[] = {11, 222, 3333, 44444, 555555, 6666666};
    assert(find_longest_number(arr2, 6) == 6666666);

    int arr3[] = {-356, 0, -1, 999, 4563, -293923};
    assert(find_longest_number(arr3, 6) == -293923);

    printf("All tests passed!\n");

}

int main(){
    test_function();
    return 0;
}