#include <iostream>
using namespace std;
//角谷猜想
void JGGuess(int number){
    if(number == 1){
        cout << "End" << endl;
    }else{
        if(number % 2 != 0){
            cout << number << "*3+1=" << number * 3 + 1 << endl;
            number = number * 3 + 1;
            return JGGuess(number);
        }else{
            cout << number << "/2=" << number / 2 << endl;
            number = number / 2;
            return JGGuess(number);
        }
    }
}

int main(){
    int number;

    cin >> number;
    JGGuess(number);

    return 0;
}
