#include <iostream>
using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, jumlah, n, bilangan;
    float rerata;
    cout << "Menjumlahkan deret bilangan dengan while" << endl << endl;
    cout << "Masukkan banyak bilangan= ";
    cin >> n;

    i = 1;
    jumlah = 0;
    while (i <= n) {
        cout << "Masukkan bilangan ke " << i << " = ";
        cin >> bilangan;
        jumlah+=bilangan;
        i++;
    }
    rerata=(float)jumlah/n;
    cout << "Jumlah deret bilangan = " << jumlah << endl;
    cout << "Rata-rata deret bilangan = " << rerata << endl;

    return 0;
}
