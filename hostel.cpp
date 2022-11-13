#include<iostream>
#include<string>
#include<ctime>
#include<fstream>
using namespace std;
void view();
void add();
int main()
{
    
    int choice;
    cout<<"Enter your choice"<<endl;
    cout<<"login as: "<<endl;
    cout<<"1. Administrator"<<endl;
    cout<<"2. Student"<<endl;
    cout<<"3. Database manager"<<endl;
    cin>>choice;
    string namecheck;
    switch(choice)
    {
        case 1: cout<<"welcome administrator"<<endl;
        int choice2;
        cout<<"select"<<endl;
        cout<<"1. student's details"<<endl;
        cout<<"2. room details"<<endl;
        cout<<"3. attendence details"<<endl;
        cout<<"4. mess details per month"<<endl;
        cin>>choice2;
        switch(choice2)
        {
            case 1 : cout<<"select"<<endl;
            cout<<"1. view student details"<<endl;
            cout<<"2. add student details"<<endl;
            int choice3;
            cin>>choice3;
            switch(choice3)
            {
                case 1: view();
                break;
                case 2: add();
                break;
            }
            break;
            case 2: cout<<"select"<<endl;
            cout<<"1. view fully available rooms"<<endl;
            cout<<"2. view partially filled rooms"<<endl;
            int choice4;
            cin>>choice4;
            switch(choice4)
            {
                case 1: cout<<"kamra no. 1,3,5,7,9 khali he re baba, tumko rhna he to bolo"<<endl;
                break;
                case 2: cout<<"kamra no. 2,4,6,8,10 me ek jana phle se rhta he tumko adjust hota ho to dekhlo"<<endl;
                break;
            }
        }
        break;
        case 2: cout<<"welcome student"<<endl;
        cout<<"enter your name"<<endl;
        cin.ignore();
        getline(cin,namecheck);
        cout<<"enter your student id"<<endl;
        long int idcheck;
          cin>>idcheck;
        cout<<"your name is "<<namecheck<<endl;
        cout<<"your id no is "<<idcheck<<endl;
                break;
        case 3: cout<<"welcome database manager"<<endl;
    break;
    }
    return(0);
}
void view()
{
    string mydata;
    ifstream read("data.txt");
    while(getline(read,mydata))
    {
        cout<<mydata<<endl;
    }
    read.close();
}
void add()
{
    

     cout<<"enter your name"<<endl;
     string naam;
    cin.ignore();
    getline(cin,naam);
    string fname;
    cout<<"enter your father's name"<<endl;
    
    getline(cin,fname);
    cout<<"enter your branch"<<endl;
    string branch;
     getline(cin,branch);
    cout<<"enter year"<<endl;
    int year;
    cin>>year;
    cout<<"enter room no."<<endl;
    int room_no;
    cin>>room_no;
    cout<<"enter your permanent address"<<endl;
    string address;
    cin.ignore();
     getline(cin,address);
    cout<<"confirm your details"<<endl;
    cout<<naam<<endl<<fname<<endl<<branch<<endl<<year<<endl<<room_no<<endl<<address<<endl;
 time_t seconds;
    seconds=time(NULL);

    cout<<" your student id= "<<seconds<<endl;
}
