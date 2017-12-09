//Name    : Egide Capo-chichi
//Creation: 12/07/207
//Version : v1
//Description: make a copy of a file to a new file

#include <iostream>
#include <string>

#include "assign6.h"

using namespace std;


//Flowchart:
//Label          Task                                                                                   Goto
//01             (start)                                                                                 02
//02             string name                                                                             03
//03             display (Enter the file to copy: )                                                      04
//04             prompt user to enter the name                                                           05
//05             copy(name)                                                                              06
//06             exit:0


int main()
{

  string name;

  cout << "Enter the file to copy: ";
  cin >> name;

  Copy(name);

  return 0;
}
