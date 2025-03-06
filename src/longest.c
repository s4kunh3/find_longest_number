#include "longest.h"

int count_size(int num){
    int count = 0;

    if (num == 0) return 1;
    if (num < 0) num = -num;

    while(num){
        num = num / 10; /* Remove last digit */
        count++;
    }
    return count;
}

int find_longest_number(int* nums, int nums_size){
    int output = nums[0];
    int digits = count_size(nums[0]);
    int current;

    /* If current number has more digits than previous one, update output */
    for (int i = 1; i < nums_size; i++){
        current = count_size(nums[i]);
        if (current > digits){
            digits = current;
            output = nums[i];
        }
    }
    return output;
}