#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i,faktorial,bil;
    cout<<"Menentukan Faktorial dengan do...while"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;

    i=bil;
    faktorial=1;
    do{
        faktorial=faktorial*i;
        i--;
    }while(i>=1);
    cout<<bil<<"!="<<faktorial<<endl;

    return 0;
}