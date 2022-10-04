// App 1 - Two Pointers O(n)
bool isPalindrome(string str)
{
   int i = 0;
   int j = str.size() - 1;

   while (i < j){

    while (!isalnum(str[i]) && i < j) i++;
    while (!isalnum(str[j]) && i < j) j--;

    if (tolower(str[i]) != tolower(str[j])) return false;

     i ++;
     j --;
   }
   return true;
}

// App 2 - Naive 
bool isPalindrome(string s)
{
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
            str += tolower(s[i]);
    }

    return str == string(str.rbegin(), str.rend());
}
