<?php
    class Solution {

        /**
        * @param Integer[] $nums
        * @return Integer
        */
        function findLengthOfLCIS($nums) {
            if(sizeof($nums) == 0){
                return(0);
            }
            $longestSequence = 0;
            $currentSequence = 1;
            for($i=1;$i<sizeof($nums);$i++){
                if($nums[$i] > $nums[$i-1]){
                    $currentSequence += 1;
                }
                else{
                    if($currentSequence > $longestSequence){
                        $longestSequence = $currentSequence;
                    }
                    $currentSequence = 1;
                }
            }
            if($currentSequence > $longestSequence){
                $longestSequence = $currentSequence;
            }
            return($longestSequence);
        }
    }

    $solution = new Solution();
    echo($solution->findLengthOfLCIS([1,3,5,4,7])); // 3
    echo($solution->findLengthOfLCIS([2,2,2,2,2,2,2,2])); // 1
    echo($solution->findLengthOfLCIS([])); // 0
?>