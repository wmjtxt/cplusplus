#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> array(3);
    int result = 0;
    for(int i = 0; i < 3; i++){
        cin >> array[i];
    }
    sort(array.begin(),array.end());
    cout << array[0] << array[1] << array[2] << endl;
    while(((array[2] - array[1]) != 0) || ((array[1] - array[0]) != 0)){
        if(array[2] - array[0] >= 2)
        {
            array[0] += 2;
            result++;
	    continue;
        }
        if(array[2] - array[1] >= 2){
            array[1] += 2;
            result++;
	    continue;
        }
        if((array[0] == array[1]) && ((array[2] - array[0]) == 1)){
            array[1]++;
            array[0]++;
            result++;
	    continue;
        }
    }
    cout << array[0] << array[1] << array[2] << endl;
    cout << result << endl;
    return 0;
}
