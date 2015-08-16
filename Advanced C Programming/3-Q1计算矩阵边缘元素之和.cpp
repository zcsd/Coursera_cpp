#include <iostream>
using namespace std;
//计算矩阵边缘元素之和
int main(){
    int nSize;
    cin >> nSize;
    int m, n;
    int sum[101]={0};
	
    for(int i = 0; i < nSize; i++){
        cin >> m >> n;
        int matrix[100][100];
        for(int j = 0; j < m; j++){
            for(int k = 0; k < n; k++){
                cin >> matrix[j][k];
            }
        }
        for(int j = 0; j < m; j++){
            sum[i]=sum[i] + **(matrix+j);
            if(n > 1){
                sum[i]=sum[i] + *(*(matrix + j) + n - 1);
            }
        }
        for(int j = 1; j < n-1; j++){
            sum[i]=sum[i] + *(*matrix + j);
            if(m > 1){
                sum[i]=sum[i] + *(*(matrix + m - 1) + j);
            }
        }
    }
    for(int i = 0; i < nSize; i++){
        cout << sum[i] <<endl;
    }
}