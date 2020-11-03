#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int max = 0;
    int current = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 1){
            current++;
            continue;
        }
        if(current > max){
            max = current;
            if(max >= numsSize - i - 1){
                break;
            }
        }
        current = 0;
    }
    if(current > max){
        max = current;
    }
    return max;
}

int main(){
    int n1[5] = {1, 1, 0, 0, 0};
    printf("%d", findMaxConsecutiveOnes(n1, 5)); // 2
    int n2[6] = {1, 1, 0, 1, 1, 1};
    printf("%d", findMaxConsecutiveOnes(n2, 6)); // 3
    return 0;
}