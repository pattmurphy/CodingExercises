<?php
    class Solution {
        /**
         * @param Integer[] $nums1
         * @param Integer $m
         * @param Integer[] $nums2
         * @param Integer $n
         * @return NULL
         */
            function merge(&$nums1, $m, $nums2, $n) {
                if($m == 0){
                    $nums1 = $nums2;
                    return;
                }
                if($n == 0){
                    return;
                }
                $finalIndex = $m + $n - 1;
                while($finalIndex >= 0){
                    if($nums1[$m-1] > $nums2[$n-1]){
                        $nums1[$finalIndex] = $nums1[$m-1];
                        $finalIndex--;
                        $m--;
                        if($m <= 0){
                            for($n; $n > 0; $n--){
                                $nums1[$finalIndex] = $nums2[$n-1];
                                $finalIndex--;
                            }
                        }
                    }
                    else{
                        $nums1[$finalIndex] = $nums2[$n-1];
                        $finalIndex--;
                        $n--;
                        if($n <= 0){
                            for($m; $m > 0; $m--){
                                $nums1[$finalIndex] = $nums1[$m-1];
                                $finalIndex--;
                            }
                        }
                    }
                }
            }
        }

    $solution = new Solution();
    $n1 = [1,2,3,0,0,0];
    $solution->merge($n1, 3, [2,5,6], 3); // [1,2,2,3,5,6]
    $n2 = [-1,0,0,3,3,3,0,0,0];
    $solution->merge($n2, 6, [1,2,2], 3); // [-1,0,0,1,2,2,3,3,3]
    $n3 = [2,0];
    $solution->merge($n3, 1, [1], 1); // [1,2]
    $n4 = [-50,-48,-47,-47,-46,-44,-43,-43,-41,-39,-38,-37,-37,-37,-33,-33,-32,-31,
           -29,-29,-27,-26,-26,-26,-25,-25,-24,-24,-23,-22,-22,-22,-18,-17,-17,-14,
           -14,-11,-11,-11,-6,-5,-5,-5,-5,-4,-1,0,2,2,2,2,5,6,7,7,9,10,13,13,14,14,
           18,21,21,21,22,24,24,24,25,26,26,29,29,29,30,30,31,31,32,33,34,34,34,35,
           38,40,41,42,43,44,44,46,46,47,47,48,49,49];
    $solution->merge($n4, 100, [], 0);
?>