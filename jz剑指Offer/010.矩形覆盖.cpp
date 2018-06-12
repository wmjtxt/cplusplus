 ///
 /// @file    :10.矩形覆盖.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-06-12 11:07:04(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    int rectCover(int number) {
        if(number < 1)
            return 0;
        int rect1 = 1, rect2 = 2;
        while(--number){
            rect2 += rect1;
            rect1 = rect2 - rect1;
        }
        return rect1;
    }
};

int main(){
	
	return 0;
}
