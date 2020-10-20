#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> answer = {};
        set<int> nums = {};
        int i = 0;
        int j = 0;
        while(pow(x, i) <= bound){
            while(pow(x, i) + pow(y, j) <= bound){
                if(!(nums.count(pow(x, i) + pow(y, j)))){
                    nums.insert(pow(x, i) + pow(y, j));
                    answer.push_back(pow(x, i) + pow(y, j));
                }
                if(y == 1){
                    break;
                }
                j++;
            }
            if(x == 1){
                break;
            }
            j = 0;
            i++;
        }
        return answer;
    }
};

int main(){
    Solution solution = Solution();
    vector<int> v1 = solution.powerfulIntegers(2, 3, 10);
    for(int i : v1){
        cout << i << ", ";
    }cout << "\n"; // [2,3,4,5,7,9,10]
    vector<int> v2 = solution.powerfulIntegers(3, 5, 15);
    for(int i : v2){
        cout << i << ", ";
    }cout << "\n"; // [2,4,6,8,10,14]
    vector<int> v3 = solution.powerfulIntegers(2, 1, 10);
    for(int i : v3){
        cout << i << ", ";
    }cout << "\n"; // 
    return 0;
}