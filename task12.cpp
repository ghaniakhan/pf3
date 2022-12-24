#include<iostream>
using namespace std;
main ()
{
string name;
float subject1marks;
float subject2marks;
float subject3marks;
float subject4marks;
float subject5marks;
float sum;
float percentage;
cout<< "enter your name :";
cin>> name;
cout<< "enter subject1marks :";
cin>> subject1marks;
cout<< "enter subject2marks :";
cin>> subject2marks;
cout<< "enter subject3marks :";
cin>> subject3marks;
cout<< "enter subject4marks :";
cin>> subject4marks;
cout<< "enter subject5marks :";
cin>> subject5marks;
sum=subject1marks+subject2marks+subject3marks+subject4marks+subject5marks;
percentage=(sum/500)*100;
cout<< "percentage is :"<< percentage;
}

