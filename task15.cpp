#include<iostream>
using namespace std;
main ()
{
string moviename;
int adultticketprice;
int childticketprice;
int noofadultticketsold;
int noofchildticketsold;
float percentageamounttobedonatedtocharity;
int totaladultticketprice;
int totalchildticketprice;
int totalamountgenerated;
int amountafterdonation;
cout<< "enter movie name :";
cin>> moviename;
cout<< "enter adult ticket price :";
cin>> adultticketprice;
cout<< "enter child ticket price :";
cin>> childticketprice; 
cout<< "enter no of adult ticket sold :";
cin>> noofadultticketsold; 
cout<< "enter no of child ticket sold :";
cin>> noofchildticketsold;
cout<< "enter percentage amount to be donated to charity :";
cin>>  percentageamounttobedonatedtocharity; 
totaladultticketprice= adultticketprice*noofadultticketsold;
totalchildticketprice= childticketprice*noofchildticketsold;
totalamountgenerated= totaladultticketprice+totalchildticketprice;
cout<< "total amount generated :"<<  totalamountgenerated;
amountafterdonation= (totalamountgenerated)-((percentageamounttobedonatedtocharity/100)*(totalamountgenerated));
cout<< "amountafterdonation :"<< amountafterdonation;
}
 
 
