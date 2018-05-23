 ///
 /// @file    :机器人的运动范围1.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-23 09:44:20(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

class Solution{
public:
	int movingCount(int threshold, int rows, int cols){
		int* flag = new int[rows*cols];
		return helper(0,0,rows,cols,flag,threshold);
	}

	int count(int i, int j){
		int sum = 0;
		while(i > 0){
			sum += i%10;
			i /= 10;
		}
		while(j > 0){
			sum += j%10;
			j /= 10;
		}
		return sum;
	}
	int helper(int i, int j, int rows, int cols,int* flag, int threshold){
		if(i < 0 || i >= rows || j < 0 || j >= cols || flag[i*cols+j] == 1 || count(i,j) > threshold)
			return 0;
		flag[i*cols+j] = 1;
		return helper(i-1,j,rows,cols,flag,threshold)+helper(i-1,j,rows,cols,flag,threshold)+helper(i-1,j,rows,cols,flag,threshold)+helper(i-1,j,rows,cols,flag,threshold)+1;
	}
};


int main(){
	Solution test;
	return 0;
}
