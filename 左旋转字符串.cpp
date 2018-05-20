 ///
 /// @file    :左旋转字符串.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-20 13:46:13(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	string LeftRotateString(string str, int n){
		string left = "", right = "";
		for(int i = 0; i < n; i++)
			left += str[i];
		for(int i = n; i < str.size(); i++)
			right += str[i];
		cout << left << "+\n";
		reverse(left);
		cout << left << "-\n";
		reverse(right);
		str = left+right;
		reverse(str);
		return str;
	}
	void reverse(string &s){
		for(int i = 0; i < s.size()/2; i++){
			char temp = s[i];
			s[i] = s[s.size()-i-1];
			s[s.size()-i-1] = temp;
		}
	}
};

int main(){
	Solution test;
	string str;
	int n;
	while(cin>>str>>n){
		cout << test.LeftRotateString(str,n) << endl;
	}
	return 0;
}
