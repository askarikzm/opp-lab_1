// The LMS will handle tasks such as book cataloging,
//  user registration, borrowing and returning books, 
//  and generating reports.
#include<iostream>
using namespace std;
class libaray{
    private:
    string book;
    string categeory;
    int book_id;
    string issue_date;
    string return_date;
    int price;
    public:
  void add_data(){
    cout<<"enter book name"<<endl;
    cin>>book;
    cout<<"enter categeroy"<<endl;
    cin>>categeory;
    cout<<"enter book id "<<endl;
    cin>>book_id;
    cout<<"enter issue date"<<endl;
    cin>>issue_date;
    cout<<"enter return date"<<endl;
    cin>>return_date;
    cout<<"enter the price of books";
    cin>>price;
  }
void printData(){
    cout<<"book name is\t"<<book<<endl;
    cout<<"category of book is \t"<<categeory<<endl;
    cout<<"book issue date\t"<<issue_date<<endl;
    cout<<"book return date"<<return_date;
    cout<<"book price is"<<price;
}



};
int main()
{
    libaray book1;
    book1.add_data();
    book1.printData();
    
    return 0;
}