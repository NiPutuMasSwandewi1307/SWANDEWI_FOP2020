#include <iostream>
    using namespace std;
    int A[100];
    int masukan (int n)  //parameter untuk memasukan data
    {
        int i;
        for (i = 0; i < n; i++)  //struktur perulangan u/ memasukan data ke array
        {
            cout << "Masukan bilangan ke " << i + 1 << " : ";
            cin >> A[i];
        }
    }
    int hasil (int n)  //parameter proses dan hasil
    {
        int i, max, min;
        max = A[0];
        //  proses perulangan untuk mencari nilai terbesar dan terkecil
        for (i = 0; i < n; i++)
        {
            if (max < A[i])  //pemilihan nilai terbesar
            {
                max = A[i];
            }
            else if (min > A[i])  //pemilihan nilai terbesar
            {
                min = A[i];
            }
        }
        //menampilkan hasil
        cout << "\nNilai terbesar adalah : " << max << endl;
        cout << "Nilai terkecil adalah : " << min << endl;
    }
    int main()
    {
        int n;
        cout << "Masukan Jumlah Data : ";
        cin >> n;  //memasukan jumlah nilai yang akan dimasukan
        masukan (n);  //pemangilan fungsi inputan data
        hasil (n);  //pemanggilan fungsi proses dan hasil
    }