#include <iostream>
#include <cstdlib>
using namespace std;

class user
{
protected:
    string name;
    int user_id;
    string password, attach_file;

public:
    void sigup()
    {
        cout << "enter your user name" << endl;
        cin >> name;
        // Generate random number according to pc time
        int x = rand() % 10000 + 1;
        user_id = x;
        cout << "your user id is :\t" << user_id << endl;
        cout << "enter your password " << endl;
        cin >> password;
        cout << "enter the path of your file to attach in database" << endl;
        cin >> attach_file;
        bool flag = sigin(name, password, user_id);
        if (flag == true)
        {
            cout << "saccount created successfully" << endl;
        }
        else
        {
            cout << "your account already exist" << endl;
        }
    }

    bool sigin(string name_user, string user_password, int id)
    {
        if (name == name_user && user_password == password && user_id == id)
        {
            cout << "access granted successfully" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }

protected:
    void getdetails()
    {
        cout << "user name is: " << name << endl;
        cout << "user id is: " << user_id << endl;
        cout << "user password is: " << password << endl;
    }

    void change_details()
    {
        int op;
        bool flag=true;
        while(flag)
        {
        cout << "press 1 to change name \n press 2 to change password \n press 3 to change id\n press 4 to go back"  << endl;
        cin >> op;
        if (op >= 1 && op <= 4)
        {
            if (op == 1)
            {
                string n1;
                cout << "enter new name" << endl;
                cin >> n1;
                user::name = n1;
            }
            else if (op == 2)
            {
                string p1;
                cout << "enter new password" << endl;
                cin >> p1;
                user::password = p1;
            }
            else if (op == 3)
            {
                int id1;
                cout << "enter new id" << endl;
                cin >> id1;
                user::user_id = id1;
            }
            else if(op==4){
                cout<<"successfully go back"<<endl;
                flag=false;
            }
        }
        else
        {
            cout << "wrong input" << endl;
        }
        }
    }
};

class storage : public user
{
public:
    string no, pass;
    int pa_id;

    void details()
    {
        cout << "enter your user name:" << endl;
        cin >> no;
        cout << "enter your password" << endl;
        cin >> pass;
        cout << "enter your user id" << endl;
        cin >> pa_id;
    }

    void show_data()
    {
        bool flag = sigin(no, pass, pa_id);
        if (flag)
        {
            cout << "your attached file is: " << attach_file << endl;
        }
        else
        {
            cout << "you are not eligible to access the file" << endl;
        }
    }

protected:
    void see()
    {
        cout << "your attached file is " << attach_file << endl;
        cout << "storage of current database '50mb' " << endl;
    }
};

class admin : public storage
{
protected:
    string user_name_a;
    string password_a;
    int id;

public:
    admin()
    { // class constructer
        user_name_a = "askari";
        password_a = "pakistan";
        id = 232386;
    }
    void show_data()
    {
        string no, pa;
        int z;
        cout << "enter your admin user name" << endl;
        cin >> no;
        cout << "enter your password" << endl;
        cin >> pa;
        cout << "enter your id" << endl;
        cin >> z;
        if (no == user_name_a && pa == password_a && id == z)
        {
            bool flag=true;
            while(flag){
            int op;
            cout << "access granted as an 'admin' of database" << endl;
            cout << "press 1 to see details of user " << endl;
            cout << "press 2 to change details" << endl;
            cout << "press 3 to see the database attach file " << endl;
            cout << "press 4 to end session" << endl;
            cin >> op;
            if (op >= 1 && op <= 4)
            {
                switch (op)
                {
                case 1:
                    getdetails();
                    break;

                case 2:
                    change_details();
                    break;

                case 3:
                    storage::see();
                    break;

                case 4:
                    cout << "session ended" << endl;
                    flag=false;
                    break;

                default:
                    cout << "wrong input" << endl;
                    break;
                }
            }
            else
            {
                cout << "wrong input" << endl;
            }
            }
        }
        else
        {
            cout << "wrong cridentails" << endl;
        }
    }
};

class IMS : public admin
{
public:
    void accessClasses()
    {
        int choice;
        bool flag = true;
        while (true)
        {
            cout << "Press 1 for User, 2 for Admin, 3 for Storage:,4 end ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                user::sigup();
                break;
            case 2:
                admin::show_data();
                break;
            case 3:
                storage::details();
                storage::show_data();
                break;
            case 4:
                exit(0);
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
};

int main()
{
    IMS ims;
    ims.accessClasses();
    return 0;
}
