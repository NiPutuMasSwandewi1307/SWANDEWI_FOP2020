#include <iostream>
using namespace std;

int main()
{

//Deklarasi
const int array_size = 7;
int temp, cari, ketemu;
int my_array[array_size] = {1, 4, 7, 2, 6, 3, 5};

//Input user
cout<<endl;
cout<<"Input Bilangan yang dicari : ";
cin>>cari;
cout<<"--------------------------"<<endl;
cout<<endl;
  
//Sorting - Ascending ORDER
for (int i=0; i<array_size; i++)
{
    for (int j=i+1; j<array_size; j++)
    {   
        if (my_array[i] > my_array[j])
        {
            temp = my_array[i];
            my_array[i]= my_array[j];
            my_array[j] = temp;
        }
   
    }
}

//Output for Ascending ORDER
for (int i=0; i<array_size; i++)
{
    cout<<my_array[i]<<" ";
}

cout<<"\n-----LINEAR SEARCH-----"<<endl;

//Find the Number & Index of Number use Linear Search
for(int i=0; i<=array_size; i++)
{
    if (my_array[i]==cari)
    {
	ketemu=1;
	cout<<"\nData Ditemukan Pada Indeks Ke-"<<i;
	}
}

if (ketemu==0)
{
	cout<<"\nData tidak ditemukan";
}

return 0;
}