#include <iostream>
#include <array>
using namespace std;

//Membuat fungsi untuk penjumlahan
void Hasil(int myList[5],int sum, int ave)
{ 
  for(int i=0;i<=4;i++)
  {
    myList[5]=myList[i];
  } 
  sum=0; 
  for (int i=0;i<=4;i++)
  {
    sum=sum+myList[i];
  }
  cout<<"Hasil penjumlahan dari angka-angka tersebut yakni = "<<sum<<endl;
  
  ave=sum/5;
  cout<<"Sedangkan rata-rata nya adalah = "<<ave<<endl;
}

int main()
{
    //Mendeklarasi angka-angka dalam kelompok
    int myList[5] = {4, 7, 12, 5, 2};
    int sum, ave; 

    //Memanggil fungsi
    Hasil(myList, sum, ave);  
    return 0;
}