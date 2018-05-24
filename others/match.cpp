 /// nowcoder
 /// @file    :match.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-07 22:54:31(NewYork time)
 /// @quote   :
 ///

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


class Solution {
public:
    bool match(char* str, char* pattern)
    {
        int i = 0, j = 0;
        while(i != strlen(str) && j != strlen(pattern)){
            if(pattern[j+1] != '*'){
                if(str[i] == pattern[j] || pattern[j] == '.'){
                    i++;
                    j++;
                    continue;
                }
                else return false;
            }
            else{
                if(str[i] == pattern[j] || pattern[j] == '.'){
                    /*这里好像不用递归不行啊，一开始我是这样写的,看了大神的答案才知道考虑的不全。
                    i++;
                    continue;*/
                    return match(str+i+1, pattern+j) || match(str+i+1,pattern+j+2) || match(str+i,pattern+j+2);
                }
                else
                    j+=2;
            }
        }
        if(pattern[strlen(pattern)-1] == '*')
            j+=2;
        if(i == strlen(str) && j == strlen(pattern))
            return true;
        else return false;
    }
};

int main(){
	Solution s;
	char a[20],b[20];
	cin >> a;
	cin >> b;
	if(s.match(a,b))
		cout << "true" << endl;
	else cout << "false" << endl;
	return 0;
}
