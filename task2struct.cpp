#include <iostream>
using namespace std;

struct maintenance
{
    string complains;
};

struct space
{
    int number_rooms;
    int filled;
    int empty;
};

struct students
{
    int students_id;
    string student_name;
    int age;
};

struct inventory
{
    int beds;
    int bedsheets;
    string food;
    int fans;
};

struct hms
{
    students student_data;
    space space_data;
    inventory inventory_data;
    maintenance maintenance_data;
};

void setData(hms &hostel, int s_id, string s_name, int s_age, int rooms, int filled_rooms, int beds_available, int bedsheets_available, string food_available, int fans_available, string maintenance_complaint)
{
    hostel.student_data.students_id = s_id;
    hostel.student_data.student_name = s_name;
    hostel.student_data.age = s_age;
    hostel.space_data.number_rooms = rooms;
    hostel.space_data.filled = filled_rooms;
    hostel.space_data.empty = rooms - filled_rooms;
    hostel.inventory_data.beds = beds_available;
    hostel.inventory_data.bedsheets = bedsheets_available;
    hostel.inventory_data.food = food_available;
    hostel.inventory_data.fans = fans_available;
    hostel.maintenance_data.complains = maintenance_complaint;
}

void printData(const hms &hostel)
{
    cout << "Student ID: " << hostel.student_data.students_id << endl;
    cout << "Student Name: " << hostel.student_data.student_name << endl;
    cout << "Age: " << hostel.student_data.age << endl;
    cout << "Number of Rooms: " << hostel.space_data.number_rooms << endl;
    cout << "Rooms Filled: " << hostel.space_data.filled << endl;
    cout << "Rooms Empty: " << hostel.space_data.empty << endl;
    cout << "Beds Available: " << hostel.inventory_data.beds << endl;
    cout << "Bedsheets Available: " << hostel.inventory_data.bedsheets << endl;
    cout << "Food Available: " << hostel.inventory_data.food << endl;
    cout << "Fans Available: " << hostel.inventory_data.fans << endl;
    cout << "Maintenance Complaints: " << hostel.maintenance_data.complains << endl;
}

int main()
{
    hms askari;
 setData(askari, 101, "aksari", 20, 50, 25, 100, 150, "Vegetarian", 50, "Water leakage in room 203");
    printData(askari);

    return 0;
}
