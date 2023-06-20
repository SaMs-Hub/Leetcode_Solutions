// O(n * 2n)

var letterCasePermutation = function(str) {
    let result = [];
    result.push(str);

    for (let i = 0; i < str.length; i++) {
        if (isNaN(parseInt(str[i], 10))) {
            let n = result.length;
            for (let j = 0; j < n; j++) {
                let permutation = result[j].split('');
                if (permutation[i].toLowerCase() === permutation[i]) permutation[i] = permutation[i].toUpperCase();
                else permutation[i] = permutation[i].toLowerCase();

                result.push(permutation.join(""));
            }
        }
    }

    return result;
};
