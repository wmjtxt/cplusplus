#include <iostream>
using namespace std;

int difsum(int* a,int n){
    int i,sum;
    sum = 0;
    for(i = 0; i < n-1; ++i){
        sum += (a[i]-a[i+1]>=0)?(a[i]-a[i+1]):(a[i+1]-a[i]);
    }
    return sum;
}


int main(){
	int n;
	while(cin >> n){
        int res = 0;
		int arr[n], i;
		for(i = 0; i < n; ++i){
			cin >> arr[i];
		}
		int a[n],b[n],flag[n] = {0};
		int maxnum,minnum,maxidx,minidx,aleft = 0,aright = 0,bleft = 0,bright = 0;
		int aleftidx,arightidx,bleftidx,brightidx;
		int ares = 0,bres = 0;//难度和
		//找到最小值和最大值及他们的index
		maxnum = minnum = arr[0];
		maxidx = minidx = 0;
		for(i = 1; i < n; ++i){
			if(maxnum < arr[i]){
				maxnum = arr[i];
				maxidx = i;
			}
			if(minnum > arr[i]){
				minnum = arr[i];
				minidx = i;
			}
		}
		a[0] = aleft = aright = maxnum;
		aleftidx = arightidx = maxidx;
		b[0] = bleft = bright = minnum;
		bleftidx = brightidx = minidx;
		flag[maxidx] = flag[minidx] = 1;
		int atmp,btmp;
		for(i = 0; i < n; ++i){
			if(flag[i] == 0){
				if(i < aleftidx){
                    atmp = a[0];
                    //a[i] = a[]
				}
			}
		}
		res = ares + bres;
		res = difsum(arr,n);
		cout << "res = " << res << endl;
	}
	return 0;
}
