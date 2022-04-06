#include<iostream.h>
#include<conio.h>
#include<string.h>
class book{
char bname[40],author[40];
float price;
public:
void take(char bnm[40],char auth[40],float p){
strcpy(bname,bnm);
strcpy(author,auth);
price=p;
}
void print(){
cout<<"Book Name   : "<<bname<<endl;
cout<<"Book Author : "<<author<<endl;
cout<<"Book Price  : "<<price<<endl;
}
};
void main(){
clrscr();
book bk;
bk.take("A Book","haha me",67000);
bk.print();
getch();
}