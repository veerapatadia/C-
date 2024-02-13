#include<iostream>
using namespace std;

class Employe {
public:
    string pass, name, contact, email;
    int id, accnumber, balance, transction[];

    void setemploye(int id, string pass, string name, int accnumber, int balance, string contact, string email) {
        this->id = id;
        this->pass = pass;
        this->name = name;
        this->accnumber = accnumber;
        this->balance = balance;
        this->contact = contact;
        this->email = email;
    }

    void getdata() {
        cout << "\tId = " << this->id << endl << endl << endl;
        cout << "\tName \t= " << this->name << endl << endl << endl;
        cout << "\tAccout Number \t= " << this->accnumber << endl << endl << endl;
        cout << "\tAccout Balance \t= "<< this->balance << endl << endl << endl;
        cout << "\tContact Number \t= " << this->contact << endl << endl << endl;
        cout << "\tEmail \t= " << this->email << endl << endl << endl;
    }

    int getbalance() {
        return this->balance;
    }

    int getid() {
        return this->id;
    }

    string getpass() {
        return this->pass;
    }
};

int main() {
    int firstswitch, i, id, rep, secondtswitch, amount, amount2;
    string pass;

    Employe e[3];

    e[0].setemploye(4457, "shyam1111", "shyampatel", 01, 20000, "7894561230", "shyam@gmail.com");
    e[1].setemploye(1457, "het11", "ramjibhau", 02, 20000, "9764318520", "ramji@gmail.com");
    e[2].setemploye(7012, "yash22", "ramakant", 03, 20000, "9173824650", "rk@gmail.com");

    cout << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t Hello Visitor\t\t\t\t\t\t\t"<<endl;

    system("pause");
    system("CLS");

    cout << endl << endl << endl << endl;
    cout << "\t\t\t\t\t<------------------Press 1 for login account------------------>"
         << endl << endl << "\t\t\t\t\t<------------------Press 2 for create id------------------> " << endl << endl;

    cout << endl << endl << endl;

    cout << "\t\t\t\t\t\t\tEnter the choice =";
    cin >> firstswitch;

    system("pause");
    system("CLS");
    switch (firstswitch) {
        case 1:
            cout << endl << endl << endl << endl;
            cout << "\t\t\t\t\t\t\tEnter the Userid=";
            cin >> id;

            cout << endl << endl << endl << endl;
            cout << "\t\t\t\t\t\t\tEnter the Password= ";
            cin >> pass;
            cout << endl << endl << endl << endl;

            for (i = 0; i < 3; i++) {
                if (e[i].getid() == id && e[i].getpass() == pass) {
                    cout << "\t\t\t\t\t<------------------login successfully------------------>" << endl << endl << endl;
                }
            }

            system("pause");
            system("CLS");

            cout << endl << endl << endl << endl;
            cout << "\t\t\t\t\t<-------------------------------------------------------->" << endl;

            cout << "\t\t\t\t\t<------------------What you want to do------------------->" << endl;

            cout << "\t\t\t\t\t<-------------------------------------------------------->" << endl;
            cout << endl << endl << endl << endl;

            cout << "\t\t\t\t\t<------------------Press 1 for Account details------------------>" << endl << endl;
            cout << "\t\t\t\t\t<-------------------Press 2 for cash deposit------------------->" << endl << endl;
            cout << "\t\t\t\t\t<----------------------Press 3 for Exit------------------------>" << endl << endl;

            cout << "\t\t\t\t\t\tEnter your choice= ";
            cin >> secondtswitch;

            switch (secondtswitch) {
                case 1:
                    system("CLS");
                    for (i = 0; i < 3; i++) {
                        if (e[i].getid() == id && e[i].getpass() == pass) {
                            e[i].getdata();
                        }
                    }
                    break;

                case 2:
                    cout << "\t\t\t\t\t\tEnter the amount = ";
                    cin >> amount;

                    for (i = 0; i < 3; i++) {
                        if (e[i].getid() == id && e[i].getpass() == pass) {
                            cout << " == " << (e[i].getbalance() + amount);
                        }
                    }
                    break;

                case 3:
                    break;
            }
            break;

        case 2:

            cout << endl << endl << endl << endl;

            cout << "\t\t\t\t<-------------------------------------------------------->" << endl;

            cout << endl << endl << endl << endl;

            cout << "\t\t\t\t<---------------------Not Done Yet--------------------->" << endl;

            cout << endl << endl << endl << endl;

            cout << "\t\t\t\t<-------------------------------------------------------->";
            break;

        default:
            cout << "\t\t\t\t\t\twrong choice";
    }

    return 0;
}
