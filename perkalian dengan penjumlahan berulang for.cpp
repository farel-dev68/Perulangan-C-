#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, bil, pengali, hasil;
    cout<<"Perkalian dengan penjumlahan berulang menggunakan for"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;
    cout<<"Masukkan bilangan pengali= ";
    cin>>pengali;

    hasil=0;
    for(int i=1; i<=pengali; i++){
        hasil=hasil+bil;
    }
    cout<<"Hasil perkalian "<<bil<<"x"<<pengali<<"="<<hasil<<endl;

    return 0;
}