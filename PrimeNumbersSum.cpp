#include<iostream.h>
#include<conio.h>
int func(int num) 
{
int i;
int flag = 1;
for(i = 2; i <= num/2; i++)
{
if(num % i == 0) 
{
flag = 0;
break;
}
}
return flag;
}
int main() 
{
int num, i;
clrscr();
cout<<"Enter Any Number For Performing Sum Of Two Prime Numbers = \n";
cin>>num;
for(i = 2; i <= num/2; i++)
{
if (func(i)) 
{
if (func(num - i)) 
{
cout << num << " = " << i << " + " << num-i << endl;
}
}
}
getch();
return 0;
}
