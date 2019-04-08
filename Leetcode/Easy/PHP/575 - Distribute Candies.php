<?php
    class Solution {

    /**
     * @param Integer[] $candies
     * @return Integer
     */
        function distributeCandies($candies) {
            for($i = 0; $i < sizeof($candies); $i++){
                echo($candies[$i]);
            }
        }
    }
    $solution = new Solution();
    $solution->distributeCandies([1,2,3,4,5]);
?>
