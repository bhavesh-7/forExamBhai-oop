#include<iostream.h>
#include<conio.h>
#include<string.h>
class employee{
int eno;
char ename[40];
float salary;
public:
void get(){
cout<<"enter employee name: ";
cin.getline(ename,40);
cout<<"enter employee number: ";
cin>>eno;
cout<<"enter employee salary: ";
cin>>salary;
}
void get(int n,char name[40],float sal){
eno=n;
strcpy(ename,name);
salary=sal;
}
void put(){
cout<<"Employee name   : "<<ename<<endl;
cout<<"Employee number : "<<eno<<endl;
cout<<"Employee salary : "<<salary<<endl;
}
};
void main(){
clrscr();
employee e1;
employee e2;
e1.get();
e1.put();
e2.get(456,"nahi pta bhai",46000);
e2.put();
getch();
}