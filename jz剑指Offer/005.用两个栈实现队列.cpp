 ///
 /// @file    :5.用两个栈实现队列.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 10:23:26(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    void push(int node) {
        if(stack2.empty()) stack2.push(node);
		else{
			while(!stack2.empty()){
				stack1.push(stack2.top());
				stack2.pop();
			}
			stack2.push(node);
			while(!stack1.empty()){
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
    }

    int pop() {
        int top = stack2.top();
		stack2.pop();
		return top;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
int main(){
	
	return 0;
}
