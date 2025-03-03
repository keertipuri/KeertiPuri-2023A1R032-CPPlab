/*Write a program to create a class with the function name Login() and display_Info , Login()
 function wil accept Pin(default value 123) from user as parameter and display_info() function will accept name, regno,
 marks, percentage and grade from user as perimeter and display all information  entered by the user on screen with welcome message*/
 
 
 #include<iostream>
 using namespace std;
 class program
 {
 	public: void login(int pin)
 	{
 		if(pin == 123)
 		{
 			cout<<"login successful";
		 }
		 else
		 {
		 	cout<<"login failed";
		 }
	 }
	 public: void display_info( string name, string regno,int marks,float percent)
	 {
	 	cout<<"\n name is "<<name<<"\n regno is "<<regno<<"\n marks are= "<<marks<<"percent is "<<percent;
	 }
 };
 int main()
 {
 	program obj;
 	int pin1,marks1;
 	string name1, regno1;
 	float percent1;
 	cout<<"welcome\n";
 	cout<<"enter the pin\n";
 	cin>>pin1;
 	cout<<"enter name\n ";
 	cin>>name1;
 	cout<<"enter regno\n ";
 	cin>>regno1;
 	cout<<"enter marks\n ";
 	cin>>marks1;
 	cout<<"enter percentage\n ";
 	cin>>percent1;
 	obj.login(pin1);
 	obj.display_info(name1,regno1,marks1,percent1);
 	return 0;	
 }
