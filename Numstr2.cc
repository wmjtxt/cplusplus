//这个通过了
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

//连接
string maxInt(string arr[],int n){
	string str;
	str = arr[0];
	for(int i = 1; i < n; i++){
		str += arr[i];
		//cout << "r=" << res << endl;
	}
	return str;
}

//排序函数
void sortFun(string arr[],int n){
	int m;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int k,res1 = 0,res2 = 0;
			for(k = 0; k < arr[i].length(); k++){
				res1 = 10*res1 + arr[i][k]-'0';
			}
			for(k = 0; k < arr[j].length(); k++){
				res1 = 10*res1 + arr[j][k]-'0';
			}
			for(k = 0; k < arr[j].length(); k++){
				res2 = 10*res2 + arr[j][k]-'0';
			}
			for(k = 0; k < arr[i].length(); k++){
				res2 = 10*res2 + arr[i][k]-'0';
			}
			if(res1<res2){
				string temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main(){
	int N;
	while(cin >> N){
		string arr[N];
		//输入
		for(int i = 0; i < N; i++){
			//arr[i] = new char[4];
			cin >> arr[i];
			//cout << arr[i] << endl;
		}
		//根据高位数排序

		string res;
		//计算
		sortFun(arr,N);
		res = maxInt(arr,N);
		//输出
		cout << res << endl;
		//for(int i = 0; i < N; ++i){
		//	delete arr[i];
		//}
	}
	return 0;
}
