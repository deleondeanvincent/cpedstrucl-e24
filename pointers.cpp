#include<iostream>
using namespace std;

int mainMenu();
void strCat(char *x1,char *y1)
{
	while(*x1)
		x1++;
	while(*x1++=*y1++)
		;
}
void strCpy(char *x1,char *y1)
{
	while(*x1++=*y1++);
}
void strRev1(char *x1)
{
	int count(0);
	for(int i=0;x1[i]!='\0';i++)
		count++;
	for(int i=count-1;i>=0;i--)
		cout<<x1[i];
}
void strRev2(char *y1)
{
	int count(0);
	for(int i=0;y1[i]!='\0';i++)
		count++;
	for(int i=count-1;i>=0;i--)
		cout<<y1[i];
}
void strCmp(char *x1,char *y1)
{
	int count;
	for(int i=0;((x1[i]!='\0')||(y1[i]!='\0'));i++)
	{
		if(x1[i]==y1[i])
			count++;
		else if((x1[i]||y1[i])=='\0')
		{
			count=0;
			break;
		}
		else
		{
			count=0;
			break;
		}
	}	
	if(count!=0)
		cout<<"Equal";
	else
		cout<<"Not equal";
}

int main()
{
	int a,rev,count;
	char str1[50],str2[50],str3[50];
	char *x1=str1;
	char *y1=str2;
	
	cout<<"Enter first message: ";
	cin.getline(str1,50);
	cout<<"Enter second message: ";
	cin.getline(str2,50);
	system("cls");
	
	while(a<1||a>5){
		a=mainMenu();
		if(a==1)
		{
			strCat(str1,str2);
			cout<<x1;
		}
		else if(a==2)
		{
			strCpy(str1,str2);
			cout<<x1;
		}
		else if(a==3)
		{
			while(rev<1||rev>2)
			{
				cout<<"Reverse: "<<endl
					<<"[1] Message 1"<<endl
					<<"[2] Message 2"<<endl;
				cin>>rev;
				if(rev==1)
					strRev1(str1);
				else if(rev==2)
					strRev2(str2);
				else
				{
					cout<<"Invalid choice";
					system("pause>0");
					system("cls");
				}	
			};
		}
		else if(a==4)
		{
			strCmp(str1,str2);
			
		}
		else if(a==5)
		{
			exit(1);
		}
		else
		{
			cout<<"Invalid choice.";
			system("pause>0");
			system("cls"); 
		}
	};
} 

int mainMenu()
{
	int choice;
	cout<<"Main menu: "<<endl
		<<"[1] strcat"<<endl
		<<"[2] strcpy"<<endl
		<<"[3] strrev"<<endl
		<<"[4] strcmp"<<endl
		<<"[5] Exit"<<endl
		<<"Choose option: ";
	cin>>choice;
	return choice;
}
