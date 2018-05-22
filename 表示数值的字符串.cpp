 ///
 /// @file    :表示数值的字符串.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 14:53:24(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
	bool isNumeric(char* string)
    {
        if(string[0] == '+' || string[0] == '-') string++;
        if(string[0] != '.' && string[0] < '0' || string[0] > '9') return false;
        while(string[0] >= '0' && string[0] <= '9')
			string++;
        if(string[0] == '\0') return true;
		else if(string[0] == 'e' || string[0] == 'E'){
			string++;
			if(string[0] == '\0') return false;
			return isNum(string);
		}
		else if(string[0] == '.'){
			string++;
			if(string[0] == '\0') return false;
			while(string[0] >= '0' && string[0] <= '9')
				string++;
			if(string[0] == '\0') return true;
			else if(string[0] == 'e' || string[0] == 'E'){
				string++;
				if(string[0] == '\0') return false;
				return isNum(string);
			}
			else return false;
		}
		else return false;
    }
	bool isNum(char *string){
		int i = 0;
		if(string[0] == '+' || string[0] == '-')
			string++;
		while(string[i] != '\0'){
			if(string[i] < '0' || string[i] > '9')
				return false;
			i++;
		}
		return true;
	}
};

int main(){
	Solution test;
	char s[100];
	while(cin>>s){
		if(test.isNumeric(s))
			cout << "true" << endl;
		else cout << "false" << endl;
	}
	return 0;
}
