#include<iostream.h>
#include<string.h>
#include<conio.h>
class saving{
public:
double srate;
};
class current{
public:
double crate;
};
class recurring{
public:
double rrate;
};
class customer:public saving,public current,public recurring {
public:
float ano;
char name[40];
float bal;
double sirate,cirate,rirate;
void getinfo(){
cout<<"enter your name: ";
cin.getline(name,40);
cout<<"enter your account number: ";
cin>>ano;
cout<<"enter balance: ";
cin>>bal;
srate=2;
crate=3;
rrate=5;
}
void calc(){
sirate=bal+(bal*(srate/100));
cirate=bal+(bal*(crate/100));
rirate=bal+(bal*(rrate/100));
}
void display(){
cout<<"customer name : "<<name<<endl;
cout<<"account number: "<<ano<<endl;
cout<<"balance       : "<<bal<<endl;
cout<<"\n\n";
cout<<"interest rate-savings  : "<<sirate<<endl;
cout<<"interest rate-current  : "<<cirate<<endl;
cout<<"interest rate-recurring: "<<rirate<<endl;
}
};
void main(){
clrscr();
customer x;
x.getinfo();
x.calc();
x.display();
getch();
}









