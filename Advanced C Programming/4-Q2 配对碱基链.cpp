#include <iostream>
#include <cstring>
using namespace std;
//配对碱基链
void dnapair(char *p)
{
    int len=(int)strlen(p);
    for(int j = 0; j < len; j++){
        switch(*(p+j)){
            case 'A':
                *(p+j)='T';
                break;
            case 'T':
                *(p+j)='A';
                break;
            case 'C':
                *(p+j)='G';
                break;
            case 'G':
                *(p+j)='C';
                break;
            default:
                break;
        }
    }

    cout << p << endl;
}

int main(){
    int n;
    cin >> n;
    char dna[n][256];
    cin.get();
    for(int i=0; i < n; i++) cin.getline(dna[i], 256);

    for(int i=0; i < n; i++) dnapair(dna[i]);

    return 0;
}