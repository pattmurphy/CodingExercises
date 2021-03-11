/**
 * @param {number[]} nums
 * @return {boolean}
 */
 var containsDuplicate = function(nums) {
    nums.sort();
    for(var i = 0; i < nums.length; i++){
        /* for(var j = i+1; j < nums.length; j++){
            if(nums[i] == nums[j]){
                return true;
            }
        } */
        if(nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
};

console.log(containsDuplicate([1,2,1,0,0]));  // true
console.log(containsDuplicate([1,2,3,4,5]));  // false
console.log(containsDuplicate([9,8,0,7,6,5,4,3,0]));  // true
console.log(containsDuplicate(bigArr));  // true
