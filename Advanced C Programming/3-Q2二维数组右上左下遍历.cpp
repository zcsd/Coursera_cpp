#include <iostream>
using namespace std;
//二维数组右上左下遍历
int main(){
    int row, col;
    cin >> row >> col;
    int matrix[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }

    int m = 0;
    for(int i = 0; i < row + col - 1; i++){

        if(i < col ){
            int k = 0;
            int j = i;
            cout << matrix[k][j] << endl;
            while(k + 1 < row && j - 1 >= 0){
                k += 1;
                j -= 1;
                cout << matrix[k][j] << endl;
            }
        }else{
            m += 1;
            int j = col - 1;
            cout << matrix[m][col-1] << endl;
            int k = m;
            while(k + 1 < row && j - 1 >= 0){
                k += 1;
                j -= 1;
                cout << matrix[k][j] << endl;
            }
        }
    }

    return 0;
}
