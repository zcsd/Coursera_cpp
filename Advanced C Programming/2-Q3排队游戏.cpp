#include <iostream>
#include <cstring>
using namespace std;
//排队游戏((()(())())(()))    Difficulty****
char input[101] = {};
char boy, girl;
int match(int n){
    if (input[n] == girl)
        return n;
    if (input[n] == 0)
        return n;

    int r = n+1;

    while(input[r] != 0 && input[r] != girl){
        r = match(r);
    }

    if(input[r] == girl){
        cout << n << ' ' << r << endl;
        return r+1;
    }
    else
        return r;
}

int main(){
    cin>>input;
    boy = input[0];
    for(int i = 0; i < strlen(input); i++){
        if(input[i] != boy){
            girl = input[i];
            break;
        }
    }
    match(0);

    return 0;
}
