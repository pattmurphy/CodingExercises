<?php

    class Solution {

        /**
         * @param Integer[] $arr
         * @return NULL
         */
        function duplicateZeros(&$arr) {
            $newArr = [];
            for($i = 0; $i < sizeof($arr); $i++){
                array_push($newArr, $arr[$i]);
                if(sizeof($newArr) == sizeof($arr)){
                    break;
                }
                if($arr[$i] == 0){
                    array_push($newArr, 0);
                }
                if(sizeof($newArr) == sizeof($arr)){
                    break;
                }
            }
            $arr = $newArr;
        }
    }

    $solution = new Solution();
    $n0 = [1,0,2,3,0,4,5,0];
    $solution->duplicateZeros($n0);
    print_r($n0); // [1,0,0,2,3,0,0,4]
    $n1 = [0,0,0,0,0,0,0];
    $solution->duplicateZeros($n1);
    print_r($n1); // [0,0,0,0,0,0,0]
    $n2 = [8,4,5,0,0,0,0,7];
    $solution->duplicateZeros($n2);
    print_r($n2); // [8,4,5,0,0,0,0,0]
?>