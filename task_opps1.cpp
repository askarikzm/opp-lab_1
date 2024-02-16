#include<iostream>
using namespace std;

class hospital{
    private:
    string patient_name;
    int regestration_id;
    string appionment;
    string medical_record;
    int billing;
public:
void add_data(){ 
cout<<"enter the nmae of patient"<<endl;
cin>>patient_name;
cout<<"enter the regiestration id of pateint"<<endl;
cin>>regestration_id;
cout<<"enter the appiontment time"<<endl;
cin>>appionment;
cout<<"enter the medical record"<<endl;
cin>>medical_record;
}
void showdata_patient(int reg){
int l=-1;

    if (regestration_id==reg)
    {
      l=1; 
    }

if (l!=-1)
{
cout<<"name of patient=\t"<<patient_name<<endl;
cout<<"regestartion id of patient=\t"<<regestration_id<<endl;
cout<<"appiontment time of paitent=\t"<<appionment<<endl;
cout<<"medical record of patient=\t"<<medical_record<<endl;
cout<<"bill of patient is=\t"<<billing<<endl;
}
else{
    cout<<"patient not found"<<endl;
}
}
};
class inventeory:public hospital{
    private:
    int no_medicene;
    string name_of_medicene;
    string type_of_medicene;
    int price_of_medicene;
    public:
    void add_inventery(){

cout<<"NOW enter inventery details"<<endl;
cout<<"enter the name of medicene"<<endl;
cin>>name_of_medicene;
cout<<"enter number of medicene"<<endl;
cin>>no_medicene;
cout<<"enter type of medicene"<<endl;
cin>>type_of_medicene;
cout<<"enter price of medicene"<<endl;
cin>>price_of_medicene;
}
void showdata_invent(string name){
    int v=-1;
        if(name==name_of_medicene)
        {  v=1;   
        }

    if(v!=-1)
    {
    cout<<"inventery of hospital pharmacy"<<endl;
    cout<<"name of medicene is=\t"<<name_of_medicene<<endl;
    cout<<"type of medicene=\t"<<type_of_medicene<<endl;
    cout<<"price of medicene=\t"<<price_of_medicene<<endl;
    cout<<"number of medicene=\t"<<no_medicene<<endl;
    }
    else{
        cout<<"not found";
    }
}
};
int main()
{
    inventeory s1;
    s1.add_data();
    s1.showdata_patient(232386);
    s1.add_inventery();
    s1.showdata_invent("panadol");
    return 0;
}