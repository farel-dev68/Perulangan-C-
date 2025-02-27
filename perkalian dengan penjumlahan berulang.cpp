#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, bil, pengali, hasil;
    cout<<"Perkalian dengan penjumlahan berulang"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;
    cout<<"Masukkan bilangan pengali= ";
    cin>>pengali;

    i=1;
    hasil=0;
    while (i<=pengali){
        hasil=hasil+bil;
        i++;
    }
    cout<<"Hasil perkalian "<<bil<<"x"<<pengali<<"="<<hasil<<endl;
    return 0;
}