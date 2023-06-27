#include<iostream>          //library function specified
using namespace std;

struct date      //date structure created
 {
    int d,m,y;
 };

class hospital  //class named hospital created
 {
    char name[100];
    struct date adm;
    struct date disch;
    protected:
      int age;   //age is protected
    public:
      void getdata()  //getdata fuction to get the data
       {
          cout<<"name: ";
          cin>>name;         //name
          cout<<"age: ";
          cin>>age;       //age
          cout<<"date of admission:"<<"\n";
          cin>>adm.d>>adm.m>>adm.y;           //date of admission
          cout<<"date of discharge:"<<"\n";
          cin>>disch.d>>disch.m>>disch.y;    //date of discharge
       }
       
      void display()    //display function created to display the data
      {
         cout<<"name is: "<<name<<"\n";
         cout<<"age is: "<<age<<"\n";
         cout<<"date of admission: "<<adm.d<<"/"<<adm.m<<"/"<<adm.y<<"\n";
         cout<<"date of discharge: "<<disch.d<<"/"<<disch.m<<"/"<<disch.y<<"\n";
      }
  };
  
class pediatric:public hospital     //under pediatric class, hospital is public
 {
    char vaccine[25];  //vaccine string to get vaccine
    public:
     void get()
      {
         getdata();
         cout<<"enter the name of the vaccine:"<<"\n";
         cin>>vaccine;
      }
     void disp()
      {
         if(age<12)   //for age below 12
          {
             display();
             cout<<"\t";
             cout<<"vaccine is "<<vaccine;
             cout<< "\n";
          }
         else
          {
             cout<<"age greater than 12 is not a pediatric patient"<<"\n";  //if age>12
          }
      }
 };
 
 //main function starts
int main()
 {
   hospital h[2];
   int n;
   cout<<"no. of patients: "<<"\n";  //no of patients 
   cin>>n;
   for(int i=0;i<n;i++)
       {
          h[i].getdata();
       }
   cout<<"patient database"<<"\n";   //patient database
   for(int i=0;i<n;i++)
      {
        h[i].display();   //object h[i] called under diaplay
        cout<<"\n\n";
      };

   pediatric p[2];
   cout<<"no. of pediatric patients: "<<"\n"; //pediatric patients
   cin>>n;
   for(int i=0;i<n;i++)
       {
          p[i].get();
       }
   cout<<"pediatric patient database"<<"\n";   //database
   for(int i=0;i<n;i++)
      {
        p[i].disp();
      }
   return 0;
 }
 //end of program
