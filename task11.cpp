#include<iostream>
using namespace std;
main ()
{
float initialvelocity;
float acceleration;
float time;
float finalvelocity;
cout<< "enter initialvelocity :";
cin>> initialvelocity;
cout<< "enter acceleration :";
cin>> acceleration;
cout<< "enter time :";
cin>> time;
finalvelocity=(acceleration*time)+initialvelocity;
cout<< " finalvelocity is :" <<finalvelocity;
}