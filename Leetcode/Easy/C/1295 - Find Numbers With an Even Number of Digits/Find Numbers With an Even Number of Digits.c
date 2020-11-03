#include <stdio.h>

int findNumbers(int* nums, int numsSize){
    int evens = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] < 10){
            continue;
        }
        if(nums[i] < 100){
            evens++;
            continue;
        }
        if(nums[i] < 1000){
            continue;
        }
        if(nums[i] < 10000){
            evens++;
            continue;
        }
        if(nums[i] < 100000){
            continue;
        }
        evens++;
    }
    return evens;
}

int main(){
    int n1[5] = {12, 345, 2, 6, 7896};
    printf("%d", findNumbers(n1, 5)); // 2
    int n2[5] = {555, 901, 482, 1771, 100000};
    printf("%d", findNumbers(n2, 5)); // 2
    return 0;
}