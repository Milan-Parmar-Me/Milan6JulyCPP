#include<iostream>
#include<strings.h>
using namespace std;
class a{
	public:
		int choich;
		void display1()
		{
			cout<<"-----------------Welcome To Ahemdabad Travels----------------"<<endl<<endl;
			cout<<"Ahmedabad"<<endl<<"Baroda"<<endl<<"Surat"<<endl<<"Goa"<<endl;
			
			cout<<"Press 1 For Registartion Or 2 For No"<<endl;
			cin>>choich;
					
			
		}
};
class b{
	public:
		char name[100];
		int age;
		char email[90];
		long long int contact;
		char address[400];
		char username1[30];
		char password1[100];
		
		void display2()
		{
			cout<<"Enter Name"<<endl;
			cin>>name;
			cout<<"Enter age"<<endl;
			cin>>age;
			cout<<"Enter email Address"<<endl;
			cin>>email;
			cout<<"Enter contact number"<<endl;
			cin>>contact;
			cout<<"address Enter kar";
			cin>>address;
			cout<<"Enter Username"<<endl;
			cin>>username1;
			cout<<"Enter the password"<<endl;
			cin>>password1;
		}
		
};
class c{
	public:
		char username2[500];
		char password2[500];
		
		void display3()
		{
			cout<<"--------------------------Login---------------------------------"<<endl<<endl;
			cout<<"enter Username"<<endl;
			cin>>username2;
			cout<<"enter password"<<endl;
			cin>>password2;
		}
};
int main()
{
	a rixa;
	rixa.display1();
if(rixa.choich==0)
{
	return -1;
	
}
b truck;
truck.display2();
c car;

car.display3();
if(cmp(truck.username1,car.username2)==0&&cmp(truck.password1,car.password2)==0)
{
	cout<<"Login Sucessfull"<<endl;
	
	
}
else
{
	cout<<"Invalid Usernamae Or Password"<<endl;
}
	
}
