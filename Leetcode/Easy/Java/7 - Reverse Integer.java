package app;

class Solution {
    public int reverse(int x) {
        StringBuilder y = new StringBuilder(Integer.toString(x));
        if(y.charAt(0) == '-'){
            try{
                return Integer.parseInt(y.deleteCharAt(0).reverse().insert(0, "-").toString());
            }
            catch(Exception e){
                return 0;
            }
        }
        try{
            return Integer.parseInt(y.reverse().toString());
        }
        catch(Exception e){
            return 0;
        }
    }
}
