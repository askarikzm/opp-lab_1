#include<iostream>
using namespace std;
class maintenance {
protected:
    string complains;
};

class space {
protected:
    int number_rooms;
    int filled;
    int empty;
};

class students {
protected:
    int students_id;
    string student_name;
    int age;
};

class inventory {
protected:
    int beds;
    int bedsheets;
    string food;
    int fans;
};
// using multi inhertence
class hms : public inventory, public students, public space, public maintenance {
public:
  // abstraction 
    void setData(int s_id, string s_name, int s_age, int rooms, int filled_rooms, int beds_available, int bedsheets_available, string food_available, int fans_available, string maintenance_complaint) {
        students_id = s_id;
        student_name = s_name;
        age = s_age;
        number_rooms = rooms;
        filled = filled_rooms;
        empty = rooms - filled_rooms;
        beds = beds_available;
        bedsheets = bedsheets_available;
        food = food_available;
        fans = fans_available;
        complains = maintenance_complaint;
    }

   
    void printData() {
        cout << "Student ID: " << students_id << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Age: " << age << endl;
        cout << "Number of Rooms: " << number_rooms << endl;
        cout << "Rooms Filled: " << filled << endl;
        cout << "Rooms Empty: " << empty << endl;
        cout << "Beds Available: " << beds << endl;
        cout << "Bedsheets Available: " << bedsheets << endl;
        cout << "Food Available: " << food << endl;
        cout << "Fans Available: " << fans << endl;
        cout << "Maintenance Complaints: " << complains << endl;
    }
};

int main() {
    hms askari;
    askari.setData(101, "aksari", 20, 50, 25, 100, 150, "Vegetarian", 50, "Water leakage in room 203");
    askari.printData();

    return 0;
}
