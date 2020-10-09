/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var uniqueWays = 0;
    for(let i=0;i<n;i++){
        for(let j=0;j<=n;j++){
            if(i+2*j == n){
                uniqueWays++;
            }
        }
    }
    return uniqueWays;
};

console.log(climbStairs(0));
console.log(climbStairs(1));
console.log(climbStairs(2));
console.log(climbStairs(3));
console.log(climbStairs(4));
