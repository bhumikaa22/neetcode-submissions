class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto c : tokens){
            if(c == "+"){
                int el1 = st.top();
                st.pop();
                int el2 = st.top();
                st.pop();
                int sum = el1 + el2;
                st.push(sum);
            }else if(c == "-"){
                int el1 = st.top();
                st.pop();
                int el2 = st.top();
                st.pop();
                int diff = el2 - el1;
                st.push(diff);
            }else if(c == "*"){
                int el1 = st.top();
                st.pop();
                int el2 = st.top();
                st.pop();
                int mul = el2 * el1;
                st.push(mul);
            }else if(c == "/"){
                int el1 = st.top();
                st.pop();
                int el2 = st.top();
                st.pop();
                int div = el2 / el1;
                st.push(div);
            }else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
