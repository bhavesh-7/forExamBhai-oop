#include<iostream.h>
#include<conio.h>
#include<string.h>
class department{
char dname[40];
int dept_id;
char mname[40];
public:
department(char dn[40],int did,char mn[40]){
strcpy(dname,dn);
dept_id=did;
strcpy(mname,mn);
}
void display(){
cout<<"Department name : "<<dname<<endl;
cout<<"Department id   : "<<dept_id<<endl;
cout<<"Manager name    : "<<mname<<endl;
}
};
void main(){
clrscr();
department d("SUZUKI",456,"MANGO");
d.display();
getch();
}