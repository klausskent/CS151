//Name    : Egide Capo-chichi
//Creation: 12/07/2017
//Version : v1
//Description:


#include <iostream>
#include "assign7.h"

//Flowchart:
//Label          Task                                                           Goto
//01             (start)                                                         02
//02             [int dat[10],size=10,num1,num2]                                 03
//03             print(Enter two differents numbers: )                           04
//04             prompt(num1,num2)                                               05
//05             print space                                                     06
//06             print(Random Numbers)                                           07
//07             RandomNumber(data,size,nm1,num2)                                08
//08             PrintArray(data,size)                                           09
//09             print space                                                     10
//10             print(Decending Numbers)                                        11
//11             sort(data,size)                                                 12
//12             PrintArray(data,size)                                           13
//13             exit:0

int main()
{
  int data[10] ,size =10,num1 ,num2 ;

  cout <<"Enter two differents numbers:";
  cin >>num1 >> num2;

  cout <<endl;


  cout << "RandomNumbers\n";
  RandomNumbers (data,size,num1,num2);
  PrintArray(data,size);


  cout <<endl;

  cout << "\nDecending Numbers" << endl;
  Sort(data,size);
  PrintArray(data,size);



  return 0;
}
