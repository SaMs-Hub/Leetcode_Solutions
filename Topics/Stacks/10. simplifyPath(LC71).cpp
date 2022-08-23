// App 1 - Using stacks
class Solution {
public:
   
string simplifyPath(string str) {
    stack<string> container;
    string res;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == '/') continue;

        string temp;
        while (i < str.size() && str[i] != '/'){
            temp += str[i];
            i++;
        }

        if (temp == ".") continue;
        else if(temp == ".."){
            if (!container.empty()) container.pop();
        }
        else container.push(temp);

        while (!container.empty()){
            res += "/" + container.top();
            container.pop();
        }

        if (res.size() == 0) return "/";
        return res;
    }

    return res;
        
}
};


// App 2 - Using vectors
#include <string>
using std::string;

#include <vector>
using std::vector;

#include <sstream>
using std::istringstream;

class Solution {
public:
    string simplifyPath(string path) {
        string ret, tmp;
        vector<string> stack;
        for ( istringstream iss(path); getline(iss, tmp, '/');  ) {
            if (tmp == ".." && !stack.empty()) stack.pop_back();
            else if (tmp == "." || tmp == ".." || tmp == "") continue;
            else stack.push_back(tmp);
        }
        for (auto str : stack) { ret += "/" + str; }
        return ret.empty() ? "/" : ret;
    }
};
