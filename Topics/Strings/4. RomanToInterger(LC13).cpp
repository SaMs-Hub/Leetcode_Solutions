// Approach 1

class Solution {
public:
    
    int romanValue(char romanLetter)
{
    if (romanLetter == 'I')
    {
        return 1;
    }
    if (romanLetter == 'V')
    {
        return 5;
    }
    if (romanLetter == 'X')
    {
        return 10;
    }
    if (romanLetter == 'L')
    {
        return 50;
    }
    if (romanLetter == 'C')
    {
        return 100;
    }
    if (romanLetter == 'D')
    {
        return 500;
    }
    if (romanLetter == 'M')
    {
        return 1000;
    }
        
 return 0;
}

    
    int romanToInt(string str) {
        int ans = romanValue(str[0]);

    for (int i = 1; i < str.size(); i++)
    {
        if (romanValue(str[i]) > romanValue(str[i - 1]))
        {
            ans = ans - (2 * romanValue(str[i - 1])) + romanValue(str[i]);
        }
        else
        {
            ans += romanValue(str[i]);
        }
    }

    return ans;
        
        
    }
};
