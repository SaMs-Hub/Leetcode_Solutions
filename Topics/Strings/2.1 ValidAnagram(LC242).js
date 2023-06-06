// App 1 Convert Into array and Srot TC - O(n * log n)
var isAnagram = function(s, t) {
    return s.split("").sort().join("") === t.split("").sort().join("");
};


// App 2 Using maps O(n)
var isAnagram = function(s, t) {
    if (s.length !== t.length) return false;
    const map = new Map();

    for (let x of s){
        if (map.has(x)) map.set(x, map.get(x) + 1);
        else map.set(x, 1)
    }

    for (let x of t){
        if (!map.has(x)) return false;
        map.set(x, map.get(x) - 1);
        if (map.get(x) === 0) map.delete(x);
    }

    if (map.size > 0) return false;
    return true;
};
