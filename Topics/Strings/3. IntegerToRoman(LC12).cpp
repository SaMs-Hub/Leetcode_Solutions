// Approach 1 - Using Loop 

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



// Approach 2 -

string IntergerToRoman(int n)
{
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string thousands[] = {"", "M", "MM", "MMM"};

    return thousands[n / 1000] + hundreds[(n % 1000) / 100] + tens[(n % 100) / 10] + ones[n % 10];
}




// Approach 3 - Using Maps -EdgeCaseError
string intToRoman(int n){
    if (n == 0){
        return "";
    }

    map<int, string> str {
		{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"}, {50,"L"},{90,"XC"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"} 
		};

    string res = "";

    while (n != 0){
        map<int, string>::iterator p = str.upper_bound(n);
        p--;
        n -= p->first;
        res += p->second;



    }

    return res;

}


