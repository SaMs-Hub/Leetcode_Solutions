// App 1 - Two Pointers O(1)
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
