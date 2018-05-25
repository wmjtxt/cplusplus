 ///
 /// @file    :矩阵中的路径.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-23 09:44:20(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <string.h>
using namespace std;

class Solution{
public:
	bool hasPath(char* matrix, int rows, int cols, char* str){
		int* flag = new int[rows*cols];
		for(int i = 0; i < rows; i++)
			for(int j = 0; j < cols; j++){
				if(helper(i,j,rows,cols,matrix,str,flag))
					return true;
			}
		delete [] flag;
		return false;
	}
	bool helper(int i, int j, int rows, int cols, char* matrix, char* str, int* flag){
		if(flag[i*cols+j] == 1 || matrix[i*cols+j] != str[0]){
			return false;
		}
		str++;
		if(str[0] == '\0') return true;
		flag[i*cols+j] = 1;
		bool res = helper(i-1,j,rows,cols,matrix,str,flag)
			||helper(i+1,j,rows,cols,matrix,str,flag)
			||helper(i,j-1,rows,cols,matrix,str,flag)
			||helper(i,j+1,rows,cols,matrix,str,flag);
		flag[i*cols+j] = 0;//去标记，很重要
		if(res) return true;
		else return false;
	}
};

int main(){
	Solution test;
	return 0;
}
