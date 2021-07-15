/**
 * @param {number} num
 * @return {boolean}
 */
var checkPerfectNumber = function(num) {
    if(num == 1){
        return false;
    }

    let sum = 1;
    let maxIndex = num / 2 + 1;
    for(let i = 2; i < maxIndex; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum == num;
};

console.log(checkPerfectNumber(28)); // true
console.log(checkPerfectNumber(8128)); // true
console.log(checkPerfectNumber(496)); // true
console.log(checkPerfectNumber(2)); // false
