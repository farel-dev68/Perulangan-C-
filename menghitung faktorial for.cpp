#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, bil, faktorial;
    cout<<"Menentukan nilai faktorial menggunakan for"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;

    faktorial=1;
    for(int i=bil;i>=1;i--){
        faktorial=faktorial*i;
    }
    cout<<bil<<"!="<<faktorial<<endl;
    return 0;
}