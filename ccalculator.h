//Author: <Egide Capo-chichi>
//Creation: <11.07.2017>

#ifndef CCALCULATOR_H
#define CCALCULATOR_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



//Name: Add
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: x,y)                          02
//02        print [Result: x + y]                03

void add (float x, float y)
{
  float z;


 cout <<fixed << setprecision(3) <<"Result:" << x+y << endl;
}


//Name: Sub
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: x,y)                          02
//02        print [Result: x - y]                03
//03

void sub (float x, float y)
{
  float z;

 cout <<fixed << setprecision(3) <<"Result:" << x-y << endl;
}


//Name: Multi
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01        (start: x,y)                         02
//02         print [Result: x * y]


void multi (float x, float y)
{
  float z;

 cout << fixed << setprecision(3) <<"Result:" << x*y << endl;
}

//Name: Divid
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01        (start: x,y)                         02
//02         print [Result: x / y]               03
//03    print ("Sorry can't do it") if y equal 0

void divid (float x, float y)
{
  /*float z;
cout <<"1. Addition" << endl;
cout <<"2. Subtraction" << endl;
cout <<"3. Multiplication" << endl;
cout <<"4. Division" <<endl;
cout <<"5. Quit" << endl;

 if (z == 4)
 {
   cout << x/y << endl;

 }
 */
  cout << fixed << setprecision(3) <<"Result:" << x/y << endl;
  if ( y == 0)
  {
    cout << "Sorry can't do it" << endl;
  }
}

//Name: Quit
//Return: VOID
//Parameters:float,float
//FlowChart
//Label    Task                                 Goto
//01        (start: z)                         02
//02        print (BYEEEEE)

void quit ()
{
  float z;

cout <<"BYEEEEE" <<endl;

}


//Name: Calculator
//Return: VOID
//Parameters: NONE
//FlowChart
//Label    Task                                             Goto
//01       (start:)                                          02
//02       (float n[2])                                      03
//03       (string choice)                                   04
//04        print(Simple Calculator) + (endl)                05
//05        print(1. Addition) + (endl)                      06
//06        print(2. Subtraction) + (endl)                   07
//07        print(3. Multiplication) + (endl)                08
//08        print(4. Division) + (endl)                      09
//09        print(5.Quit) + (endl)                           10
//10        print(Enter a choice:)                           11
//11        prompt(choice)                                   12
//12        <choice =="1"  or choice == "addition">          13,51
//13        print(endl) + (Enter Operand 1: )                14
//14        prompt(n[1])                                     15
//15        print(Enter Operand 2: )                         16
//16        prompt(n[2])                                     17
//17        Addition(n[1],n[2])                              18
//18        print(endl)                                      19
//19        print(endl)                                      20
//20        SimpleCalculator()                               21
//21        <choice =="2"  or choice == "subtraction">       22,51
//22        print(endl) + (Enter Operand 1: )                23
//23        prompt(n[1])                                     24
//24        print(Enter Operand 2: )                         25
//25        prompt(n[2])                                     26
//26        Subtraction(n[1],n[2])                           27
//27        print(endl)                                      28
//28        print(endl)                                      29
//29        SimpleCalculator()                               30
//30        <choice =="3"  or choice == "multiplication">    31,51
//31        print(endl) + (Enter Operand 1: )                32
//32        prompt(n[1])                                     33
//33        print(Enter Operand 2: )                         34
//34        prompt(n[2])                                     35
//35        Multiplication(n[1],n[2])                        36
//36        print(endl)                                      37
//37        print(endl)                                      38
//38        SimpleCalculator()                               39
//39        <choice =="4"  or choice == "division">          40,51
//40        print(endl) + (Enter Operand 1: )                41
//41        prompt(n[1])                                     42
//42        print(Enter Operand 2: )                         43
//43        prompt(n[2])                                     44
//44        Division(n[1],n[2])                              45
//45        print(endl)                                      46
//46        print(endl)                                      47
//47        SimpleCalculator()                               48
//48        <choice =="5"  or choice == "quit">              49,51
//49        print(EXIT)                                      50
//50        (exit)                                           51
//51        print(endl)                                      52
//52        print(Invalid Search .....) + (endl)             53
//53        print(endl)                                      54
//54        SimpleCalculator()

void calculator()
{
  float x,y;
  float z;

 cout <<"1. Addition" << endl;
 cout <<"2. Subtraction" << endl;
 cout <<"3. Multiplication" << endl;
 cout <<"4. Division" <<endl;
 cout <<"5. Quit" << endl;

 cout << " " << endl;
 cout <<"Enter a number:";
 cin >> z;

 cout <<" " << endl;

 if (z==1)
 {
   cout <<"Enter opt1:";
   cin >> x;
   cout <<"Enter opt2:";
   cin >> y;
   add(x,y);
   calculator();
 }


 else if (z == 2)
 {
   cout <<"Enter opt1:";
   cin >> x;
   cout <<"Enter opt2:";
   cin >> y;
   sub(x,y);
   calculator();
 }

 else if (z == 3)
 {
   cout <<"Enter opt1:";
   cin >> x;
   cout <<"Enter opt2:";
   cin >> y;
   multi(x,y);
   calculator();
 }

 else if (z == 4)
 {
   cout <<"Enter opt1:";
   cin >> x;
   cout <<"Enter opt2:";
   cin >> y;
   divid (x,y);
   calculator();
 }

 else if (z == 5)
 {
   quit();

 }

 else
 {
   cout << "Invalid intput" << endl;
   calculator();
 }
}

#endif
