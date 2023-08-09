class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        char temp;

        for(int i =0; i< s.length(); i++){
            //check if open
            if(s[i] == '(' | s[i] == '{' | s[i] == '['  )
                stack.push(s[i]);
            else{
                if (stack.empty())
                    return false;
                temp = stack.top();
                if(temp == '(')
                    temp = ')';
                else if(temp == '[')
                    temp = ']';
                else temp = '}';

                if(s[i] != temp)
                    return false;
                else
                    stack.pop();
            }

        }

        

        return stack.empty();
    }
};
