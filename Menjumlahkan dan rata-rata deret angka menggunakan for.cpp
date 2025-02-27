#include <iostream>

using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;
    
    int jumlah;
    jumlah = 0;
    float rerata;

    cout << "Menjumlahkan dan rata-rata deret angka menggunakan for" << endl;

    for (int i = 1; i <= 10; i++) {
        jumlah = jumlah + i;
    }

    rerata = (float)jumlah / 10;

    cout << "Jumlah deret bilangan = " << jumlah << endl;
    cout << "Rerata deret bilangan = " << rerata << endl;

    return 0;
}
