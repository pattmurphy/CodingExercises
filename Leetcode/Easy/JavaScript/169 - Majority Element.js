/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    var elementCount = [];
    for(let i=0; i<nums.length; i++){
        if(elementCount[nums[i]] == undefined){
            elementCount[nums[i]] = 1;
        }
        else{
            elementCount[nums[i]] += 1;
        }
        if(elementCount[nums[i]] > nums.length / 2){
            return nums[i];
        }
    }
};

console.log(majorityElement([1,2,2,1,2,2,2,1])); // 2
console.log(majorityElement([1])); // 1