// Using array
var isPalindrome = function(head) {
    let arr = [];

    let currentNode = head;
    while (currentNode){
        arr.push(currentNode.val);
        currentNode = currentNode.next;
    }

    for (let i = 0; i < Math.floor(arr.length/2); i++){
        if (arr[i] !== arr[(arr.length - i - 1)]) return false;
    }
    return true;
    
};
