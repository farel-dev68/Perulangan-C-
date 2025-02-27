#include <iostream>

using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;
    
    int jumlah, n, bil;
    jumlah = 0;
    float rerata;

    cout << "Menjumlahkan dan rata-rata deret angka menggunakan for" << endl;
    cout << "Masukkan banyak bilangan= ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan  bilangan ke " << i << " = ";
        cin >> bil;
        jumlah = jumlah + bil;
    }

    rerata = (float)jumlah / n;

    cout << "Jumlah deret bilangan = " << jumlah << endl;
    cout << "Rerata deret bilangan = " << rerata << endl;

    return 0;
}
