#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i;
    float jumlah;
    cout<<"Penjumlahan Deret Angka"<<endl<<endl;

    i=1;
    jumlah=0;
    do{
        cout<<"Data ke "<<i<<"="<<i<<endl;
        jumlah=jumlah+i;
        i++;
    }while(i<=10);
    cout<<"Jumlah deret bilangan tersebut= "<<jumlah<<endl;

    return 0;
}