 ///
 /// @file    :翻转单词顺序列.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-20 13:46:13(NewYork time)
 /// @quote   :
 ///
#include <stdio.h> 
#include <iostream>
#include <string.h>
using namespace std;

class Solution{
public:
	string ReverseSentence(string str){
		int i = 0;
		string temp = "";
		string res = "";
		while(str[i] != '\0'){
			if(str[i] == ' '){
				reverse(temp);
				res += temp + ' ';
				temp = "";
				i++;
				continue;
			}
			temp += str[i];
			i++;
		}
		reverse(temp);
		res += temp;
		//res += '\0';
		reverse(res);
		return res;
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
	char str[100];
	gets(str);
	string str1 = "I am a student.";
	cout << test.ReverseSentence(str1) << endl;
	cout << test.ReverseSentence(str) << endl;
	return 0;
}
