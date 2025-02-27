#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int N;
    float jumlah;
    cout<<"Menjumlahkan Deret Pecahan Bilangan"<<endl<<endl;
    cout<<"Masukkan banyak bilangan= ";
    cin>>N;

    jumlah=0;
    for (int i=1;i<=N;i++){
        jumlah=jumlah+(float)i/(i+1);
    }
    cout<<"Jumlah Deret Bilangan Pecahan= "<<jumlah<<endl;
    
    return 0;
}