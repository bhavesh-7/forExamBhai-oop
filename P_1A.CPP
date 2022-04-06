#include<iostream.h>
#include<conio.h>
#include<string.h>
class student{
int rollno,marks;
char name[40]; //40 dalna jarury hai nahi toh size 1 char ki hi rahegi.
public:
void accept(){
cout<<"enter your name: ";
cin.getline(name,40);    //space ke saath lene ke liye aur 40 uksi size hai.
cout<<"enter your rollno.: ";
cin>>rollno;
cout<<"enter your marks: ";
cin>>marks;
}
void accept(int r,char n[40],int m){  //yahan bhi 40 dalna hai kyun ki upper bhi 40 hai.
rollno=r;
strcpy(name,n);  //basically name=n; bus yeh char me hai isliye strcpy.
marks=m;
}
void display(){
cout<<"name   : "<<name<<endl;
cout<<"rollno.: "<<rollno<<endl;
cout<<"marks  : "<<marks<<endl;
}
};
void main(){
clrscr();
//yahan jo krna hai woh kro.
student s1;
student s2;
s1.accept();
s1.display();
s2.accept(7,"someone",78);
s2.display();
getch(); //yeh dalna mat bhulna.
}
