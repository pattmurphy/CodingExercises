#include <iostream>
#include <vector> 
using namespace std;

class Solution {
public:

    //  SO CLOSE. Can break if nums[i+3] == nums[i+2] + nums[i+4] in the middle function.

    /*
    int small(vector<int>& nums){
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 2){
            if(nums[0] > nums[1]){
                return nums[0];
            }
            return nums[1];
        }
        if(nums.size() == 3){
            if(nums[0] + nums[2] > nums[1]){
                return nums[0] + nums[2];
            }
            return nums[1];
        }
        else{
            int max = 0;
            int options[3] = {nums[0] + nums[2], nums[0] + nums[3], nums[1] + nums[3]};
            for(int option : options){
                if(option > max){
                    max = option;
                }
            }
            return max;
        }
    }

    int middle(vector<int>& nums, int start){
        int total = 0;
        for(int i = start; i <= nums.size(); i++){
            if(i >= nums.size() - 4){
                vector<int> lastNums = {};
                for(i; i < nums.size(); i++){
                    lastNums.push_back(nums[i]);
                }
                total += small(lastNums);
                break;
            }
            total += nums[i];
            if(nums[i+3] > nums[i+2] + nums[i+4]){
                i += 2;
            }
            else{
                i += 1;
            }
        }
        return total;
    }

    int rob(vector<int>& nums) {

        int totalStartingAtOne = 0;
        int totalStartingAtTwo = 0;

        if(nums.size() <= 4){
            return small(nums);
        }

        totalStartingAtOne = middle(nums, 0);
        totalStartingAtTwo = middle(nums, 1);


        if(totalStartingAtOne > totalStartingAtTwo){
            return totalStartingAtOne;
        }
        return totalStartingAtTwo;
    }
    */
};

int main(){
    Solution s = Solution();
    vector<int> v1 = {1, 2, 3, 4, 5}; // 9
    cout << s.rob(v1) << "\n";
    vector<int> v2 = {}; // 0
    cout << s.rob(v2) << "\n";
    vector<int> v3 = {2, 1, 1, 2}; // 4
    cout << s.rob(v3) << "\n";
    vector<int> v4 = {2, 7, 9, 3, 1}; // 12
    cout << s.rob(v4) << "\n";
    vector<int> v5 = {4, 1, 2, 7, 5, 3, 1};
    cout << s.rob(v5) << "\n"; // 14
    vector<int> v6 = {82,217,170,215,153,55,185,55,185,232,69,131,130,102};
    cout << s.rob(v6) << "\n"; // 1082
    return 0;
}
