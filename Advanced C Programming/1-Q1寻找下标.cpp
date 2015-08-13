#include <iostream>
using namespace std;
//寻找下标
int main(){
    int nSize;
    cin >> nSize;
    int number[nSize];

    for(int i = 0; i < nSize; i++){
        cin >> number[i];
    }

    for(int i = 0; i < nSize; i++){
        if(number[i] == i){
            cout << i << endl;
            break;
        }else if(i == nSize - 1){
            cout << "N" << endl;
        }

    }

    return 0;
}
