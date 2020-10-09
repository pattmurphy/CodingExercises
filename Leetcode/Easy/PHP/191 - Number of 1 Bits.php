<?php
    class Solution {
        /**
         * @param Integer $n
         * @return Integer
         */
        function hammingWeight($n) {
            $sum = 0;
            for($i=0;$i<10;$i++){
                $sum += $i;
            }
            echo $sum;
        }
    }

    $solution = new Solution();
    $solution->hammingWeight(00000000000000000000000000001011);
?>
