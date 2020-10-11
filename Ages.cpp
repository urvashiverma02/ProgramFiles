#include<iostream.h>
#include<conio.h>
int main() 
{
int age;
clrscr();
cout<<"Enter Your Any Age = ";
cin>>age;
if(age < 0) 
{
cout<<"Sorry!!! Age Can Never Be Negative. Please Enter Any Valid Age.";
}
else if(age == 0) 
{
cout<<"Sorry!!! Age Can Never Be Zero. Please Enter Any Valid Age.";
}
else if(age > 0 && age < 13) 
{
cout<<"Sorry!!! You Are Not Eligible For Voting Or You Are Not Mature Because You Are A Child.";
cout<<"\nWait " << 18 - age << " Year(s) For Voting.";
}
else if(age >= 13 && age < 18) 
{
cout<<"Sorry!!! You Are Not Eligible For Voting Or You Are Not Mature Because You Are A Teenager.";
cout<<"\nWait " << 18 - age << " Year(s) For Voting.";
}
else if(age > 17 && age <= 100) 
{
cout<<"Congratulations!!! You Are Eligible For Voting Or You Are Mature.";
}
else
{
cout<<"Congratulations!!! You Are Eligible For Voting But We Suggest You To Take Rest Because Of Your Old Age.";
}
getch();
return 0;
}
