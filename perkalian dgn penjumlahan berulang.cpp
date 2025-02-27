#include <iostream>
using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;
    
    int i, bil, bil_pengali;
    float hasil;

    cout << "Perkalian dengan penjumlahan berulang" << endl;
    cout << "Masukkan bilangan= ";
    cin >> bil;
    cout << "Masukkan bilangan pengali= ";
    cin >> bil_pengali;

    i = 1;
    hasil = 0;

    do {
        hasil = hasil + bil;
        i++;
    } while (i <= bil_pengali);

    cout << "Hasil kali antara " << bil << " x " << bil_pengali << " = " << hasil << endl;

    return 0;
}
