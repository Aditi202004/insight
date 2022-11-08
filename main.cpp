#include <iostream>
#include <cmath>
using namespace std;

int fac(int n){
if (n== 1 || n==0) { return 1;}
return n* fac(n-1) ;

}




int main()

{   string choice;
    cout<< "Do you want to do arithmetic operations or trigonometric functions?";
    cin>> choice;



    if (choice == "arithmetic"){double num1;
    double num2;
    double ans;
    string op;

   cout<< "Enter first number: ";
   cin>> num1;
   cout<< "Enter operator: ";
   cin>> op;
   cout<< "Enter second number: ";
   cin>> num2;

   if(op== "+") {
    ans= num1 + num2 ;
   }
   else if(op== "-") {
    ans= num1 - num2 ;
   }else if(op== "*" || op=="x" || op=="X") {
    ans= num1 * num2 ;
   }else if(op== "/") {
    ans= num1 / num2 ;
   }
    cout<< ans;

}


else if(choice=="trigonometric"){


    string func;
    string angletype;
    double angle;
    double x;
    double ans;



    cout<< "Do you want to enter your angle in degrees or radians?";
    cin>> angletype;

    if (angletype=="degrees" or angletype== "deg") {

      cout<< "Enter your angle in degrees: ";
      cin>> angle;
      x = 3.1415926535897932384626433832795 * angle / 180 ;
      cout << "Enter a trigonometric function (sin/cos/tan):  ";
    cin>> func;

    if (func== "sin"){
            ans = x - (x*x*x)/fac(3) + (x*x*x*x*x)/fac(5) - (x*x*x*x*x*x*x)/fac(7) + (x*x*x*x*x*x*x*x*x)/fac(9) ;}

    if (func== "cos"){
            ans = 1 - (x*x)/fac(2) + (x*x*x*x)/fac(4) - (x*x*x*x*x*x)/fac(6) + (x*x*x*x*x*x*x*x)/fac(8) ;}

            if (func== "tan"){if (x==90 || x==270){ans=00;}
                else {ans = x + (x*x*x)/3 + (2*x*x*x*x*x)/15 + (17*x*x*x*x*x*x*x)/315 + (62*x*x*x*x*x*x*x*x*x)/2835;};
                }
    cout<< ans;}


    if (angletype == "radians" || angletype == "rad"){

       cout<< "Enter your angle in radians: ";
      cin>> angle;
      x=angle;
      cout << "Enter a trigonometric function (sin/cos/tan):  ";
    cin>> func;

    if (func== "sin"){
            ans = x - (x*x*x)/fac(3) + (x*x*x*x*x)/fac(5) - (x*x*x*x*x*x*x)/fac(7) + (x*x*x*x*x*x*x*x*x)/fac(9) ;}

    if (func== "cos"){
            ans = 1 - (x*x)/fac(2) + (x*x*x*x)/fac(4) - (x*x*x*x*x*x)/fac(6) + (x*x*x*x*x*x*x*x)/fac(8) ;}

            if (func== "tan"){
                ans = x + (x*x*x)/3 + (2*x*x*x*x*x)/15 + (17*x*x*x*x*x*x*x)/315 + (62*x*x*x*x*x*x*x*x*x)/2835 ;}
    cout<< ans;}



}



    return 0;

}
