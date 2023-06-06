// App 1 Using sets - O(n)
var containsDuplicate = function(nums) {
    let numSet = new Set(nums);
    return numSet.size != nums.length;

    
};

// App2 Using sets with break
var containsDuplicate = function(nums) {
    let numSet = new Set();

    for (let x of nums){
        if (numSet.has(x)) return true;
        numSet.add(x);
    }

    return false;
   

    
};


// App 3  Using two pointers
var containsDuplicate = function(nums) {
    nums.sort((a, b) =>  a - b);

    let i = 0;
    let j = i + 1;

    while (j < nums.length){
        if (nums[i] === nums[j]){
            return true;
            
        }else{
            i++;
            j++;
        }
    }

    return false;
    
};

// App 4 Using Map
var containsDuplicate = function(nums) {
   const map = new Map();

   for (let x of nums){
       if (map.has(x)) return true;
       map.set(x, true);
   }

   return false;
    
};

