#include<iostream.h>
#include<conio.h>
int main() 
{
int array[100], num, i;
clrscr();
cout<<"Enter Any Number Of Array Elements = ";
cin>>num;
cout<<"\nEnter Any " << num << " Array Elements:-\n";
for(i=0; i<num; i++) 
cin>>array[i];
cout<<"\nEntered "<< num << " Array Elements Are:-\n";
for(i=0; i<num; i++) 
cout<<*(array+i)<< "\n";
getch();
return 0;
}
