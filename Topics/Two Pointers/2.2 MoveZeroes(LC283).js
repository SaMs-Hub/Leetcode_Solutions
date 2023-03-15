// App 1 
var moveZeroes = function(nums) {
    let i = 0;
    let j = 1;

    while (j < nums.length){
        if (nums[i] == 0 && nums[j] != 0){
            [nums[i], nums[j]] = [nums[j], nums[i]];
            i++;
            j++;
        }else if(nums[i] == 0 && nums[j] == 0){
            j++;
        }else{
            i++;
            j++;
        }
    }

    return nums;
    
};
