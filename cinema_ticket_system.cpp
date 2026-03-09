#include <iostream>

using namespace std;

int main() {

   int age;
   int pay;
   int totalPay=0;
   int minAge=1000000000;
   int maxAge=0;
   int kid=0;

   
   for (int i=1;i<=5;i++){
    cout<<"Enter "<<i<<". customer age: ";
    cin>>age;

    if(age<18){
        pay=50;
        kid++;

    }
    else if(age>65){
        pay=30;
    }
    else
    pay=100;

    if(age>maxAge){
        maxAge=age;
    }
    if(age<minAge){
        minAge=age;
    }

    totalPay= totalPay + pay;


   }

   cout<< "Total Money: "<< totalPay<<endl;
   cout<< "Minimum Age: "<< minAge<<endl;
   cout<< "Maximum Age: "<< maxAge<<endl;
   cout<< "Child Count: "<< kid;

    return 0;
}
