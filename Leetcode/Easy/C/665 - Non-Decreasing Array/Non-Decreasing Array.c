#include <stdio.h>

int checkPossibility(int* nums, int numsSize){
    if(numsSize < 3){
        return 1;
    }
    int numsModified = 0;
    int max = nums[0];
    for(int i=0; i<numsSize-1; i++){
        if(nums[i+1] < nums[i]){
            if(i == 0){
                nums[i] = nums[i+1];
                numsModified++;
                max = nums[i+1];
            }
            else if (nums[i+1] >= max){
                nums[i] = max;
                numsModified++;
            }
            else{
                nums[i+1] = nums[i];
                numsModified++;
            }
        }
        else{
            max = nums[i];
        }
        if(numsModified > 1){
            return 0;
        }
    }
    return 1; 
}

int main(){
    int n1[3] = {4,2,3};
    printf("%d", checkPossibility(n1, 3)); // 1
    int n2[3] = {4,2,1};
    printf("%d", checkPossibility(n2, 3)); // 0
    int n3[4] = {3,4,2,3};
    printf("%d", checkPossibility(n3, 4)); // 0
    int n4[5] = {2,3,3,2,2};
    printf("%d", checkPossibility(n4, 5)); // 0
    int n5[4] = {5,7,1,8};
    printf("%d", checkPossibility(n5, 4)); // 1
    return 0;
}