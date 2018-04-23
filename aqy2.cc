#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> A(13);
    for(int i = 0; i < 13; i++)
        cin >> A[i];
    int N;
    cin >> N;
    vector<int> X(N);
    for(int i = 0; i < N; i++)
        cin >> X[i];
    for(int i = 0; i < N; i++){
        int t = X[i];
        vector<int> left(A.begin(), a.begin() + t);
        vector<int> right(A.begin()+t+1,A.end());
        vector<int> temp(13);
        int flag = 0;
        for(int j = 0; j < left.length() && j < right.length(); j++){
            if(flag == 0) { temp[j] = *(left.end());left.pop();flag = 1;}
            else{temp[j] = *(right.end());right.pop();flag = 0;}
        }
        if(j == left.length()) temp = temp + right;
        else temp = temp + left;
        temp.reverse();
        for(i = 0; i < temp.length(); i++) cout << temp[i] << endl;
    }
    return 0;
}
