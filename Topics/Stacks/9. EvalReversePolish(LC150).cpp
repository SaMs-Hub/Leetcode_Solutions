class Solution {
public:
     int evalRPN(vector<string>& tokens) {
    stack<string> container;
    string result = "", choice = "";
    int value = 0;
    string aux = "";

    for (int i = 0; i < tokens.size(); i++){
        if (tokens[i] != "+" and tokens[i] != "-" and tokens[i] != "*" and tokens[i] != "/"){
            container.push(tokens[i]);
            continue;
        }else{
            choice = tokens[i];
        }

        if (choice == "+"){
            int first = stoi(container.top());
            container.pop();

            int second = stoi(container.top());
            container.pop();

            value = first + second;
            result = aux + to_string(value);
            container.push(result);
          
        }else if(choice == "-"){
            int first = stoi(container.top());
            container.pop();

            int second = stoi(container.top());
            container.pop();

            value = second - first;
            result = aux + to_string(value);
            container.push(result);

        }
        else if(choice == "*"){
            int first = stoi(container.top());
            container.pop();

            int second = stoi(container.top());
            container.pop();

            value = second * first;
            result = aux + to_string(value);
            container.push(result);

        }else if(choice == "/"){
            int first = stoi(container.top());
            container.pop();

            int second = stoi(container.top());
            container.pop();

            value = second/first;
            result = aux + to_string(value);
            container.push(result);

        }
        else{
            continue;

        }
    }

    return stoi(container.top());
    
}
};
