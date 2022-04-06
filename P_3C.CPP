#include<iostream.h>
#include<conio.h>
#include<string.h>
class time{
int hour,min,sec;
public:
time(){
hour=0;
min=0;
sec=0;
}
time(int h, int m, int s){
hour=h;
min=m;
sec=s;
}
void display(){
cout<<hour<<":"<<min<<":"<<sec<<endl;
}
void add(time t1,time t2){
hour=t1.hour+t2.hour;
min=t1.min+t2.min;
sec=t1.sec+t2.sec;
}
};
void main(){
clrscr();
time a(02,01,11),b(04,00,00);
time c;
a.display();
b.display();
c.add(a,b);
c.display();
getch();
}