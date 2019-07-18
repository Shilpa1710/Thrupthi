#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>
//using namespace std;

class base
{
protected:
int od,start,m,y,d,a,le,y2;

	public:
		base();
		int leapyear(int);
	friend 	int  val(int);
	 void tab(int);
	    void heading();

};
class der: public base
{	int z,month,n,leap;
	public:
		der* operator -> ()
		{
			return this;
		}
		void months(int,int);
		void jan(int);
	 void feb(int);
	 void mar(int);
	 void april(int);
	 void may(int);
	 void june(int);
	 void july(int);
	 void aug(int);
	 void sept(int);
	 void oct(int);
	 void nov(int);
	 void dec(int);
	 void put(int,int);
};
base::base()
{
	y=1;
	m=1;
	d=1;
}

void base:: tab(int n)
{
   for(int i=1;i<=n-1;i++)
  {
      cout<<"\t";
  }
}


void base:: heading()
{
	cout<<endl;
    cout<<"---------------------------------------------------";
	cout<<"\nmon\ttues\twed\tthurs\tfri\tsat\tsun\n";
	cout<<"---------------------------------------------------";
	cout<<"\t\t\n\n";
}

int base::leapyear(int y1 )
{
 if( ((y1%4==0) && (y1%100!=0))||(y1%400==0))
 {
	return 1;
 }
	else
	{
	return 0;
	 }
}

