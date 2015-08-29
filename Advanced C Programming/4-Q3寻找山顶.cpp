#include <iostream>
using namespace std;
//寻找山顶
int main(){ 
    int matrix[21][21];
    int i, j, m, n;
    int x, y, flag;;

    cin >> m >> n;
    for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
            cin >> matrix[i][j];
    
    for(i = 0; i < m; ++i){
        for(j = 0; j < n; ++j){
            flag = 1;
            /* 上方 */
            x = i - 1;
            y = j;
            if(flag == 1 && x >= 0)
                if(matrix[i][j] < matrix[x][y])
                    flag = 0;     
            /* 下方 */
            x = i + 1;
            y = j;
            if(flag == 1 && x < m)
                if(matrix[i][j] < matrix[x][y])
                    flag = 0;     
            /* 左方 */
            x = i;
            y = j - 1;
            if(flag == 1 && y >= 0)
                if(matrix[i][j] < matrix[x][y])
                    flag = 0;     
            /* 右方 */
            x = i;
            y = j + 1;
            if(flag == 1 && y < n)
                if(matrix[i][j] < matrix[x][y])
                    flag = 0;     
            if(flag)
                cout << i << " " << j << endl;
        }
    }

    return 0;
}
