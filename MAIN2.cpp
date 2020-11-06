#include <iostream>
using namespace std;

int main (){
  int a=1;
  int b=2;
  int n,baris;
  long deret;
  
  //Pembuka
  cout<<"Hallo !! Selamat datang\n"
  "Berapa suku pertama yang ini anda hitung ? :";
  cin>>n;

  //Rumus menentukan Deret
  for (n=1;n>=1; deret+=baris) {
    baris = a+(n-1)*b;
    }
    


  //Hasil
  cout<<"Baris Aritmatika : "<<baris<<endl;
  cout<<"Jumlah Deret Atimatika = "<<deret<<endl;

  return 0;
}
