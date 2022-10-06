#include<iostream>
#include<string.h>
using namespace std;
class A{
	public:
					int select;

		void display()
		{
			cout<<"------------------Welcome To SBI-----------------------"<<endl<<endl<<endl;
			cout<<"Gujarat"<<endl;
			cout<<"Rajastan"<<endl;
			cout<<"Madhya Pradesh"<<endl;
			cout<<"Maharastra"<<endl<<endl<<endl;
			cout<<"Press 1;For Gujrat\nPress 2;For Rajasthan\nPress 3;For Madhya Pradesh\nPress 4;For Maharstra"<<endl;
			cin>>select;
						
			
		}
		
};

class B{
	public:
					int select2;

		void display1()
		{
				cout<<"------------------Welcome To Gujarat SBI-----------------------"<<endl<<endl<<endl;
			cout<<"Ahmedabad"<<endl;
			cout<<"Rajkot"<<endl;
			cout<<"Baroda"<<endl;
			cout<<"Gandhinagar"<<endl<<endl<<endl;
			cout<<"Press 1;For Ahemdabad\nPress 2;For Rajkot\nPress 3;For Baroda\nPress 4;For Gandhinagar"<<endl;
			cin>>select2;
			
		}
};
class C{
	public:
					int select3;

		void display2()
		{
				cout<<"------------------Welcome To Ahmedabad SBI-----------------------"<<endl<<endl<<endl;
			cout<<"Are U Registered User?"<<endl;
			cout<<"Press 1 For Yes\n Press 2 For No"<<endl;
		
			cin>>select3;
			
		}
};
class D{
	public:
					char username1[30];char password1[20];

		void display3()
		{
			cout<<"----------------------Login---------------------------------"<<endl<<endl;
			cout<<"Enter UserName:  "<<endl;
			cin>>username1;
			cout<<"Enter PassWord"<<endl;
			cin>>password1;
		}
	
};
class E{
	public:
					string name;char DOB[100];
			long int pin;string address;char type[10];
		void display4()
		{
			cout<<"----------------------------Registration----------------------------------"<<endl<<endl;
			cout<<"Enter Your NaMe:  "<<endl;
			getline(cin,name);
			cout<<"Enter Your DOB: "<<endl;
			cin>>DOB;
			cout<<"Enter Adhar PIN:  "<<endl;
			cin>>pin;
			cout<<"Enter Address:  "<<endl;
			getline(cin,address);
			cout<<"Enter Your Accounts Type:  "<<endl<<endl<<endl;
			cin>>type;
			
			
			
			
			
		}
};
class F:public E{
	public:
		void display7()
		{
			cout<<"---------------------------------Your Bank Details------------------------"<<endl<<endl;
			
		//	cout<<"Name:  "<<name<<endl;
		//	cout<<"DOB:    "<<DOB<<endl;
		//	cout<<"Adhar PIN:  "<<pin<<endl;
		//	cout<<"Address:     "<<address<<endl;
			cout<<"IFSC Code: Elo90876748SBI78"<<endl;
			cout<<"Account Number: 9834758493293 "<<endl<<endl<<endl;
		//	cout<<"Account Type: "<<type<<endl;
			cout<<"Login Succesfull"<<endl;
		}
};

class G{
	public:
		void display5()
		{
			cout<<"_-----------------------------------------Menu------------------------------"<<endl<<endl<<endl;
			int choich;
			int amount;
			cout<<"Press";
			cout<<" 1 For :Debit"<<endl;
			cout<<"2 For :Credit"<<endl;
			cout<<"3 For :view"<<endl;
			cout<<"4 For :LogOut"<<endl;
			cout<<"Enter Your Choich"<<endl;
			cin>>choich;
			cout<<"Enter Amount Jo Tere Khate Me Hai Hi Nahi "<<endl;
			cin>>amount;
			
			
		}
};

int main()
{
	A obj;
	obj.display();
	if (obj.select!= 1)
	{
		cout<<"No Data Available"<<endl;
		return 0;
	}
	B obj2;
	obj2.display1();
	if(obj2.select2!=1)
	{
		cout<<"Data NOT Available"<<endl;
		return 0;
	}
	C obj3;
	obj3.display2();
			D obj4 ;
					E obj8;


	if(obj3.select3==1)
	{			

		obj4.display3();
		F obj5;
		obj5.display7();
		
		
	}
	else
	{
		obj8.display4();
		F obj88;
		obj88.display7();
		
	}
	 G obj19;
	 obj19.display5();
	
	
	
	
	
}
