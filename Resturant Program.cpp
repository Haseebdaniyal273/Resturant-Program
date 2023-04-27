#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Resturant
{
private:
	int Apple;
	int banana;
	int orange;
	int icecream;
	int pizza;
	int sandwich;
	int total,item;
	int q,w,e,r,y,u;
public:
void rest()
{
	Apple=0;
	banana=0;
	orange=0;
	icecream=0;
	pizza=0;
	sandwich=0;
	total=0;
	item=0;
	q=0;
	w=0;
	e=0;
	r=0;
	y=0;
	u=0;
}
void menu()
{
	cout<<setw(15)<<"_____________________________________________________________"<<endl;
	cout<<setw(15)<<"-----------------------(MENU------LIST)----------------------"<<endl;
	cout<<setw(15)<<"(APPLE JUICE = 200)-(BANANA SHAKE = 120)-(ORANGE JUICE = 100)"<<endl;
	cout<<setw(15)<<"(PIZZA = 800)--------(SANDWITCH = 150)------(ICE CREAM = 250)"<<endl;
	cout<<setw(15)<<"_____________________________________________________________"<<endl;
	cout<<endl;
}
void get_apple()
{
	Apple+=200;
	q=Apple;
	item+=1;
}
void get_banana()
{
	banana+=120;
	w=banana;
	item+=1;
}
void get_orange()
{
	orange+=100;
	e=orange;
	item+=1;
}
void get_icecream()
{
	icecream+=250;
	r=icecream;
	item+=1;
}
void get_pizza()
{
	pizza+=800;
	y=pizza;
	item+=1;
}	
void get_sandwich()
{
	sandwich+=150;
	u=sandwich;
	item+=1;
}		
void get_total()
{
	cout<<setw(115)<<"------------------------------------"<<endl;
	cout<<setw(100)<<"ITEMS YOU SELECTED "<<item<<endl;
	cout<<setw(115)<<"------------------------------------"<<endl;
	cout<<setw(102)<<"YOUR TOTAL AMOUNT IS "<<q+w+e+r+y+u<<endl;
	cout<<setw(115)<<"------------------------------------"<<endl;
}
};
int main()
{
	Resturant r;
	char key;
	char A,a,B,b,S,s,P,p,O,o,I,i,T,t,M,m;
	r.rest();

	cout<<setw(15)<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<setw(15)<<"           HAPPY RESTURANT           "<<endl;
	cout<<setw(15)<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
	cout<<endl;
	while(true)
	{
		
		cout<<"_____________________________________"<<endl;
		cout<<"-------------------------------------"<<endl;
		cout<<"TO SEE MENU "<<setw(30)<<"PRESS - (M/m)"<<endl;
		cout<<"TO CHOOSE APPLE JUICE "<<setw(20)<<"PRESS - (A/a)"<<endl;
		cout<<"TO CHOOSE BANANA SHAKE "<<setw(19)<<" PRESS - (B/b)"<<endl;
		cout<<"TO CHOOSE ORANGE JUICE "<<setw(19)<<" PRESS - (O/o)"<<endl;
		cout<<"TO CHOOSE PIZZA "<<setw(26)<<" PRESS - (P/p)"<<endl;
		cout<<"TO CHOOSE SANDWICH "<<setw(23)<<"PRESS - (S/s)"<<endl;
		cout<<"TO CHOOSE ICE CREAM "<<setw(22)<<"PRESS - (I/i)"<<endl;
		cout<<"-------------------------------------"<<endl;
		cout<<"_____________________________________"<<endl;	
		cout<<"SELECT YOUR ITEM BY CLIKING KEYS "<<endl;
		cin>>key;
	if(key=='A'||key=='a')
	{
	r.get_apple();	
	}
	else if(key=='B'||key=='b')
	{
	r.get_banana();	
	}	
	else if(key=='S'||key=='s')
	{
	r.get_sandwich();	
	}	
	else if(key=='P'||key=='p')
	{
	r.get_pizza();	
	}	
	else if(key=='O'||key=='o')
	{
	r.get_orange();
	}		
	else if(key=='I'||key=='i')
	{
	r.get_icecream();	
	}		
	else if(key=='T'||key=='t')
	{
	r.get_total();	
	}		
	else if(key=='M'||key=='m')
	{
	r.menu();	
	}		

}
}
