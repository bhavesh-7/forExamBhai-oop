#include<iostream.h>
#include<conio.h>
#include<string.h>
class library{
char bknm[40];
int bkid;
float price;
int yr;
public:
library(){               //yeh constructor hai bhai yahan return type nahi aayega.
cout<<"enter book name: ";
cin.getline(bknm,40);
cout<<"enter book id: ";
cin>>bkid;
cout<<"enter book price: ";
cin>>price;
cout<<"enter publication year: ";
cin>>yr;
}
void print(){
cout<<"book name  : "<<bknm<<endl;
cout<<"book id    : "<<bkid<<endl;
cout<<"book price : "<<price<<endl;
cout<<"year of publication : "<<yr<<endl;
}
};
void main(){
clrscr();
library bk;
bk.print();
getch();
}