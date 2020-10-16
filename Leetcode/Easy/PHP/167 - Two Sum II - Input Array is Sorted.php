<?php
    class Solution {
        /**
         * @param Integer[] $numbers
         * @param Integer $target
         * @return Integer[]
         */
        function twoSum($numbers, $target) {
            $i = 0;
            while($i<sizeof($numbers)){
                $j = $i + 1;
                while($j<sizeof($numbers)){
                    if($numbers[$i] + $numbers[$j] == $target){
                        return [$i+1, $j+1];
                    }
                    if($numbers[$i] + $numbers[$j] > $target){
                        break;
                    }
                    $j++;
                }
                $i++;
            }
        }

    }

    $solution = new Solution();
    print_r($solution->twoSum([2,7,11,15], 9));
    print_r($solution->twoSum([2,3,4], 6));
    print_r($solution->twoSum([-1,0], -1));
?>