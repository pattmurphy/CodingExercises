#include <iostream>
#include <string>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
    int firstBadVersion(bool versions [], int n) {
        int firstIndex = 1;
        int lastIndex = n;
        while(firstIndex != lastIndex){
            if(versions[(firstIndex + (lastIndex - firstIndex) / 2) - 1]){
                lastIndex = firstIndex + (lastIndex - firstIndex) / 2;
            }
            else{
                firstIndex = firstIndex + (lastIndex - firstIndex) / 2 + 1;
            }
        }
        return firstIndex;
    }
};

int main(){
    Solution solution = Solution();
    bool versions1 [3] = {0, 0, 1};
    cout << solution.firstBadVersion(versions1, 3) << "\n";
    bool versions2 [5] = {0, 0, 1, 1, 1};
    cout << solution.firstBadVersion(versions2, 5) << "\n";
    bool versions3 [5] = {0, 0, 0, 0, 1};
    cout << solution.firstBadVersion(versions3, 5) << "\n";
    bool versions4 [5] = {1, 1, 1, 1, 1};
    cout << solution.firstBadVersion(versions4, 5) << "\n";
    bool versions5 [5] = {0, 0, 0, 0, 0};
    cout << solution.firstBadVersion(versions5, 5) << "\n";
    bool versions6 [2] = {1, 1};
    cout << solution.firstBadVersion(versions6, 2) << "\n";
    return 0;
 }
