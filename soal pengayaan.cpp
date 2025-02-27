#include <iostream>
using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int saldo_awal=5000000;
    int tahun=10;
    float bunga=0.07;
    
    cout<<"Tahun\t Saldo Awal\t Bunga\t\t Saldo Akhir"<<endl;

    for (int i = 1; i <= tahun; ++i){
        float bunga_tahun_ini=saldo_awal * bunga;
        float saldo_akhir=saldo_awal+bunga_tahun_ini;
        saldo_awal=saldo_akhir;

        cout<<i<<"\tRp "<<saldo_awal<<"\tRp "<<bunga_tahun_ini<<"\tRp "<<saldo_akhir<<endl;
    }
    return 0;
}
