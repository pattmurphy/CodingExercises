/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function(flowerbed, n) {
    var openSlots = 0;
    var i = 0;

    if(n === 0){
        return true;
    }
    if(flowerbed.length == 1 && flowerbed[0] == 0){
        openSlots++;
        return openSlots >= n;
    }

    if(flowerbed[i] === 0){
        if(flowerbed[i+1] === 0){
            openSlots++;
            if(openSlots >= n){
                return true;
            }
            flowerbed[0] = 1;
            i++;
        }
        else{
            i += 2;
        }
    }
    else{
        i += 1;
    }

    for(; i<flowerbed.length-2; i++){
        if(flowerbed[i] === 0){
            if(flowerbed[i+1] === 0){
                if(flowerbed[i+2] === 0){
                    openSlots++;
                    if(openSlots >= n){
                        return true;
                    }
                    i++;
                    flowerbed[i] = 1;
                    continue;
                }
                i += 2;
            }
            i++;
        }
    }

    if(flowerbed[flowerbed.length-1] === 0 && flowerbed[flowerbed.length-2] === 0){
        openSlots++;
        if(openSlots >= n){
            return true;
        }
    }
    return false;
};

console.log(canPlaceFlowers([0,0,0], 2)); // true
console.log(canPlaceFlowers([0,1,0], 1)); // false
console.log(canPlaceFlowers([0,1,0,0], 1)); // true
console.log(canPlaceFlowers([0,0,0,1], 2)); // false
console.log(canPlaceFlowers([0,0,1,0], 1)); // true
console.log(canPlaceFlowers([0], 1)); // true
console.log(canPlaceFlowers([0,0], 2)) // false
console.log(canPlaceFlowers([0,0,0,0], 3)) // false
