bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> st;
    for(int i=0;i<expression.length();i++){
        if(expression[i]=='('||expression[i]=='{'||expression[i]=='['){
            st.push(expression[i]);
        } 
        else{
            if (!st.empty()) {
                if((st.top()=='('&&expression[i]==')')||(st.top()=='{'&&expression[i]=='}')||(st.top()=='['&&expression[i]==']')) {
                    st.pop();
                }
                else return false;
            }
            else return false;  
        }
    }
    if(st.empty()) return true;
    else return false; //TC: O(n) SC: O(n)
} 
