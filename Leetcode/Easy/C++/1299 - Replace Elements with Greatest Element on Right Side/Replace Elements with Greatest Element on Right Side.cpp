#include <iostream>
#include <vector> 

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        int currentMax = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;
        int temp;

        for(int i = arr.size() - 2; i >= 0; i--){
            if(arr[i] > currentMax){
                temp = arr[i];
                arr[i] = currentMax;
                currentMax = temp;
            }
            else{
                arr[i] = currentMax;
            }
        }
        return arr;
    }
};

int main(){
    Solution solution = Solution();
    std::vector<int> n1 = {17,18,5,4,6,1};
    n1 = solution.replaceElements(n1);
    for(int i : n1){
        std::cout << i << ", ";
    } std::cout << "\n"; // [18,6,6,6,1,-1]
    return 0;
}