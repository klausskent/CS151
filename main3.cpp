//Assignment:#3
//Author:Egide Capo-chichi
//Description: prompt the user to enter 5 numbers and display the maximum,the 3rd quartile, the median , the 1st quartile , the minimum
// Date: 11/08/2017

#include <iostream>
#include <string>

#include "assign3.h"


// Name: Main
//Return: 0 when it is successful
//Parameters: x,y,z,w,v


int main()
{


  float x, y , z , w, v;

  cout <<"Enter numbers:";
  cin >> x >> y >> z >> w >> v;
  cout <<" " << endl;

  cout <<fixed <<setprecision(1) <<"The maximum is :" <<maximum(x,y,z,w,v) << endl;

  cout <<fixed <<setprecision(1) << "The third quartile is :" << thirdQuartile(x,y,z,w,v) << endl;

  cout <<fixed <<setprecision(1) <<"The median is :" << median(x,y,z,w,v) << endl;

  cout <<fixed <<setprecision(1) <<"The first quartile is : "<< firstQuartile(x,y,z,w,v) << endl;

  cout <<fixed <<setprecision(1) <<"The minimum is :" << minimum(x,y,z,w,v) <<endl;

  return 0;
}


//Name: Main
 //Return: int
 //Parameters:x,y,z,w,v
 //Flowchart:
 //Label                            Task                                      goto
 //01                               (start)                                   02
 //02                               Assignment x,y,z,w,z;                     03
 //03                               print (Enter a number:)                   04
 //04                               input x,y,z,w,v                           05
 //05                               make a space                              06
 //06                               print the maximum value                   07
 //07                               print the third quartile value            08
 //08                               print the median value                    09
 //09                               print the first quartile                  10
 //10                               print minimum value                       11
 //11                               (exit:0)                         
