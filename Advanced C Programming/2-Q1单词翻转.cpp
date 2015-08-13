#include <iostream>
#include <cstring>
using namespace std;
//单词翻转
void SwapWord(char temp[], int lenofWord){
   for(int i = lenofWord-1; i >= 0; i--){
       cout << temp[i];
   }
   cout << " ";
}

int main(){
    char input[501], temp[501];
    cin.get(input, 500);

    int lenofWord = 0, len = strlen(input);
    for(int i = 0; i < len; i++){
        if(input[i] != ' ' && input[i] != '\0'){
            temp[lenofWord] = input[i];
            lenofWord += 1;
        }else{
            SwapWord(temp, lenofWord);
            lenofWord = 0;
        }
    }
    SwapWord(temp, lenofWord);

    return 0;
}
