<?php

    class Solution {

        /**
         * @param Integer[] $nums
         * @return Integer
         */
        function missingNumber($nums) {
            $organizedNums = [];
            for($i = 0; $i < sizeof($nums); $i++){
                $organizedNums[$nums[$i]] = $nums[$i];
            }
            for($i = 0; $i < sizeof($organizedNums); $i++){
                if(!isset($organizedNums[$i])){
                    return $i;
                }
            }
            return sizeof($nums);
        }
    }

    $solution = new Solution();
    print($solution->missingNumber([3,0,1])); // 2
    print($solution->missingNumber([9,6,4,2,3,5,7,0,1])); // 8
    print($solution->missingNumber([0])); // 
?>