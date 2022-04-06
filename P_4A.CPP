#include<iostream.h>
#include<conio.h>
#include<string.h>
class student{
public:
int rollno,std,ttl;
char name[40];
};
class result:public student{
public:
int m1,m2,m3;
result(){
cout<<"enter name: ";
cin.getline(name,40);
cout<<"enter std: ";
cin>>std;
cout<<"enter rollno.: ";
cin>>rollno;
cout<<"enter sub1 marks: ";
cin>>m1;
cout<<"enter sub2 marks: ";
cin>>m2;
cout<<"enter sub3 marks: ";
cin>>m3;
ttl=(m1+m2+m3)/3;
}
void display(){
cout<<"name   : "<<name<<endl;
cout<<"std    : "<<std<<endl;
cout<<"rollno.: "<<rollno<<endl;
cout<<"sub1 mark : "<<m1<<endl;
cout<<"sub2 mark : "<<m2<<endl;
cout<<"sub3 mark : "<<m3<<endl;
cout<<"average   : "<<ttl<<endl;
}
};
void main(){
clrscr();
result r;
r.display();
getch();
}