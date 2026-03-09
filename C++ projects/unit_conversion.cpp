#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    const int start = 60,
            stop = 130,
            increment = 10;
            int kph;
            double mph;
            const double conversion_conversion=0.6214;
            cout<<fixed<<showpoint <<setprecision(1);
            // Display the table
            cout<<"KPH\tMPH\n";
            cout<<"------------\n";
            for (kph = start; kph <=stop;  kph +=increment)
            {
                mph = kph * conversion_conversion;
                cout<<kph<<"\t"<<mph<<endl;
            }
            return 0;
}