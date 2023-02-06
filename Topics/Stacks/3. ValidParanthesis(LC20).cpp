
bool isBalancedParentheses(string str) {
    int n = str.length();
    stack<char> build;
    for (int i = 0; i < n; i++){
      if(str[i] == '(' || str[i] == '[' || str[i] == '{') build.push(str[i]);
      else if(str[i] == ')'){
        if (i == 0 or build.empty() or build.top() != '(') return false;
        build.pop();
      }
      else if(str[i] == ']'){
        if (i == 0 or build.empty() or build.top() != '[') return false;
        build.pop();
      }
      else if(str[i] == '}'){
        if (i == 0 or build.empty() or build.top() != '{') return false;
        build.pop();
      }
    }
    return build.empty();
}


Ex: Categories of monkeys( baby, kid, adult)
