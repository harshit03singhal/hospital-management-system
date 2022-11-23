#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    string pass;

cout << "welcome administrator" << endl;
            cout << "enter password" << endl;
          label_admin:
            char ch ;
            int x=1;
            do
        {
            ch =_getch();
            if (ch != 5)
            
            {
                pass += ch;
                cout<<"*";
            }
            }while(x<6);
            
            if (pass == "surma")
            {
                cout<<"entered sucessfully"<<endl;
            }
         return 0;
            }