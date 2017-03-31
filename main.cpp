#include <iostream> 
#include <fstream> 
#include <string>
#include <cstdlib> 
#include<cmath>
#include "lab2.h"
using namespace std;


   int main(){
   
    Record rcd;
       
    double a=0;
    double b=0;
    double c=0;

    double s=0;

    double s1=0;
    double s2=0;
    
    ifstream inFile("file.in", ios::in); 
   
    if(!inFile) { 

    cerr << "Failed opening" << endl;  


    exit(1); 

    }

    ofstream outFile("file.out", ios::out);

    if(!outFile) {

    cerr << "Failed opening" << endl;

    exit(1);
   
    }

    inFile >> a;

    inFile >> b;

    inFile >> c;
    rcd.setStart(a,b,c);

    outFile <<b <<" "<< c <<endl;

    
  
    while(inFile >>s){
   
    if(s==0){

    s1=0;
    s2=1;

    }

    else if(s==1){

    s1=1;
    s2=0;

    }

    else{
    s1=0.5;

    s2=0.5;
    
    }
   
    outFile << rcd.getStartA(s1) <<" "<< rcd.getStartB(s2) <<endl;
    a=32;
    b=rcd.getStartA(s1);
    c=rcd.getStartB(s2);
    rcd.setStart(a,b,c);

    
  }  


    
   return 0;


}
