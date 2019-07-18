#include<iostream>
using namespace std;

class calender
{
protected:
int firstday,numdays,year,month,day;
	public:
		calender();
		bool leap(int);
		int  dayname(int);
		void space(int);
		void printmonth(int);
		 void printdays(int);
		
};
class monthday: public calender
{
	private:
		int daycount,z,lp,weekday,year2;
	public:
	 void showcal(int);	
		
		
};
calender::calender()
{
	numdays=0;
	year=1;
	month=1;
	day=1;	
}

void calender::space(int n)
{
   for(int i=1;i<=n-1;i++)
  {
      cout<<"\t";
  } 
}
 

void calender::printdays(int y)
{
	printmonth(month);
	cout<<"\t\t"<<y<<endl;
    cout<<"---------------------------------------------------";
	cout<<"\nmon\ttues\twed\tthurs\tfri\tsat\tsun\n";
	cout<<"---------------------------------------------------";
	cout<<"\t\t\n\n";
}

void calender::printmonth(int n)
{
	switch(n)
	{
		case 1:cout<<"---------------------------------------------------";
		cout<<"\n\tJanuary";
		break;
		case 2:cout<<"---------------------------------------------------";
		cout<<"\n\tFebruary";
		break;
		case 3:cout<<"---------------------------------------------------";
		cout<<"\n\tMarch";
		break;
		case 4:cout<<"---------------------------------------------------";
		cout<<"\n\tApril";
		break;
		case 5:cout<<"---------------------------------------------------";
		cout<<"\n\tMay";
		break;
		case 6:cout<<"---------------------------------------------------";
		cout<<"\n\tJune";
		break;
		case 7:cout<<"---------------------------------------------------";
		cout<<"\n\tJuly";
		break;
		case 8:cout<<"---------------------------------------------------";
		cout<<"\n\tAugust";
		break;
		case 9:cout<<"---------------------------------------------------";
		cout<<"\n\tSeptember";
		break;
		case 10:cout<<"-------------------------------------------------=-";
		cout<<"\n\tOctober";
		break;
		case 11:cout<<"---------------------------------------------------";
		cout<<"\n\tNovember";
		break;
		case 12:cout<<"---------------------------------------------------";
		cout<<"\n\tDecember";
		break;
		default:cout<<"invalid input";
		
	}
	
		}



bool calender::leap(int ye )
{
	return  ((ye%4==0) && (ye%100 !=0))||(ye%400==0);
	
}

int calender::dayname(int a)
{
	int x1,x2,x3, firstday;
	x1=(a-1)/4;
	
	x2=(a-1)/100;
	x3=(a-1)/400;
	firstday=(a+x1-x2+x3)%7;
	if(firstday==0)
	firstday=7;
	return firstday;
}


void monthday::showcal(int year2)
{

	int dc,lp,z,weekday;
	
	z=year2;
	weekday=dayname(z);
	dc=weekday;
	
		while(month<=12)
	{
		printdays(z);
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)



		{
			space(dc);
			for(int i=1;i<=31;i++)
			{
				cout<<day<<"\t";
				day++;
				dc++;
				if(dc>7)
				{
					cout<<"\n\n";
					dc=1;
					
				}
				
				
				
			}
			day=1;
			month++;
			cout<<endl;
			
		}
		
		
			 else if(month==2)

		{
			space(dc);
			lp= leap(z);
			if(lp)
			{
			
			for(int i=1;i<=29;i++)
			{
				cout<<day<<"\t";
				day++;
				dc++;
				if(dc>7)
				{
					cout<<"\n\n";
					dc=1;
				}
				}
			day=1;
			month++;
			cout<<endl;
			
           	}
           	
           	
           	else
           	{
	
           	for(int i=1;i<=28;i++)
				{
					cout<<day<<"\t";
					day++;
					dc++;
					if(dc>7)
					{	
					cout<<"\n\n";
					dc=1;
					}
				}
			day=1;
			month++;
			cout<<endl;
           }
           
       }
       
       
       else if(month==4||month==6||month==9||month==11)
       
       
{
	   space(dc);
	   for(int i=1;i<=30;i++)
{
	cout<<day<<"\t";
	day++;
	dc++;
	if(dc>7)
	{
		cout<<"\n\n";
		dc=1;
		
	}
	   } 
	   day=1;
	   month++;
	   cout<<endl;
 }
}
month=1;
}

	int main()
	{	
	monthday m1;
	int year;
	cout<<"Enter a year:";
	cin>>year;
	m1.showcal(year) ;
		return 0;
    }
