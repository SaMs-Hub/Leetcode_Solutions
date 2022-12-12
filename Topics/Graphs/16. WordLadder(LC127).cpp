// App 1 BFS(Om2 * n)
     int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict;
        for (int i = 0; i < wordList.size(); i++) dict.insert(wordList[i]);

        queue<string> myQueue;
        myQueue.push(beginWord);

        int result = 1;

        while (!myQueue.empty()){
            int count = myQueue.size();

            for (int i = 0; i < count; i++){
                string word = myQueue.front();
                myQueue.pop();

                if (word == endWord) return result;

                dict.erase(word);

                for (int j = 0; j < word.size(); j++){
                    char c = word[j];
                    for (int k = 0; k < 26; k++){
                        word[j] = k + 'a';
                        if (dict.find(word) != dict.end()){
                            myQueue.push(word);
                            dict.erase(word);
                        }

                    
                    }
                    word[j] = c;
                }
            }

            result++;
        }

        return 0;
        
    }
