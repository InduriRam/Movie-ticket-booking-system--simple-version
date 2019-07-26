#include<iostream>
#include<string>
using namespace std;
struct ticket
{
	int ticket_number;
	char ticket_status;
	string user_name;
};
int main()
{
	cout<<"BOOK YOUR TICKETS BEFORE THEY RUN OUT! HURRY UP! \n";
	ticket array[25];
	for(int i=0;i<25;i++)
	{
		array[i].ticket_status= 'A';
		array[i].ticket_number= i+1;
		array[i].ticket_number= 'NA';
	}
	cout<<"Check availability : \n";
	
	for(int i=0;i<5;i++)
	{
		for(int j=5*i;j<5*(i+1);j++)
		{
			cout<<"|"<<array[j].ticket_number<<","<<array[j].ticket_status<<"|"<<" ";
		}
		cout<<"\n";
	}
	cout<<"A: Available "<<"B: Booked \n";
	int z=1;
	
	while(z==1)
	{
	
	
	cout<<"enter the number of tickets you want to book : \n";  
	int n;
	cin>>n;
	ticket arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the ticket number you ant to book";
		int t;
		cin>>t;
		while(array[t-1].ticket_status == 'B')
		{
			cout<<"Seat already taken \n \n";
			cout<<"Seat already taken.Refer availability table \n ";
			cout<<"enter any number excpet 0 to continue and 0 to view  seat seat status \n";
			int k;
			cin>>k;
			if(k==0)
			{
				for(int i=0;i<5;i++)
	{
		for(int j=5*i;j<5*(i+1);j++)
		{
			cout<<"|"<<array[j].ticket_number<<","<<array[j].ticket_status<<"|"<<" ";
		}
		cout<<"\n";
	}
			}
			cout<<"choose other ticket number \n";
			cin>>t;
			cout<<"enter username \n";
			cin>>array[t].user_name;
			array[t].ticket_status='B';
			
		}
		array[t].ticket_status='B';
		cout<<"enter username \n";
		cin>>array[t].user_name;
		cout<<"\n";
		
	} 
	cout<<"enter 1 to book more tickets 0 to exit \n";
	cin>>z;
    }
	      
	

return 0;
}
