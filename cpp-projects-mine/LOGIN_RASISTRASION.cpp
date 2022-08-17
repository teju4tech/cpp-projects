#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
  int c;
  cout<<"\t________________________________\n";
  cout<<"\t|       welcome                 |\n";
  cout<<"\t|         To                    |\n";
  cout<<"\t|        Menu                   |\n";
  cout<<"\t|        Develp                 |\n";
  cout<<"\t|===============================|\n";
  cout<<"\t|        By  TEJU               |\n";
  cout<<"\t+-------------------------------|\n";
  cout<<"\t            |                    \n";
  cout<<"\t+-------------------------------->  \n";
  cout<<"\t| Press 1 to LOGIN                     \n";
  cout<<"\t| Press 2 to REGISTER                  \n";
  cout<<"\t| Press 3 if you forgot your PASSWORD  \n";
  cout<<"\t| Press 4 to EXIT                      \n";
  cout<<"\t+-------------------------------->  \n";
  cout<<"\t| Please enter your choice  : ";
  cin>>c;
  cout<<endl;
  
  switch (c)
  {
     case 1:
	     login();
		 break;
		 
    case 2:
	    registration();
		break;
				 	
    case 3:
    	 forgot();
    	 break;
    	
    case 4:
	    cout<<"\t*............*\n";
	    cout<<"\t|Thank you ! |\n";
		cout<<"\t+............+\n";
	    
	default:
		system("cls");
		cout<<"\t\tPlease  select frome the menu ...\n\n\n";
	    main();
			
   }	
 	
}

//login functtion  is ready
void login()
{
	int count;
	string userId, password, id, pass;
	system("cls");
	cout<<"\t+------------------------------------------->  \n";
	cout<<"\t| Please Enter the username and password: "<<endl;
	cout<<"\t+-------------------------------->  \n";
	cout<<"\t| Username: ";
	cin>>userId;
	cout<<"\t| Password: ";
	cin>>password;
	
	ifstream input("database.txt");
	
	while(input>>id>>pass)
	{
		if(id==userId && pass==password)
		{
			count=1;
			system("cls");
		}
	}
	input.close();
	
	if(count==1)
	{
		cout<<userId<<"\n Your Login is successfull\n Thanks for loging in.."<<endl;
		main();
	}
	
	else
	{
		cout<<"\nLogin Error !!! /n Please check your username and password.."<<endl;
		main();
	}
}

//Regiisstraion functionn.....

void registration()
{
	string ruserId,rpassword,rid,rpass;
	system("cls");
	cout<<"\t|==========================#";
	cout<<"\n\t|----Enter the username: ";
	cin>>ruserId;
	cout<<"\t|==========================#\n";
	cout<<"\t|----Enter the password: ";
	cin>>rpassword;
	
	ofstream f1("database.txt",ios::app);
	f1<<ruserId<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t\t Registration is successfull !  \n\n"<<endl;
	main();
}

//forgot function

void forgot()
{
	int option;
	system("cls");
	cout<<"\t\t\t You forgot the password? Don't worry ";
	cout<<"\n\t|--------------------------------------------->\n";
	cout<<"\t|Press 1 to  search your id by username "<<endl;
	cout<<"\t|Press 2 to go back to main menu ";
	cout<<"\n\t|--------------------------->\n";
	cout<<"\t| Enter your choice: ";
	cin>>option;
	switch(option)
	{
	  case 1:
	  	{
		  
	  	int count=0;
	  	string suserId,sId,spass;
		cout<<"\n\t\t\t|===================================================>\n";
	  	cout<<"\n\t\t\t|Enter the username which you remembered : ";
	  	cin>>suserId;
	  	
	  	ifstream f2("database.txt");
	  	while(f2>>sId>>spass)
	  	{
	  		if(sId==suserId)
	  		{
	  		 count=1;	
	  	    }
	  	    f2.close();
	  	    if(count==1)
	  	    {
	  	     cout<<"\n\n Your account is found !\n";
			 cout<<"\t|--------------------------------------------->\n";
			 cout<<"\t|----| Your password is: "<<spass<<"\n\n";
			 main();	
			}
			else
			{
			  cout<<"\n\t Sorry! your accont is not found ! \n"<<endl;
			  main();
			}
			break;
		}
		
		}

		case 2:
		{
			main();
		}
			
		default:
		    cout<<"\t\t\t Wrong chice ! Please try again "<<endl;
			forgot();	
		
		
	}
}



