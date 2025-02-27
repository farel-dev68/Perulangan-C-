#include <iostream>
using namespace std;

int main(){
    cout<< "Dimas Ikhwan Farel Sulendro"<<endl;
    cout<< "24051030107"<<endl<<endl;

    int i,jumlah,bil;
    cout<< "Menjumlahkan Deret Bilangan ke-n Dengan While"<<endl<<endl;
    cout<< "Masukkan Bilangan=";
    cin>>bil;

    i=1;
    jumlah=0;
    while(i<=bil)
    {
        cout<< "Deret Ke "<<i<< "= "<<i<<endl;
        jumlah+=i;
        i++;
    }
    cout<< "Jumlah deret bilangan="<<jumlah<<endl;

    return 0;
}
