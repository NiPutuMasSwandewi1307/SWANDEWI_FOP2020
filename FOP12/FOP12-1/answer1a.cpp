#include <iostream>
using namespace std;

int main()
{
    //Deklarasi
    const int array_size = 7;
    int temp;
    int my_array[array_size] = {1, 4, 7, 2, 6, 3, 5};

    //Sorting - Descending ORDER
    for (int i=0; i<array_size; i++)
    {
        for (int j=i+1; j<array_size; j++)
        {   
            if (my_array[i] < my_array[j])
            {
                temp = my_array[i];
                my_array[i]= my_array[j];
                my_array[j] = temp;
            }
            
        }
    }

    //Output 
    for (int i=0; i<array_size; i++)
    {
        cout<<my_array[i]<<endl;
    }
    return 0;
}