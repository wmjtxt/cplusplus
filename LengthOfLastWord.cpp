#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Solution{
public:
	int wordlength(char *str){
		int res = 0,i = 0;
		while(str[i] != '\0'){
			if(str[i] == ' '){
				res = 0;
			}
			else{
				++res;
			}
			++i;
		}
		return res;
	}
};

int main(){
	char str[5000];
	Solution s;
	while(gets(str)){
		//cout << str << endl;
		cout << s.wordlength(str) << endl;
	}
	return 0;
}
