#include <iostream>
#include <iomanip>
using namespace std;
//分配病房
int main(){
    int m, seq[50], new_seq[50], nSize=0;
    float a, mark[50], new_mark[50];
    
    cin >> m >> a;
    
    for(int i=0; i < m; i++){
        cin >> *(seq+i) >> *(mark+i);
        if(*(mark+i)>a){
            new_seq[nSize] = *(seq+i);
            new_mark[nSize] = *(mark+i);
            nSize++;
        }
    }

    if(nSize <= 0){
        cout << "None." << endl;
    }else{
        for(int k = 0; k < nSize; k++){
            for(int l = k; l < nSize; l++){
                if(new_mark[k] < new_mark[l]){
                    swap(new_seq[k], new_seq[l]);
                    swap(new_mark[k], new_mark[l]);
                }
            }
        }
        
        for(int j = 0; j < nSize; j++){
            cout << setfill('0') << setw(3) << new_seq[j] << ' ';
            cout << fixed;
            cout << showpoint << setprecision(1) << new_mark[j] <<endl;
        }
    }

    return 0;
}