#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;


int main()
{    int pin; int choice;int amount=0; int withdraw;int deposit; int exit;int correct_pin=5420;string email;
    cout<<"Welcome to ATM \n Please enter pincode.";
    cin>>pin;
    while(pin!=correct_pin)
    {cout<<"Enter pin again: ";
        cin>>pin;
        if(pin!=correct_pin)
            {cout<<"Forgot Pin? Set New pin \n";
            cout<<"Enter your email adress \n";
            cin>>email;
        cout<<"**** \n Your New PIN has been emailed to you ";
        cin>>correct_pin;}
        }

        cout<<" *****Introducing to you , The latesT, The best, ATM Service***** \n";
        cout<<"1- Check Balance \n";
        cout<<"2- Withdraw amount \n";
        cout<<"3- Deposit amount \n";
        cout<<"4- Contact helpline \n";
        cout<<"5- Inject virus and destroy machine \n";
        cout<<"6- Quit \n";
        cout<<"Enter your choice: \n";
        do{cin>>choice;

                switch(choice)
        {
            case 1:
                cout<< "Your BALANCE is "<<amount<<" RS \n";
                break;
            case 2:
                cout<< "How much amount would you like to Withdraw? --> \n";
                cin>>withdraw;
                if(withdraw>amount)
                {
                    cout<<"Sorry you dont have that much amount buddy \n Get Rich \n";
                }
                else{
                amount=amount-withdraw;}
                break;
            case 3:
                cout<<"How much amount would you like to Deposit? --> \n";
                cin>>deposit;
                if(deposit%10!=0)
                cout<<"Sorry only in multiples of 10!/n Just kidding. \n";
                amount=amount+deposit;
                cout<<"***Amount "<<deposit<<"Deposited*** \n";
                break;
            case 4:
                cout<<"Helpline is down right now. Good luck";
                break;
            case 5:
                cout<<"Virus loading........";
                while(GetAsyncKeyState(VK_UP)==false)
                {
    cout<<"⢀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⣠⣤⣶⣶";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⢰⣿⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⣀⣾⣿⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⡏⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⠀⠀⠀⠈⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠙⠿⠿⠿⠻⠿⠿⠟⠿⠛⠉⠀⠀⠀⠀⠀⣸⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣴⣿⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⢰⣹⡆⠀⠀⠀⠀⠀⠀⣭⣷⠀⠀⠀⠸⣿⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠈⠉⠀⠀⠤⠄⠀⠀⠀⠉⠁⠀⠀⠀⠀⢿⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⢾⣿⣷⠀⠀⠀⠀⡠⠤⢄⠀⠀⠀⠠⣿⣿⣷⠀⢸⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⡀⠉⠀⠀⠀⠀⠀⢄⠀⢀⠀⠀⠀⠀⠉⠉⠁⠀⠀⣿⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿";
cout<<"/n⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿";

                }





        }
}
