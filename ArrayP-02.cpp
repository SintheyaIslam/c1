#include <iostream>
using namespace std;
int main ()
{
 int arri[4],i,f,sumi=0,muli;
 float arrf[4],sumf=0,avgi=0,avgf=0,mulf;

 for(i=0;i<4;i++)
 {
     cout<<"Enter an integer number"<<i<<endl;
     cin>>arri[i];
     sumi+=arri[i];
     muli*=arri[i];
 }
 for(f=0;f<4;f++)
 {
     cout<<"Enter a float number"<<f<<endl;
     cin>>arrf[f];
     sumf+=arrf[f];
     mulf*=arri[f];
 }
 avgi=sumi/4;
 avgf=sumf/4;
 cout<<"Summation of the 4 integer is:"<<sumi<<endl;
 cout<<"Summation of the 4 float is:"<<sumf<<endl;
 cout<<"Average of 4 int: "<<avgi<<endl;
 cout<<"Average of 4 float: "<<avgf<<endl;
 cout<<"Multiplication  of 4 int: "<<muli<<endl;
 cout<<"Multiplication of 4 float: "<<mulf<<endl;
 return 0;
}
