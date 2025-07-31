#include <vector>
#include <iostream>
#include <stack>
#include <string>
using namespace std;


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        for(string& token : tokens)
        {
            if(token=="+"||token=="-"||token=="*"||token=="/")
            {
                int num1 = temp.top();
                temp.pop();
                int num2=temp.top();
                temp.pop();
                if(token=="+")
                temp.push(num1+num2);
                else if (token=="-")
                temp.push(num2-num1);
                else if (token == "*")
                temp.push(num1*num2);
                else if (token == "/")
                temp.push(num2/num1);
            }
            else 
            {
                temp.push(stoi(token));
            }
        }
        return temp.top();
}
};