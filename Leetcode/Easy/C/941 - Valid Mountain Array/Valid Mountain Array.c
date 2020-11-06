#include<stdbool.h>
#include<stdio.h>

bool validMountainArray(int* arr, int arrSize){
    if(arrSize < 3){
        return false;
    }
    if(arr[0] >= arr[1]){
        return false;
    }

    int switchedToDecreasing = false;

    for(int i = 1; i < arrSize - 1; i++){
        if(arr[i+1] == arr[i]){
            return false;
        }
        if(arr[i+1] < arr[i]){
            switchedToDecreasing = true;
        }
        if(arr[i+1] > arr[i] && switchedToDecreasing){
            return false;
        }
    }
    return switchedToDecreasing;
}
int main(){
    int n1[2] = {2, 1};
    printf("%d", validMountainArray(n1, 2));
    int n2[4] = {0, 3, 2, 1};
    printf("%d", validMountainArray(n2, 4));
    return 0;
}