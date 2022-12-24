#include<iostream>
using namespace std;
main ()
{
int sizeoffertilizerbaginpounds;
int costofbag;
int areainsquarefeetthatcanbecoveredbybag;
int costoffertilizerperpound;
int costoffertilizingtheareapersquarefeet;
cout<< "enter size of fertilizer bag in pounds :";
cin>> sizeoffertilizerbaginpounds;
cout<< "enter cost of bag :";
cin>> costofbag;
cout<< "enter area in square feet that can be covered by bag :";
cin>> areainsquarefeetthatcanbecoveredbybag;
costoffertilizerperpound = costofbag/sizeoffertilizerbaginpounds;
cout<< "cost of fertilizer per pound :"<<costoffertilizerperpound;
costoffertilizingtheareapersquarefeet = costofbag/areainsquarefeetthatcanbecoveredbybag;
cout<< "cost of fertilizing the area per square feet :"<< costoffertilizingtheareapersquarefeet;
}


