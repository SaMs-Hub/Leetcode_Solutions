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

