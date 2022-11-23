#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <conio.h>
using namespace std;
class details
{
public:
    string name;
    string fname;
    string branch;
    int year;
    int room_no;
    string address;
    int id;
};
int count = 0;
void view();
string passw()

{
    string pass;

label_admin:
    char ch;
    int x = 1;
    do
    {
        ch = _getch();
        if (ch != 5)

        {
            pass += ch;
            cout << "*";
            x++;
        }
    } while (x < 6);
    return pass;
}
int main()
{
    details student[5];
    int choice;
    while (1)
    {

        cout << "Enter your choice" << endl;
        cout << "login as: " << endl;
        cout << "1. Administrator" << endl;
        cout << "2. Student" << endl;
        cout << "3. Database manager" << endl;
        cout << "4. exit" << endl;
        cin >> choice;
        string namecheck;
        string password;
        switch (choice)
        {
        case 1:
            cout << "welcome administrator" << endl;
            cout << "enter password" << endl;
            password = passw();

            if (password == "surma")
            {

                int choice2;
                while (1)
                {
                    cout << endl;
                    cout << "select" << endl;
                    cout << "1. student's details" << endl;
                    cout << "2. room details" << endl;
                    cout << "3. attendence details" << endl;
                    cout << "4. mess details per month" << endl;
                    cout << "5. exit" << endl;
                    cin >> choice2;
                    if (choice2 == 5)
                    {
                        break;
                    }
                    switch (choice2)
                    {

                    case 1:
                        cout << "select" << endl;
                        cout << "1. view student details" << endl;
                        cout << "2. add student details" << endl;
                        int choice3;
                        cin >> choice3;
                        switch (choice3)
                        {
                        case 1:
                            view();
                            break;
                        case 2:
                            count++;

                            cout << "enter your name" << endl;
                            cin.ignore();
                            getline(cin, student[count].name);

                            cout << "enter your father's name" << endl;
                            getline(cin, student[count].fname);

                            cout << "enter your branch" << endl;
                            getline(cin, student[count].branch);

                            cout << "enter year" << endl;
                            cin >> student[count].year;

                            cout << "enter room no." << endl;
                            cin >> student[count].room_no;

                            cout << "enter your permanent address" << endl;
                            cin.ignore();
                            getline(cin, student[count].address);

                            cout << "confirm your details" << endl;
                            cout << student[count].name << endl
                                 << student[count].fname << endl
                                 << student[count].branch << endl;
                            cout << student[count].year << endl
                                 << student[count].room_no << endl
                                 << student[count].address << endl
                                 << endl;
                            int choice5;
                            cout << "1.submit" << endl;
                            cout << "2. edit" << endl;
                            cin >> choice5;
                            switch (choice5)
                            {
                            case 1:
                                cout << "submitted successfully" << endl;
                                break;
                            case 2:
                                cout << "what you want to edit" << endl;
                                string edit;
                                cin >> edit;
                                if (edit == "name")
                                {
                                    cout << "enter correct name" << endl;
                                    cin >> student[count].name;
                                    cout << "updated name is " << student[count].name << endl;
                                }
                            }
                            time_t seconds;
                            seconds = time(NULL);
                            student[count].id = (int)seconds;
                            cout << " your student id= " << student[count].id << endl;
                            break;
                        }
                        break;

                    case 2:
                        cout << "select" << endl;
                        cout << "1. view fully available rooms" << endl;
                        cout << "2. view partially filled rooms" << endl;
                        int choice4;
                        cin >> choice4;
                        switch (choice4)
                        {
                        case 1:
                            cout << "kamra no. 1,3,5,7,9 khali he re baba, tumko rhna he to bolo" << endl;
                            break;
                        case 2:
                            cout << "kamra no. 2,4,6,8,10 me ek jana phle se rhta he tumko adjust hota ho to dekhlo" << endl;
                            break;
                        }
                    case 5:
                        break;
                    }
                }
            }
            else
                cout << "wrong password" << endl;
            break;
        case 2:
            cout << "welcome student" << endl
                 << endl;
            int choice7;
            cout << "1. know your details" << endl;
            cout << "2. check your attendence" << endl;
            cout << "3. check your mess expenditure" << endl;
            cin >> choice7;
            switch (choice7)
            {

            case 1:
                cout << "enter your student id" << endl;
                long int idcheck;
                cin >> idcheck;
                for (int i = 0; i <= count; i++)
                {
                    if (idcheck == student[i].id)
                    {
                        cout << "your name is " << student[i].name << endl;
                        cout << "your father's name is " << student[i].fname << endl;
                        cout << "your branch is " << student[i].branch << endl;
                        cout << "your year is " << student[i].year << endl;
                        cout << "your room no. is " << student[i].room_no << endl;
                        cout << "your address is " << student[i].address << endl;
                    }
                }

                break;
            }
            break;
        case 3:
            cout << "welcome database manager" << endl;
            cout << "select" << endl;
            cout << "1. update the student details" << endl;
            cout << "2. update mess item expenditure" << endl;
            cout << "3. update the attendence details" << endl;

        case 4:
            system("cls");
            exit(0);
            break;
        }
    }

    return (0);
}

void view()
{
    string mydata;
    ifstream read("data.txt");
    while (getline(read, mydata))
    {
        cout << mydata << endl;
    }
    read.close();
}
