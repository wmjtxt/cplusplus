#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int array[n],i,j,k;
		for(i = 0; i < n; ++i){
			cin >> array[i];
		}
		for(i = 0; i < n-1; ++i){
			for(j = i+1; j < n; ++j){
				if(array[i] == array[j]){
					//删除array[j]
					for(k = j; k < n-1; ++k){
						array[k] = array[k+1];
					}
					n--;
					j--;
				}
			}
		}
		for(i = 0; i < n; ++i){
			for(j = i+1; j < n; ++j){
				if(array[i] > array[j]){
					//交换
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		for(i = 0; i < n; ++i){
			cout << array[i] << endl;
		}
	}
	return 0;
}
