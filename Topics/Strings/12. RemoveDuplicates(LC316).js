// using stack
var removeDuplicateLetters = function(str) {
  
    let stack = [];
    let visited = new Set();
    let occurence = new Map();
    
    for (let i = 0; i < str.length; i++){
        occurence[str[i]] = i;
    }
    
   for (let i = 0; i < str.length; i++){
       let char = str[i];
       if (!visited.has(char)){
           
           // for sorting
           while (stack.length && stack[stack.length - 1] > char && occurence[stack[stack.length - 1]] > i){
               visited.delete(stack.pop());
           }
           visited.add(char);
           stack.push(char);
       }
   }
   
  return stack.join('');

};
