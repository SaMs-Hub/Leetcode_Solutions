// App1 BF O(n2)

 string countAndSay(int n) {
    if (n == 1) return "1";

    int count = 0;
    char prev = '0';
    string ans;

    string prevValue = countAndSay(n - 1);

    for (int i = 0; i < prevValue.size(); i++){
        if (prevValue[i] == prev) count += 1;
        else{
            if (count != 0){
                ans += count + '0';
                ans += prev;
            }

            prev = prevValue[i];
            count = 1;

        }
    }

    if (count != 0){
                ans += count + '0';
                ans += prev;
            }

            return ans;
        
    }
