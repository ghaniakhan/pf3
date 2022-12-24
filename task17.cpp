#include<iostream>
using namespace std;
main ()
{
float vegetablepriceperkilogram;
float fruitpriceperkilogram;
int totalkilogramsofvegetables;
int totalkilogramsoffruits;
float totalpriceofvegetables;
float totalpriceoffruits;
float subtotalincoins;
float earningsofharvestsinrupees;
cout<< "enter vegetable price per kilogram :";
cin>> vegetablepriceperkilogram;
cout<< "enter fruit price per kilogram :";
cin>> fruitpriceperkilogram;
cout<< "enter total kilograms of vegetables :";
cin>> totalkilogramsofvegetables;
cout<< "enter total kilograms of fruits :";
cin>> totalkilogramsoffruits;
totalpriceofvegetables= vegetablepriceperkilogram*totalkilogramsofvegetables;
totalpriceoffruits=  fruitpriceperkilogram*totalkilogramsoffruits;
subtotalincoins= totalpriceofvegetables+totalpriceoffruits;
earningsofharvestsinrupees= subtotalincoins/1.94;
cout<< "earnings of harvests in rupees :"<< earningsofharvestsinrupees;
} 
  
 
  
