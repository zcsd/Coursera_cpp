#include <iostream>
#include <cstring>
using namespace std;
//递归 扩号匹配问题((ABCD(x)   )(rttyy())sss)(   Difficulty*****
int match(char input[], int n){
    int i = 0, j = 0;

    if(input[n] == '$'||input[n]==' ')
        return match(input, n - 1);

    for(i = n-1; i >= 0; i--){
        if (input[i] == '$')
        break;
    }

    if(i == -1)
        return 0;
    else{
        for(j = i; j <= n; j++){
            if (input[j] == '?'){
                input[i] = ' ';
                input[j] = ' ';
                break;
            }
        }

        if(j == n + 1)
            return 0;
        else return match(input, n);
    }
}

int main(){
    char input[101];
    char str[101];
    int i;

    while(cin.getline(input, 101)){
        int len = strlen(input);
        for(i = 0; i < len; i++){
            if(input[i] == '('){
                str[i] = '$';
            }else if(input[i] == ')')
                str[i] = '?';
            else str[i] = ' ';
        }

        str[i] = '\0';

        match(str, len - 1);
        cout << input << endl;
        cout << str << endl;
    }
    return 0;
}
