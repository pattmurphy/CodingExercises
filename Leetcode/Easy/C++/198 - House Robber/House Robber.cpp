#include <iostream>
#include <vector> 
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        

        /*
        int i = 0;
        int evens = 0;
        int odds = 0;
        for(int num : nums){
            if(i % 2 == 0){
                evens += num;
            }
            else{
                odds += num;
            }
            i++;
        }
        return (evens > odds) ? evens : odds;
        */
    }
};

int main(){
    Solution s = Solution();
    vector<int> v1 = {1, 2, 3, 4, 5}; // 9
    cout << s.rob(v1) << "\n";
    vector<int> v2 = {}; // 0
    cout << s.rob(v2) << "\n";
    vector<int> v3 = {2, 1, 1, 2}; // 4
    cout << s.rob(v3) << "\n";
    return 0;
}
