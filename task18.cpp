#include<iostream>
using namespace std;
main ()
{
int megabytes;
float kilobytes;
float bytes;
float bits;
cout<< "enter megabytes :";
cin>> megabytes;
megabytes= 1024*megabytes;
kilobytes= 1024*megabytes;
bytes= 1024*kilobytes;
bits= 8*bytes;
cout<< "bits :" << bits;
}





