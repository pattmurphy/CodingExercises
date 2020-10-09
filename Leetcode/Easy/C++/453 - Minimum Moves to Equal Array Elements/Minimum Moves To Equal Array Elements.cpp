#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(int num : nums){
            if(num < min){
                min = num;
            }
            if(num > max){
                max = num;
            }
        }
        int moves = 0;
        for(int num : nums){
            moves += num - min;
        }
        return moves;

        /*

        Brute force method. TOO SLOW!

        int min = nums[0];
        int max = nums[0];
        int size = nums.size();
        if(size == 1){
            return 0;
        }
        if(size == 2){
            return abs(nums[0] - nums[1]);
        }
        int moves = 0;
        bool skipped = false;
        for(int i = 1; i < size; i++){
            if(nums[i] < min){
                min = nums[i];
            }
            if(nums[i] > max){
                max = nums[i];
            }
        }
        while(min != max){
            skipped = false;
            for(int i = 0; i < size; i++){
                if(nums[i] < max){
                    nums[i]++;
                    continue;
                }
                if(nums[i] == max && skipped){
                    nums[i]++;
                    max++;
                }
                if(nums[i] == max){
                    skipped = true;
                    continue;
                }
            }
            min++;
            moves++;
        }
        return moves;
    
        */
    }
};

int main(){
    Solution solution = Solution();
    vector<int> v3 = {0, 1, 1};
    cout << solution.minMoves(v3) << "\n"; // 2
    vector<int> v1 = {0, 2, 2};
    cout << solution.minMoves(v1) << "\n"; // 4
    vector<int> v2 = {0, 3, 3};
    cout << solution.minMoves(v2) << "\n"; // 6
    vector<int> v4 = {0, 2, 2, 2};
    cout << solution.minMoves(v4) << "\n"; // 6
    vector<int> v5 = {0, 3, 3, 3};
    cout << solution.minMoves(v5) << "\n"; // 9
    vector<int> v6 = {0, 1, 2, 3};
    cout << solution.minMoves(v6) << "\n"; // 6
    vector<int> v7 = {5, 6, 8, 10};
    cout << solution.minMoves(v7) << "\n"; // 9
    return 0;
 }