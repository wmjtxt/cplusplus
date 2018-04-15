#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int N;
    while(cin >> N){
        int ans[N];
        for(int i = 0; i < N; i++){
            int n;
            cin >> n;
            int arr[n],flag;
            int j,k,m;
            for(j = 0;j < n; j++)
                scanf("%d",&arr[j]);
            for(j = 1; j <= arr[n-1]-arr[0]; j++){
                flag = 1;
                for(k = 0; k < n; k++){
                    if(arr[k]+j<=arr[n-1]){
                        for(m = 0; m < n; m++){
                            if(arr[m]==arr[k]+j)
                                break;
                        }
                        if(m == n){
                            flag = 0;
                            break;
                        }
                    }
                    else{
                        break;
                    }
                }
                if(flag == 1){
                    ans[i] = j;
                    break;
                }
            }
            for(j = 1; j <= arr[n-1]-arr[0]; j++){
                flag = 1;
                for(k = n-1; k > 0; k--){
                    if(arr[k]-j>=arr[0]){
                        for(m = 0; m < n; m++){
                            if(arr[m]==arr[k]-j)
                                break;
                        }
                        if(m == n){
                            flag = 0;
                            break;
                        }
                    }
                    else
                        break;
                }
                if(flag == 1 && ans[i] == j)
                    break;
            }
        }
        for(int i = 0; i < N; i++){
            cout << ans[i] << endl;
        }
    }
    return 0;
}
