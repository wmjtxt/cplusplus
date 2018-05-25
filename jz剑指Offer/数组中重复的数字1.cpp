 ///
 /// @file    :数组中重复的数字.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-22 13:48:53(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        vector<int> cnt(length);
        for(int i = 0; i < length; i++){
            cnt[numbers[i]]++;
        }
        for(int i = 0; i < length; i++){
            if(cnt[i] > 1){
                *duplication = i;
                return true;
            }
        }
        return false;
    }
};

int main(){
	
	return 0;
}
