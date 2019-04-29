package app;

class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        try{
            StringBuilder y = new StringBuilder(Integer.toString(x)).reverse();
            return Integer.parseInt(y.toString()) == x;
        }
        catch(Exception e){
            return false;
        }
    }
}