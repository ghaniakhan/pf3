#include<iostream>
using namespace std;
main ()
{
string name;
float matricmarks;
float fscmarks;
float ecatmarks;
float matricaggregate;
float fscaggregate;
float ecataggregate;
float totalaggregate;
cout<< "enter your name :";
cin>> name;
cout<< "enter matricmarks out of 1100 :";
cin>> matricmarks;
cout<< "enter fscmarks out of 550 :";
cin>> fscmarks;
cout<< "ecatmarks out of 400 :";
cin>> ecatmarks;
matricaggregate=((matricmarks/1100)*100);
fscaggregate=((fscmarks/550)*100);
ecataggregate=((ecatmarks/400)*100);
totalaggregate=0.40*fscaggregate+0.10*matricaggregate+0.50*ecataggregate;
cout<< "totalaggregate is  :"<< totalaggregate;
}

