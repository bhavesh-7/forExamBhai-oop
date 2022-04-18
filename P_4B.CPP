#include<iostream.h>
#include<conio.h>
#include<string.h>
class bank{
public:
char bkname[40],brname[40];
};
class saving:public bank{
public:
float irate;
};
class customer:public saving{
public:
int ano;
char name[40];
customer(){
cout<<"enter bank name: ";
cin.getline(bkname,40);
cout<<"enter branch name: ";
cin.getline(brname,40);
cout<<"enter intrest rate: ";
cin>>irate;
cout<<"enter account number: ";
cin>>ano;
cout<<"enter your name: ";
cin.ignore();
cin.getline(name,40);
}
void display(){
cout<<"bank name: "<<bkname<<endl;
cout<<"branch name: "<<brname<<endl;
cout<<"customer name: "<<name<<endl;
cout<<"account number: "<<ano<<endl;
cout<<"interest rate : "<<irate<<endl;
}
};
void main(){
clrscr();
customer c;
c.display();
getch();
}