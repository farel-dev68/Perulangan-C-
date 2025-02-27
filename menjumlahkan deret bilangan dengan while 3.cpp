    #include <iostream>
    using namespace std;

    int main() {
        cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
        cout<<"24051030107"<<endl<<endl;

        int i, jumlah;
        float rerata;
        cout << "Menjumlahkan deret bilangan dengan while" << endl << endl;
        
        i = 1;
        jumlah = 0;
        while (i <= 10) {
            cout << "Deret ke " << i << " = " << i << endl;
            jumlah+=i;
            i++;
        }
        rerata=(float)jumlah/10;
        cout << "Jumlah deret bilangan = " << jumlah << endl;
        cout << "Rata-rata deret bilangan = " << rerata << endl;
        return 0;
    }
