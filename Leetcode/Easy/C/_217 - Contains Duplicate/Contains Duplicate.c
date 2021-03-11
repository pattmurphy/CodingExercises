#include <stdio.h>

int containsDuplicate(int* nums, int numsSize){
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if(nums[i] == nums[j]){
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int test1[4] = {1,1,2,3};
    printf("%d", containsDuplicate(test1, 4)); // 1
    int test2[4] = {1,5,2,3};
    printf("%d", containsDuplicate(test2, 4)); // 0
    int test3[11] = {1,2,3,4,5,6,7,8,9,0,1};
    printf("%d", containsDuplicate(test3, 11)); // 1

    return 0;
}