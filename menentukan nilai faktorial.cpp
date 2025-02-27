#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, bil, faktorial;
    cout<<"Menentukan nilai faktorial"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;

    faktorial=1;
    i=bil;
    while (i>=1){
        faktorial=faktorial*i;
        i--;
    }
    cout<<bil<<"!="<<faktorial<<endl;
    return 0;
}