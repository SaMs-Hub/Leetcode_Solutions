class Solution {
public:
    string intToRoman(int n) {
        // for romans
    vector<string> romans = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    // for numbers
    vector<int> numbers = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    string roman;

    // traverse till n becomes 0;
    for (int i = 0; n != 0; i++){
        while (n >= numbers[i]){
            n -= numbers[i];
            roman += romans[i];
        }
    }

    return roman;
        
    }
};
