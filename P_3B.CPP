#include<iostream.h>
#include<conio.h>
#include<string.h>
class bank{
int accno;
char name[40];
float balance;
static float interst;
public:
bank(int an,char n[40],float bal){
accno=an;
strcpy(name,n);
balance=bal;
}
float ROI(){
float calInterst=balance*(5.6f/100);
return calInterst;
}
void display();
};
float bank::interst=5.6f;
void bank ::display(){
cout<<"Account number : "<<accno<<endl;
cout<<"Customer name  : "<<name<<endl;
cout<<"Balance        : "<<balance<<endl;
cout<<"Interst        : "<<ROI()<<endl;
}
void main(){
clrscr();
bank c1(123,"tempo",56000);
c1.display();
getch();
}