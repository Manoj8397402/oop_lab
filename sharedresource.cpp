#include<iostream>      
using namespace std;      //space is alloted by computer
 
class resource      //resource class defined
{
   static int res;
   public:              //public 
     static int get();         //static member function
     void free_res()           //free member function
     {
        res=0;
     }
};
int resource :: res;
int resource :: get()    //get() defined
{
   if(res)
   {
      return 0;                     //not available 
   }
   else
   {
      res=1;                //resource is available
      return 1;
   }
}

//main function starts
int main()
{
   resource a,b;                   //a and b are the objects of the class resource
   if (a.get())
   {
      cout<<"resource under use as object a is using it\n";   //resource used by a
   }
   if (!b.get())
   {
      cout<<"resource busy. Object b access denied\n";  //resource access denied for b
   }
   a.free_res();             //object a is free
   if(b.get())
   {
      cout<<"Resource can be used by object b\n";         //b can now access iresource
      return 0;
   }
}
//end of program
