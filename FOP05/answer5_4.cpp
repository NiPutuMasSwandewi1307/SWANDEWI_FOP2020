#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int balance = 500,pilihan, n_deposite, n_withdraw;
    char status;
    menu : 
    cout<<endl;
    cout<<"Welcome to the simple ATM\n";
    cout<<"Welcome to the Menu\n";
    cout<<"1. Check your saldo\n";
    cout<<"2. Deposit\n";
    cout<<"3. Withdraw\n";
    cout<<"4.Keluar\n";
    cout<<"^^^^^Choose your desicion^^^^^\n";
    cin>>pilihan;
    system ("cls");

    switch (pilihan){
        case 1:
            do{
                cout<<"Saldo anda sebesar "<<balance<<endl;
                cout<<"Anda ingin kembali ke menu (y/t)";
                cin>>status;} while (status==t);
                system ("cls");
                goto menu;
            break
            }

        case 2:
            do{
                cout<<"Saldo anda sekarang berjumlah "<<balance<<endl;
                cout<<"Masukan jumlah uang yang ingin di deposit : \n";
                cin>>n_deposite;
                
                balance = balance + n_deposite;

                cout<<"Saldo anda sekarang berjumlah "<<balance<<endl;
                cout<<"Ingi kembali ke menu (y/t)";
                cin>>status;} while (status==t);
                system ("cls");
                goto menu;
            }
        
        case 3:
            do{
                cout<<"Saldo anda sekarang berjumlah "<<balance<<endl;
                cout<<"Masukan jumlah uang yang ingin di tarik : \n";
                cin>>n_withdraw;
                
                balance = balance + n_withdraw;

                cout<<"Saldo anda sekarang berjumlah "<<balance<<endl;
                cout<<"Ingi kembali ke menu (y/t)";
                cin>>status;} while (status==t);
                system ("cls");
                goto menu;
            }
        
        case 4:
            cout<<"Terima kasih telah datang :)\n";
            system("cls");
            return 0;
    }


}