#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> v;
        long long int ans=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/" ){
                v.push(stoi(tokens[i]));
            }
            else{
                long long int x=v.top();
                v.pop();
                long long int y=v.top();
                v.pop();
                if(tokens[i]=="+"){
                    ans=x+y;
                    v.push(ans);
                }
                else if(tokens[i]=="*"){
                    ans=x*y;
                    v.push(ans);
                }
                else if(tokens[i]=="/"){
                    ans=y/x;
                    v.push(ans);
                }
                else if(tokens[i]=="-"){
                    ans=y-x;
                    v.push(ans);
                }
            }
        }
        return v.top();
    }
};

