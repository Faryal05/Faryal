#include<iostream> 
#include<stdio.h>  
#include<conio.h> 
using namespace std;
int main()
{
	char fullname[30], piz1[]="Margherita" ,piz2[]="Veg Extravaganza" ,piz3[]="Veggie Paradise" ,piz4[]="Paneer Makhani", drinks1[]="Mountain Dew", drinks2[]="Coca Cola", drinks3[]="Maaza",burger_1[]="Sweet potato Burger",burger_2[]="Chicken Burger",burger_3[]=" Mushroom Burger";
	char sandwich_1[]="Grilled Sandwich", sandwich_2[]="Veg Cheese toast Sandwich", sandwich_3[]="Extream Veg Sandwich";
	char fried1[]="Chicken Fried", fried2[]="Fish Fried", fried3[]="Fried rice",yes ;
	int option=0,option1,option2, qty;
	starting:
	system("cls");
	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|               Angels Fast Food Ordering System        |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(fullname, 20);
	cout<<"Hello "<<fullname<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t|-------------------------------------------------------|\n";
	cout<<"\t\t\t|                      Fast Food Menu                   |\n";
	cout<<"\t\t\t|-------------------------------------------------------|\n\n";

	cout<<"[Choice 1] Pizza\n";
	cout<<"[Choice 2] Burger\n";
	cout<<"[Choice 3] Sandwich\n";
	cout<<"[Choice 4] Drinks\n";
	cout<<"[Choice 5] Fried\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>option;

	if(option==1)
	 {
		cout<<"\n1) "<<piz1<<"\n";
		cout<<"2) "<<piz2<<"\n";
		cout<<"3) "<<piz3<<"\n";
		cout<<"4) "<<piz4<<"\n";
		cout<<"\nPlease Enter which Pizza Flavor would you like to have?:";
		cin>>option1;
		if(option1>=1 && option1<5)
		{
			cout<<"\n1) Small Price =250.00\n"<<"2) Regular Price =500.00\n"<<"3) Large Price =900.00\n";
			cout<<"\nChoose Size Please:";
			cin>>option2;
			if(option2>=1 && option2<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(option2)
			{
			case 1: option = 250.00*qty;
			break;

			case 2: option = 500.00*qty;
			break;

			case 3: option = 900.00*qty;
			break;


			      }
			system("cls");
			switch (option2)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\n\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<piz2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<piz4;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>yes;
			if(yes=='Y' || yes=='y')
			{
			  goto starting;
			  
			}
		}

	 }
	 else if(option==2)
	 {
		cout<<"\n1 "<<burger_1<<" Price =180"<<"\n";
		cout<<"2 "<<burger_2<<" Price =150"<<"\n";
		cout<<"3 "<<burger_3<<" Price =160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(option2)
			{
			case 1: option = 180.00*qty;
			break;

			case 2: option = 150.00*qty;
			break;

			case 3: option = 160.00*qty;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<burger_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Angels Pizza\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<burger_3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>yes;
			if(yes=='Y' || yes=='y')
			{
			  goto starting;
			  
			}

 }
}
	else if(option==3)
	 {
		cout<<"\n1  "<<sandwich_1<<" Price =240.00"<<"\n";
		cout<<"2  "<<sandwich_2<<" Price =160.00"<<"\n";
		cout<<"3  "<<sandwich_3<<" Price =100.00"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(option2)
			{
			case 1: option = 240.00*qty;
			break;

			case 2: option = 160.00*qty;
			break;

			case 3: option = 100.00*qty;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<sandwich_2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>yes;
			if(yes=='Y' || yes=='y')
			{
			  goto starting;
			  
			}
			}
			}


	 else if(option==4)
	 {
		cout<<"\n1 "<<drinks1<<" Price =15.00"<<"\n";
		cout<<"2 "<<drinks2<<" Price =20.00"<<"\n";
		cout<<"3 "<<drinks3<<" Price =30.00"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
			cout<<"\nHow Much Drinks Do you want: ";
			cin>>qty;
			switch(option2)
			{
			case 1: option = 150.00*qty;
			break;

			case 2: option = 100.00*qty;
			break;

			case 3: option = 120.00*qty;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 5 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<drinks2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 5 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<drinks3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 5 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
				cout<<"Would you like to order anything else? Y / N:";
			cin>>yes;
			if(yes=='Y' || yes=='y')
			{
			  goto starting;
			  

			}
 }

 }
}
	else if(option==5)
	 {
		cout<<"\n1 "<<fried1<<" Price =160.00"<<"\n";
		cout<<"2 "<<fried2<<" Price =220.00"<<"\n";
		cout<<"3 "<<fried3<<" Price =140.00"<<"\n";
		cout<<"\nPlease Enter which Fried you would like to have?:";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>qty;
			switch(option2)
			{
			case 1: option = 160.00*qty;
			break;

			case 2: option = 220.00*qty;
			break;

			case 3: option = 140.00*qty;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried1;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<"  "<<fried2;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<qty<<" "<<fried3;
			 cout<<"\nYour Total Bill is \nP"<<option<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Angels Fast Food\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>yes;
			if(yes=='Y' || yes=='y')
			{
			  goto starting;
			  
			}
			}
			}

			else
			{
				system("cls");
				cout<<"Please Select The Choice From The Menu : \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>yes;

				if(yes=='Y' || yes=='y')
				{
				  goto starting;
			  
			  
			}
			}

     getch();

}
