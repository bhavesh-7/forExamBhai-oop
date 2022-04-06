#include<iostream.h>
#include<conio.h>
#include<string.h>
class employee{
int eno;
char ename[40];
char dname[40];
float salary;
public:
employee(){
cout<<"enter employee number: ";
cin>>eno;
cin.ignore();
cout<<"enter employee name: ";
cin.getline(ename,40);
cout<<"enter department name: ";
cin.getline(dname,40);
cout<<"enter employee salary: ";
cin>>salary;
}
employee(int e, char en[40],char dn[40],float sal){
eno=e;
strcpy(ename,en);
strcpy(dname,dn);
salary=sal;
}
~employee(){
cout<<"destructor invoked"<<endl;
}
void display(){
cout<<"employee number: "<<eno<<endl;
cout<<"employee name  : "<<ename<<endl;
cout<<"department name: "<<dname<<endl;
cout<<"employee salary: "<<salary<<endl;
}
};
void main(){
clrscr();
employee e1;
employee e2(456,"MANGO","SUZUKI",67000);
e1.display();
e2.display();
getch();
}
