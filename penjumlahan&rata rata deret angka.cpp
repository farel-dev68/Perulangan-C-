#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;
    
    int i, N, bilangan;
    float jumlah, rerata;

    cout << "Penjumlahan dan rata-rata deret angka" << endl;
    cout << "Masukkan banyaknya bilangan= ";
    cin >> N;

    i = 1;
    jumlah = 0;

    do {
        cout << "Masukkan bilangan ke " << i << "= ";
        cin >> bilangan;
        jumlah = jumlah + bilangan;
        i++;
    } while(i <= N);

    rerata = (float)jumlah / N;

    cout << "Jumlah deret bilangan tersebut= " << jumlah << endl;
    cout << "Rata-rata deret bilangan= " << rerata << endl;

    return 0;
}
