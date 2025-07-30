#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class book
{
	string author,title,publisher;
	float price;
	int copies,n;
	public:
	book(string author,string title,string publisher,float price,int copies,int n)
	{
		this->author=author;
		this->title=title;
		this->publisher=publisher;
		this->price=price;
		this->copies=copies;
		this->n=n;

	}
	void display()
	{
		for(int j=0;j<n;j++)
	{
		cout<<"displaying....."<<endl
		cout<<"author :"<<author<<endl;
		cout<<"title : "<<title<<endl;
		cout<<"publisher : "<<publisher<<endl;
		cout<<"price : "<<price<<endl;
		cout<<"copies :"<<copies<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
	}
	}
	void getbook(string a,string b,int c,int n)
	{
		for(int m=0;m<n;m++)
		{
			
		}
	}
};
int main()
{
	int n,ch=0;
	string author,title,publisher;
	float price;
	int copies;
	cout<<"enter the number of books"<<endl;
	cin>>n;
	book *books[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter author name : "<<endl;
		cin>>author;
		cout<<"enter title       : "<<endl;
		cin>>title;
		cout<<"publisher         : "<<endl;
		cin>>publisher;
		cout<<"price             : "<<endl;
		cin>>price;
		cout<<"copies            : "<<endl;
		cin>>copies;
		books[i]= new book(author,title,publisher,price,copies,n);
	}
	while(ch!=3)
	{
		cout<<"   MAIN MENU "<<endl;
		cout<<"1.DISPLAY BOOKS"<<endl;
		cout<<"2.GET BOOKS "<<endl;
		cout<<"3.EXIT : "<<endl;
		cout<<endl;
		cout<<"enter your choice : "<<endl;
		cin>>ch;
	  switch(ch)
	  {
	  case 1:
		for(int k=0;k<n;k++)
			books[k]->display();
		break;
	case 2:
		srting a,b;
		int c;
		cout<<"enter author and title of the book : "<<endl;
		cin>>a>>b;
		cout<<"enter how  many copies : "<<endl;
		cin>>c;
		getbook(a,b,c,n);
		break;
	case 3:
		cout<<"thank you....."<<endl;
		break;
	default:
		cout<<"invali choice;
	}
	

}
