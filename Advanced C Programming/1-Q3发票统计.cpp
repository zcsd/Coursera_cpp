#include <iostream>
#include <cstdio>
using namespace std;
//发票统计
int main(){
    int id[3], pages[3];
    char type[3][100];
    float money[3][100], money1=0.00, money2=0, money3=0, moneyA=0, moneyB=0, moneyC=0;

    for(int i = 0; i < 3; i++){
        cin >> id[i] >> pages[i];
        for(int  j = 0; j < pages[i]; j++){
            cin >> type[i][j] >> money[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int  j = 0; j < pages[i]; j++){

            if(id[i] == 1){
                money1 += money[i][j];
            }else if(id[i] == 2){
                money2 += money[i][j];
            }else if(id[i] == 3){
                money3 += money[i][j];
            }

            if(type[i][j] == 'A'){
                moneyA += money[i][j];
            }else if(type[i][j] == 'B'){
                moneyB += money[i][j];
            }else if(type[i][j] == 'C'){
                moneyC += money[i][j];
            }
        }
    }

    printf("1 %.2f\n", money1);
    printf("2 %.2f\n", money2);
    printf("3 %.2f\n", money3);
    printf("A %.2f\n", moneyA);
    printf("B %.2f\n", moneyB);
    printf("C %.2f\n", moneyC);

    return 0;
}
