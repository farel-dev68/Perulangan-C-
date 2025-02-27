#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int bil,jml_faktor;
    jml_faktor=0;
    cout<<"Menentukan Bilangan Prima"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;

    for (int i=1;i<=bil;i++){
        if (bil%i==0){
            jml_faktor++;
        }
    }

    if(jml_faktor==2){
        cout<<bil<<" Bilangan Prima"<<endl;
    } else{
        cout<<bil<<" Bukan Bilangan Prima"<<endl;
    }
    return 0;
}