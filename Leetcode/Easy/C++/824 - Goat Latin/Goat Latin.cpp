#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    string toGoatLatin(string S) {
        char firstCharInWord = S[0];
        bool wordStartedWithVowel = false;
        bool wasLastCharSpace = true;
        int wordIndex = 0;
        string returnString = "";
        set <char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for(int i = 0; i < S.length(); i++){
            if(S[i] == ' '){
                wasLastCharSpace = true;
                if(!wordStartedWithVowel){
                    returnString += firstCharInWord;
                }
                returnString += "ma";
                for(int j = 0; j < wordIndex; j++){
                    returnString += 'a';
                }
                returnString += ' ';
            }
            else if(wasLastCharSpace){
                firstCharInWord = S[i];
                wasLastCharSpace = false;
                wordIndex++;
                if(vowels.count(S[i]) > 0){
                    returnString += S[i];
                    wordStartedWithVowel = true;
                }
                else{
                    wordStartedWithVowel = false;
                }
            }
            else{
                returnString += S[i];
            }
        }
        if(!wordStartedWithVowel){
            returnString += firstCharInWord;
        }
        returnString += "ma";
        for(int j = 0; j < wordIndex; j++){
            returnString += 'a';
        }
        return returnString;
    }
};

int main(){
    Solution solution = Solution();

    string s1 = "I speak Goat Latin";
    cout << solution.toGoatLatin(s1) << "\n";
    string s2 = "The quick brown fox jumped over the lazy dog";
    cout << solution.toGoatLatin(s2) << "\n";

    return 0;
}