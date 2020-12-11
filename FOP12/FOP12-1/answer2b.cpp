#include <iostream>
using namespace std;

int binarySearch(const int list[], int key, int listSize);

int main()
{ 
  const int array_size = 7;
  int my_array[array_size] = {1, 4, 7, 2, 6, 3, 5};
  int key, temp;

//Input user
cout<<endl;
cout<<"Input Bilangan yang dicari : ";
cin>>key;
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
cout << binarySearch(my_array, key, array_size) << endl;

return 0;
}

int binarySearch(const int my_array[], int key, int array_size)
{
  int low = 0;
  int high = array_size - 1;

  while (high >= low)
  {
    int mid = (low + high) / 2;
    if (key < my_array[mid])
      high = mid - 1;
    else if (key == my_array[mid])
      return mid;
    else
      low = mid + 1;
  }

  return -low - 1;
}