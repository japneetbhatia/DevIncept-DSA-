string isBalanced(string s) {
    stack<char> checkBrackets;
    for (int c = 0; c < s.size(); c++) {
        if (s[c] == '(' || s[c] == '[' || s[c] == '{'){
            checkBrackets.push(s[c]);
        }
        else if((!checkBrackets.empty()) && 
               ((s[c] == ')' && checkBrackets.top() == '(') || 
                (s[c] == ']' && checkBrackets.top() == '[') ||
                (s[c] == '}' && checkBrackets.top() == '{'))){
            checkBrackets.pop();
        }else
           return "NO";
    }
    if (checkBrackets.empty()) return "YES";
    else  return "NO";
}
