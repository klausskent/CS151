//Assignment:#4
//Author:Egide Capo-chichi
//Version: 4.R
//Description: prompt the user to enter 3 bases
//Date: 11/08/2017

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "assign4.h"


// Name: Main
//Return: 0 when it is successful
//Parameters: x,y,z


int main()
{


  int x, y , z;

   srand( (unsigned)time(0) );

  int ran1 = (rand() % 99 + 1);
  int ran2 = (rand() % 99 + 1);

  cout <<"Enter bases:";
  cin >> x >> y >> z;
  cout << endl;

  cout <<ran1 << " in base "  <<  x << " is:";
  BaseConvert(x , ran1 );
  cout <<endl;

  cout << ran1<< " in base " << y << " is:";
  BaseConvert(y, ran1);
  cout <<endl;

  cout << ran1<<" in base " << z << " is:";
  BaseConvert(z, ran1);

  cout << " " <<endl;

  cout <<ran2 << " in base " << x << " is:";
  BaseConvert(x , ran2 );
  cout <<endl;

  cout << ran2 << " in base " << y << " is:";
  BaseConvert(y, ran2);
  cout <<endl;

  cout << ran2 << " in base " << z << " is:";
  BaseConvert(z, ran2);
  cout <<endl;

  return 0;
}


//Name: Main
 //Return: int
 //Parameters:x,y,z
 //Flowchart:
 //Label                            Task                                      goto
 //01                               (start)                                    02
 //02                               Assignment x,y,z;                          03
 //03                               srand( (unsigned)time(0) );                04
 //04                               int ran1 = (rand() % 99 + 1);              05
 //05                               int ran2 = (rand() % 99 + 1);              06
 //06                               print Enter bases                          07
 //07                               input x,y.z                                08
 //08                               make a space                               09
 //09                               print  ran1 in base  x  is:                10
 //10                               BaseConvert(x , ran1 );                    11
 //11                               print ran1 in base  is:;                   12
 //12                               BaseConvert(y, ran1);                      13
 //13                               make a space                               14
 //14                               print ran1 in base z is:                   15
 //15                               BaseConvert(z, ran1);                      16
 //16                               Make space                                 17
 //17                               print ran2 in base x is:                   18
 //18                               BaseConvert(x , ran2 );                    19
 //19                               Make a space                               20
 //20                               print ran2 in base y is:                   21
 //21                               BaseConvert(y, ran2);                      22
 //22                               Make a space                               23
 //23                               print ran2 in base  z is:                  24
 //24                               BaseConvert(z, ran2);                      25
 //25                               (exit)


 
