#include <bits/stdc++.h> 
void insert(stack<int> &st,int x){
	if(st.empty()){
		st.push(x);
		return;
	}
	else if(st.top()<=x){
		st.push(x);
		return;
	}
	int y=st.top();
	st.pop();
	insert(st,x);
	st.push(y);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()) return;
	int temp=stack.top();
	stack.pop();
	sortStack(stack);
	insert(stack,temp);
}
