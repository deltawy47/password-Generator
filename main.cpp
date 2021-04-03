
//password Generator


#include <iostream>
#include <time.h>
#include <random>
using namespace std;
int main()
{

 srand (time(0));
char let[]="qwertyuiopasdfghjklzxcvbnm";

char sym[] ="*&^%$#@!" ;

string pass ;

 int r = rand()%27;
 int length , mount ;
 cout<<"length of your password : "<<endl  ;
 cin>> length;
 cout<<"how many password :  "<<endl  ;
 cin>>mount ;
 for(int i = 0 ; i< mount; i++ )
 {
     r = rand()%27;
for(int j = 0 ;  j <= length ; j++)
{

    pass   = pass + let[r] ;
cout<<pass;
 r = rand()%27;
pass ="";
}
pass ="";
r = rand()%27;
cout<<endl;
 }



}
