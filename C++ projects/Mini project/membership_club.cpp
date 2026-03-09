#include <iostream>
using namespace std;
int main () {
 const int ADULT_CHOICE = 01,
        SENIOR_CHOICE = 02,
        CHILD_CHOICD = 03;
        
// Price of these memberships
const double Adult=40.0,
        child = 20.0,
        senior = 30.0;
int choice;
int    months;
 double charges;
 char wish;
do
{
// Display the menu 
cout<<"\n\t\t Health club membership\n\n "
<<"1.Standard Adult Membership\n"
<<"2. Child membership \n"
<<"3. Senior membership \n\n"
<< "Enter your choice: ";
cin>>choice;
while (choice<1|| choice>3){
    cout<<"Invalid choice ";
    cout<<"Enter the valid choice";
    cin>>choice;
}
    cout<<"For how many months: ";
    cin>>months;
switch (choice)
{
case ADULT_CHOICE:
   charges = months * Adult;
    break;
case CHILD_CHOICD:
  charges =  months * child;
    break;
case SENIOR_CHOICE: 
   charges = months * senior;
    break;
default:
    break;
}
cout<<"The total charges is "<< charges<< endl;
cout <<"If you want to get membership again(y/n): ";
cin>>wish;
} while (wish == 'y' );
cout <<"Oki thanks for your time"<<endl;
return 0;
}