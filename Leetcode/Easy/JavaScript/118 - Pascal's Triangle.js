/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    var triangle = [];
    for(var i = 0; i < numRows; i++){
        var nextRow = [];
        for(var j = 0; j < i + 1; j++){
            if(j == 0 || j == i){
                nextRow.push(1);
            }
            else{
                nextRow.push(triangle[i-1][j-1] + triangle[i-1][j]);
            }
        }
        triangle.push(nextRow);
    }
    return triangle;
};

console.log(generate(1));
console.log(generate(2));
console.log(generate(3));
console.log(generate(5));
