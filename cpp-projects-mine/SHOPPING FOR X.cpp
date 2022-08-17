#include <iostream>
#include <fstream>
using namespace std;


//pehli class 
class shopping
{
    private:
       int pcode;
       float price;
       float dis;
       string pname;

   public:
      void menu();
      void administrator();
      void buyer();
      void edit();
      void  rem();
      void list();
      void receipt();

};

//dusri class
void shopping :: menu()
{
    int choice;
    string email;
    string password;
    
    cout<<"\t\t\t|------------------------------------|"<<endl;
    cout<<"\t\t\t|                                    |";
    cout<<"\t\t\t|                                    |";
    cout<<"\t\t\t|     TEju Super Market              |";
    cout<<"\t\t\t|                                    |";
    cout<<"\t\t\t|                                    |";
    cout<<"\t\t\t|------------------------------------|";
}




int  main()
{

}