int val(int year1)
{
	int od;
	if(year1==1752)
	{
	return 3;
	}
	else
	{
	od=(year1+((year1-1)/4)-((year1-1)/100)+((year1-1)/400))%7;
	if(od==0)
	od=7;
	return od;
	}

}
void der::months(int y1,int n)
{
	switch(n)
	{
		case 1:jan(y1);
		break;
		case 2:feb(y1);
		break;
		case 3:mar(y1);
		break;
		case 4:april(y1);
		break;
		case 5:may(y1);
		break;
		case 6:june(y1);
		break;
		case 7:july(y1);
		break;
		case 8:aug(y1);
		break;
		case 9:sept(y1);
		break;
		case 10:oct(y1);
		break;
		case 11:nov(y1);
		break;
		case 12:dec(y1);
		break;
		default:cout<<"invalid input"<<endl;
}
}
void der::jan(int y1)
{
	 system("cls");
	cout<<"\nJAN"<<"\t\t\t"<<y1;
	heading();
	tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
				d=d+1;
				start=start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}

		}
			d=1;
			cout<<"\n1-NEW YEAR\n26-REPUBLIC DAY\n";
			cout<<endl;

}
void der::feb(int y1)
{
	jan(y1);
	sleep(1);
	system("cls");
		cout<<"\nFEB"<<"\t\t\t"<<y1;
	heading();

			tab(start);
			leap= leapyear(z);
			if(leap==1)
			{

			for(int i=1;i<=29;i++)
			{
				cout<<d<<"\t";
				d=d+1;
				start=start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;
				}
				}
			d=1;
			cout<<endl;

		}


		else
		{

		for(int i=1;i<=28;i++)
				{
					cout<<d<<"\t";
					d=d+1;
				start=	start+1;
					if(start>7)
					{
					cout<<"\n\n";
					start=1;
					}
				}
			d=1;
			cout<<endl;
	   }

}
void der::mar(int y1)
{

	feb(y1);
	sleep(1);
	system("cls");
	cout<<"\nMAR"<<"\t\t\t"<<y1<<endl;
	heading();
	tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
				d=d+1;
				start=start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}

		}
			d=1;
			cout<<endl;


}
void der::april(int y1)
{
	mar(y1);
	sleep(1);
	system("cls");
	cout<<"\nAPRIL"<<"\t\t\t"<<y1<<endl;
	heading();
	   tab(start);
	   for(int i=1;i<=30;i++)
{
	cout<<d<<"\t";
	d=d+1;
	start=start+1;
	if(start>7)
	{
		cout<<"\n\n";
		start=1;

	}
	   }
	   d=1;
	   cout<<"\n14-DR.B.R AMBEDKAR JAYANTHI\n";
	   cout<<endl;
}
void der::may(int y1)
{
	april(y1);
	sleep(1);
	system("cls");
	cout<<"\nMAY"<<"\t\t\t"<<y1<<endl;
	heading();
	tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
			d=	d+1;
			start=	start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}



			}
			d=1;
			cout<<"\n1-MAY DAY\n";
			cout<<endl;
}
void der::june(int y1)
{
	may(y1);
	sleep(1);
	system("cls");
	cout<<"\nJUNE"<<"\t\t\t"<<y1<<endl;
	heading();
	 tab(start);
	   for(int i=1;i<=30;i++)
{
	cout<<d<<"\t";
	d=d+1;
start=	start+1;
	if(start>7)
	{
		cout<<"\n\n";
		start=1;

	}
	   }
	   d=1;
	   cout<<endl;
}
void der::july(int y1)
{
	june(y1);
	sleep(1);
	system("cls");
	cout<<"\nJULY"<<"\t\t\t"<<y1<<endl;
	heading();
	tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
				d=d+1;
				start=start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}



			}
			d=1;
			cout<<endl;
}
void der::aug(int y1)
{
	july(y1);
	sleep(1);
	system("cls");
	cout<<"\nAUGUST"<<"\t\t\t"<<y1<<endl;
	heading();
	tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
		d=d+1;
			start=start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}



			}
			d=1;
			cout<<"\n15-INDEPENDENCE DAY\n";
			cout<<endl;
}
void der::sept(int y1)
{

	if(y1==1752)
	{
		aug(y1);
		sleep(1);
		system("cls");
		cout<<"\nSEPTEMBER"<<"\t\t\t"<<y1<<endl;
		heading();
		tab(start);
		for(int i=1;i<=2;i++)
		{
			cout<<d<<"\t";
			d=d+1;
			start=start+1;
		}
		d=14;
		for(int j=14;j<=30;j++)
		{

		cout<<d<<"\t";
	d=d+1;
	start=start+1;
	if(start>7)
	{
		cout<<"\n\n";
		start=1;

	}

	  }
	   d=1;
	   cout<<"\n5-TEACHERS' DAY\n";
	   cout<<endl;
}
else
	{
	aug(y1);
	sleep(1);
	system("cls");
	cout<<"\nSEPTEMBER"<<"\t\t\t"<<y1<<endl;
	heading();
	 tab(start);
	   for(int i=1;i<=30;i++)
{
	cout<<d<<"\t";
	d=d+1;
	start=start+1;
	if(start>7)
	{
		cout<<"\n\n";
		start=1;

	}
	   }
	   d=1;
	   cout<<endl;
}
}
void der::oct(int y1)
{
	sept(y1);
	sleep(1);
	system("cls");
	cout<<"\nOCTOBER"<<"\t\t\t"<<y1<<endl;
	heading();
		tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
				d=d+1;
				start=start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}



			}
			d=1;
			cout<<"\n2-GANDHI JAYANTHI\n";
			cout<<endl;
}
void der::nov(int y1)
{
	oct(y1);
	sleep(1);
	system("cls");
	cout<<"\nNOVEMBER"<<"\t\t\t"<<y1<<endl;
	heading();
	 tab(start);
	   for(int i=1;i<=30;i++)
{
	cout<<d<<"\t";
	d=d+1;
start=	start+1;
	if(start>7)
	{
		cout<<"\n\n";
		start=1;

	}
	   }
	   d=1;
	   cout<<"\n14-CHILDREN'S DAY\n";
	   cout<<endl;
}
void der::dec(int y1)
{
	nov(y1);
	sleep(1);
	system("cls");
	cout<<"\nDECEMBER"<<"\t\t\t"<<y1<<endl;
	heading();
	tab(start);
			for(int i=1;i<=31;i++)
			{
				cout<<d<<"\t";
			d=	d+1;
			start=	start+1;
				if(start>7)
				{
					cout<<"\n\n";
					start=1;

				}



			}
			d=1;
			cout<<"\n25-CHRISTMAS DAY\n";
			cout<<endl;

}

void der::put(int year2,int m)
{
	z=year2;
	month=m;
	start=val(z);
	months(z,month);

	}
int main()
	{
	int *m;
	m=new int;
	der d1;
	clrscr();
	system("color 5f");
	int year;
	char opt;
	textcolor(5+128);

	cprintf("Enter a year:");
	cin>>year;
	sleep(1);
	system("cls");
	textcolor(14);
	cprintf("ENTER THE MONTHS YOU NEED TO PRINT FROM JANUARY:");
	cin>>*m;
	if(*m>12)
	cout<<"invalid"<<endl;
	else
    d1->put(year,*m) ;
	cout<<"Do you want to continue?y or n:";
	cin>>opt;
	if(opt=='y'||opt=='Y')
	{
		system("cls");
		main();
	}
    else
    delete m;
    exit(0);

}
