#include <iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	
	
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
	
	//Food items
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
	
	//total price
	int Total_rooms=0, Total_pasta=0,Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;
	
	
	cout<<"\n\t Quantity of items we have..";
	cout<<"\n Rooms avalible: ";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta: ";
	cin>>Qpasta;
	cout<<"\n Quantity of Burger: ";
	cin>>Qburger;
	cout<<"\n Quantity of Noodles: ";
	cin>>Qnoodles;
	cout<<"\n Quantity of Shake: ";
	cin>>Qshake;
	cout<<"\n Quantity of Chicken-Roll: ";
	cin>>Qchicken;
	//ye m transffer ksrr deta h conttrol
	m:
	cout<<"\n\t\t\t Please select from the menu options";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken-roll";
	cout<<"\n7) Information regarding sales and collection ";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please Enter your Choice !";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			
			cin>>quant;
			if(Qrooms-Srooms >=quant)
			{
				Srooms-Srooms+quant;
				Total_rooms = Total_rooms+quant*7000;
				cout<<"\n\n\t\t"<<quant<<"Room\rooms have been alloted to you !";
			}
			else
			
				cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remain in hotel";
				break;
				
		
		case 2:
			cout<<"\n\n Enter Pasta Quantity: ";
			cin>>quant;
			if(Qpasta-Spasta >=quant)
			{
				Spasta-Spasta+quant;
				Total_pasta = Total_pasta+quant*500;
				cout<<"\n\n\t\t"<<quant<<"Pasta is the order !";
			}
			else
			
				cout<<"\n\tOnly "<<Qpasta-Spasta<<"  Pasta remain in hotel";
				break;
				
	     
		case 3:
			cout<<"\n\n Enter Burger Quantity: ";
			cin>>quant;
			if(Qburger-Sburger >=quant)
			{
				Sburger-Sburger+quant;
				Total_burger = Total_burger+quant*100;
				cout<<"\n\n\t\t"<<quant<<"Burger is the order !";
			}
			else
			
				cout<<"\n\tOnly "<<Qburger-Sburger<<"Burger remain in hotel";
				break;
		
		
		case 4:
			cout<<"\n\n Enter Noodles Quantity: ";
			cin>>quant;
			if(Qnoodles-Snoodles >=quant)
			{
				Snoodles-Snoodles+quant;
				Total_noodles = Total_noodles+quant*399;
				cout<<"\n\n\t\t"<<quant<<"Noodles is the order !";
			}
			else
			
				cout<<"\n\tOnly "<<Qpasta-Spasta<<"Noodles remain in hotel";
				break;
				
				
	    case 5:
			cout<<"\n\n Enter Shack Quantity: ";
			cin>>quant;
			if(Qshake-Sshake >=quant)
			{
				Sshake-Sshake+quant;
				Total_shake = Total_shake+quant*70;
				cout<<"\n\n\t\t"<<quant<<"shake is the order !";
			}
			else
			
				cout<<"\n\tOnly "<<Qshake-Sshake<<" Shake remain in hotel";
				break;			
		
		
		case 6:
			cout<<"\n\n Enter Chicken-Roll Quantity: ";
			cin>>quant;
			if(Qchicken-Schicken >=quant)
			{
				Schicken-Schicken+quant;
				Total_chicken = Total_chicken+quant*444;
				cout<<"\n\n\t\t"<<quant<<"Chicken-Roll is the order !";
			}
			else
			
				cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken-Roll remain in hotel";
				break;
		
		case 7:
		
		
		cout<<"\n\t\t|----Details of sales and collection---|";
	    cout<<"\n\n Number of rooms we had: "<<Qrooms;
		cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
		cout<<"\n\n Ramaining rooms: "<<Qrooms - Srooms;
		cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;
		cout<<"\n\n\n";
	
		cout<<"\t+-------------------------------------------+"<<endl;
		cout<<"\t|             Pasta                         |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t| we had:"<<Qpasta<<"                                  |"<<endl;
		cout<<"\t| We gave:"<<Spasta<<"                                 |"<<endl;
		cout<<"\t| Ramaining pasta:"<<Qpasta-Spasta<<"                         |"<<endl;
		cout<<"\t| Total collectio by pasta:"<<Total_pasta<<"                |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t+-------------------------------------------+"<<endl;				
	
	    
	    cout<<"\t+-------------------------------------------+"<<endl;
		cout<<"\t|             Burger                        |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t| we had:"<<Qburger<<"                                  |"<<endl;
		cout<<"\t| We gave:"<<Sburger<<"                                 |"<<endl;
		cout<<"\t| Ramaining pasta:"<<Qburger-Sburger<<"                         |"<<endl;
		cout<<"\t| Total collectio by pasta:"<<Total_burger<<"                |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t+-------------------------------------------+"<<endl;
	
	    cout<<"\t+-------------------------------------------+"<<endl;
		cout<<"\t|             Noodles                       |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t| we had:"<<Qnoodles<<"                                  |"<<endl;
		cout<<"\t| We gave:"<<Snoodles<<"                                 |"<<endl;
		cout<<"\t| Ramaining pasta:"<<Qnoodles-Snoodles<<"                         |"<<endl;
		cout<<"\t| Total collectio by pasta:"<<Total_noodles<<"                |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t+-------------------------------------------+"<<endl;
		
		
		cout<<"\t+-------------------------------------------+"<<endl;
		cout<<"\t|             Shack                         |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t| we had:"<<Qshake<<"                                  |"<<endl;
		cout<<"\t| We gave:"<<Sshake<<"                                 |"<<endl;
		cout<<"\t| Ramaining pasta:"<<Qshake-Sshake<<"                         |"<<endl;
		cout<<"\t| Total collectio by pasta:"<<Total_shake<<"                |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t+-------------------------------------------+"<<endl;
	    
	    
	    cout<<"\t+-------------------------------------------+"<<endl;
		cout<<"\t|             Chicken                       |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t| we had:"<<Qchicken<<"                                  |"<<endl;
		cout<<"\t| We gave:"<<Schicken<<"                                 |"<<endl;
		cout<<"\t| Ramaining pasta:"<<Qchicken-Schicken<<"                         |"<<endl;
		cout<<"\t| Total collectio by pasta:"<<Total_chicken<<"                |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t|                                           |"<<endl;
		cout<<"\t+-------------------------------------------+"<<endl;
		
		
		cout<<"\n\n\n Total collection of the Day: ";
		cout<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken<<"$";
	
	    case 8:
		    exit(0);
			default:
			   cout<<"\n\n Please select the  number mentioned .";	
	}
	
	goto m;
	
	
} 
