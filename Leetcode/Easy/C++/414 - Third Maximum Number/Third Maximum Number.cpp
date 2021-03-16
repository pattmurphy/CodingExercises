#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int* max = nullptr;
        int* secondMax = nullptr;
        int* thirdMax = nullptr;
        int length = nums.size();

        for(int i = 0; i < length; i++){
            if(max == nullptr || nums[i] > *max){
                thirdMax = secondMax;
                secondMax = max;
                max = &nums[i];
            }
            else if(secondMax == nullptr || nums[i] > *secondMax){
                if(nums[i] == *max){
                    continue;
                }
                thirdMax = secondMax;
                secondMax = &nums[i];
            }
            else if(thirdMax == nullptr || nums[i] > *thirdMax){
                if(nums[i] == *secondMax){
                    continue;
                }
                thirdMax = &nums[i];
            }
        }
        if(thirdMax == nullptr){
            return *max;
        }
        return *thirdMax;
    }
};

int main(){
    Solution solution = Solution();

    vector<int> nums = {-3,-4,-2};
    cout << solution.thirdMax(nums) << "\n"; // -4
    nums = {3,2,1};
    cout << solution.thirdMax(nums) << "\n"; // 1
    nums = {1,2};
    cout << solution.thirdMax(nums) << "\n"; // 2
    nums = {2,2,3,1};
    cout << solution.thirdMax(nums) << "\n"; // 1
    
    return 0;
}