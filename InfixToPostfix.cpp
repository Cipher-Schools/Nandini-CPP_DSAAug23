#include<bits/stdc++.h>
using namespace std;
int prec(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='/'||c=='*'){
		return 2;
	}
	else if(c=='+'||c=='-'){
		return 1;
	}
	return 0;
}
bool isoperand(char c){
	if(c>='a' && c<='z' || (c>='0'&&c<='9')){
		return true;
	}
	return false;
}
bool isoperator(char c){
	if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^'){
		return true;
	}
	return false;
}
string infixToPostfix(string s){
	string postfix = "";
	stack<char>st;
	for(int i=0;i<s.size();i++){
		//cout<<c<<" ";
		char c = s[i];
		if(isoperand(c)==true){
			postfix.push_back(c);
		}
		else if(c=='('){
			st.push(c);
		}
		else if(c==')'){
			while(!st.empty()&&st.top()!='('){
				postfix.push_back(st.top());
				st.pop();
			}
			st.pop();
		}
		else if(isoperator(c)==true){
			if(st.size()>0){
				if(prec(st.top())<prec(c)){
				st.push(c);
			}
			else{
				while(st.size() && (prec(st.top()) >= prec(c))){
					postfix.push_back(st.top());
					st.pop();
				}
				st.push(c);
			}
			}
			else{
				st.push(c);
			}
			
		}
	}
	while(!st.empty()){
			postfix.push_back(st.top());
			st.pop();
	}
	return postfix;


}