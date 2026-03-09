#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int days;
double total= 0.0;
cout<<"How many days of data you want are figruing out: ";
cin>>days;
for (int i = 1; i <=days; i++)
{
    double sales;
    cout<<"Enter the sales per day"<<":";
    cin>>sales;
    total +=sales;
}
 cout<<fixed<<showpoint<<setprecision(2);
 cout<<"The total sales are $ "<<total<<endl;

return 0;


}