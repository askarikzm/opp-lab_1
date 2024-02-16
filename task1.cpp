// patient registration, appointment scheduling, medical record management, billing, and inventory control.
#include<iostream>
using namespace std;
struct hospital{
    string patient_name;
    int regestration_id;
    string appionment;
    string medical_record;
    int billing;
    
};
struct inventory{
    int no_medicene;
    string name_of_medicene;
    string type_of_medicene;
    int price_of_medicene;
};
void add_data(hospital s1[],int x){
for (int i = 0; i < x; i++)
{   
cout<<"enter the nmae of patient"<<endl;
cin>>s1[i].patient_name;
cout<<"enter the regiestration id of pateint"<<endl;
cin>>s1[i].regestration_id;
cout<<"enter the appiontment time"<<endl;
cin>>s1[i].appionment;
cout<<"enter the medical record"<<endl;
cin>>s1[i].medical_record;
}}
void add_inventery(inventory s1[],int k){
for(int i=0;i<k;i++)
{

cout<<"NOW enter inventery details"<<endl;
cout<<"enter the name of medicene"<<endl;
cin>>s1[i].name_of_medicene;
cout<<"enter number of medicene"<<endl;
cin>>s1[i].no_medicene;
cout<<"enter type of medicene"<<endl;
cin>>s1[i].type_of_medicene;
cout<<"enter price of medicene"<<endl;
cin>>s1[i].price_of_medicene;
}
}
void showdata_patient(hospital s2[],int reg,int x){
int l=-1;
for(int i=0;i<x;i++)
{
    if (s2[i].regestration_id==reg)
    {
      l=i; 
      break;
    }
}
if (l!=-1)
{
cout<<"name of patient=\t"<<s2[l].patient_name<<endl;
cout<<"regestartion id of patient=\t"<<s2[l].regestration_id<<endl;
cout<<"appiontment time of paitent=\t"<<s2[l].appionment<<endl;
cout<<"medical record of patient=\t"<<s2[l].medical_record<<endl;
cout<<"bill of patient is=\t"<<s2[l].billing<<endl;
}
else{
    cout<<"patient not found"<<endl;
}
}
void showdata_invent(inventory s2[],string name,int j){
    int v=-1;
    for(int i=0;i<j;i++)
    { 
        if(name==s2[i].name_of_medicene)
        {  v=i;
            break;
        }

    }
    if(v!=-1)
    {
    cout<<"inventery of hospital pharmacy"<<endl;
    cout<<"name of medicene is=\t"<<s2[v].name_of_medicene<<endl;
    cout<<"type of medicene=\t"<<s2[v].type_of_medicene<<endl;
    cout<<"price of medicene=\t"<<s2[v].price_of_medicene<<endl;
    cout<<"number of medicene=\t"<<s2[v].no_medicene<<endl;
    }
    else{
        cout<<"not found";
    }
}
int main()
{
    int x,k,z;
    string no;
    cout<<"HOSPITAL MANGEMENT SYSYTEM"<<endl;
    cout<<"enter number of patient to add in our database"<<endl;
    cin>>x;
    hospital data[x];
    add_data(data,x);
    cout<<"enter reg id of patient to find record "<<endl;
    cin>>k;
    showdata_patient(data,k,x);
    cout<<"enter the number of medicene you want to add in inventeory"<<endl;
    cin>>z;
    inventory indata[z];
    add_inventery(indata,z);
    cout<<"enter name name of mediciene to find it"<<endl;
    cin>>no;
    showdata_invent(indata,no,z);
    return 0;
}