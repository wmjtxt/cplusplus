//这个提交后提示有段错误
#include <iostream>
#include <string.h>
using namespace std;

//求最大整数函数
char* maxInt(char arr[][5],int n){
	char* res;
	res = arr[0];
	for(int i = 1; i < n; i++){
		//cout << "arr[i] = " << arr[i] << endl;
		//cout << strlen(arr[i]) << endl;
		//for(int j = 0; j < strlen(arr[i]); ++j){
		//	res = 10*res + arr[i][j]-'0';
		//}
		strcat(res,arr[i]);
		//cout << "r=" << res << endl;
	}
	return res;
}

//排序函数
void sortFun(char arr[][5],int n){
	int m;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			//m = (strlen(arr[i])<strlen(arr[j]))?strlen(arr[i]):strlen(arr[j]);
			//cout << "m = " << m << endl;
			int k,res1 = 0,res2 = 0;
			for(k = 0; k < strlen(arr[i]); k++){
				res1 = 10*res1 + arr[i][k]-'0';
			}
			for(k = 0; k < strlen(arr[j]); k++){
				res1 = 10*res1 + arr[j][k]-'0';
			}
			for(k = 0; k < strlen(arr[j]); k++){
				res2 = 10*res2 + arr[j][k]-'0';
			}
			for(k = 0; k < strlen(arr[i]); k++){
				res2 = 10*res2 + arr[i][k]-'0';
			}
			if(res1<res2){
				char* temp;
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}
}


int main(){
	int N;
	while(cin >> N){
		char arr[N][5];
		//输入
		for(int i = 0; i < N; i++){
			//arr[i] = new char[4];
			cin >> arr[i];
			cout << arr[i] << endl;
		}
		//根据高位数排序

		char* res = new char[500];
		//计算
		sortFun(arr,N);
		res = maxInt(arr,N);
		//输出
		cout << res << endl;
		//for(int i = 0; i < N; ++i){
		//	delete arr[i];
		//}
	}
}
