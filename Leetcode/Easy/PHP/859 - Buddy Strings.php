<?php
    class Solution {

    /**
     * @param String $A
     * @param String $B
     * @return Boolean
     */
        function buddyStrings($A, $B) {
            $mismatchCount = 0;
            $mismatches = "";
            $length = strlen($A);
            if(strlen($B) != $length){
                return false;
            }
            for($i=0; $i<$length; $i++){
                if($A[$i] != $B[$i]){
                    $mismatchCount++;
                    if($mismatchCount > 2){
                        return false;
                    }
                    $mismatches .= $A[$i] . $B[$i];
                }
            }
            if(strlen($mismatches) == 0){
                for($i = 0; $i<$length; $i++) {
                    for($j=$i+1; $j<$length; $j++){ 
                        if($A[$i] == $A[$j]){
                            return true;
                        }
                    }
                }
            }
            
            if(strlen($mismatches) == 4){
                if($mismatches[0] == $mismatches[3] && $mismatches[1] == $mismatches[2]){
                    return true;
                }
            }
            return false;
        }
    }

    $solution = new Solution();
    $solution->buddyStrings("ab", "ba"); // true
    $solution->buddyStrings("ab", "ab"); // false
    $solution->buddyStrings("aa", "aa"); // true
    $solution->buddyStrings("aaaaaaabc", "aaaaaaacb"); // true
    $solution->buddyStrings("", "aa"); // false
?>