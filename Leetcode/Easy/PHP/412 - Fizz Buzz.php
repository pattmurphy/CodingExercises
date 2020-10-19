<?php

    class Solution {

        /**
         * @param Integer $n
         * @return String[]
         */
        function fizzBuzz($n) {
            $returnArray = [];
            for($i=0; $i<$n; $i++){
                if(($i + 1) % 3 == 0 && ($i + 1) % 5 == 0){
                    $returnArray[$i] = "FizzBuzz";
                    continue;
                }
                if(($i + 1) % 3 == 0){
                    $returnArray[$i] = "Fizz";
                    continue;
                }
                if(($i + 1) % 5 == 0){
                    $returnArray[$i] = "Buzz";
                    continue;
                }
                $returnArray[$i] = (string) ($i + 1);
            }
            return $returnArray;
        }
    }

    $solution = new Solution();
    print_r($solution->fizzBuzz(15));
?>