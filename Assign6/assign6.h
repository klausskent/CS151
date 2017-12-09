//Name    : Egide Capo-chichi
//Creation: 12/07/2017


#ifndef ASSIGN6_H


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

 using namespace std;


//Name: copy()
//Parameter: string
//Return: void
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: fname)                                                            02
//02      [string line, content]                                                    03
//03      [fstream file(fname)                                                      04
//04      [fstream ffile]                                                           05
//05      file.is_open()                                                          06,13
//06      getline(file, line)                                                       07
//07      content += line + "\n"                                                    08
//08      ffile.open("makeacopyfile.txt", fstream::out)                             09
//09      ffile.is_open()                                                         10,12
//10      ffile(content)                                                            11
//11      ffile.close()                                                            12,07
//12      file.close()                                                              13
//13      exit

  void Copy(string fname)
{
   string line, content;

   ifstream file(fname);

   fstream ffile;

  if (file.is_open())
   {
     while ( getline (file,line) )
     {
     content += line +'\n';  // it appends the line of the content

     ffile.open("makeacopyfile.txt", fstream::out);

     if (ffile.is_open())
     {
      ffile << content;
     }

     ffile.close();

     }

     file.close();
   }
}

// cout << line << '\n'; to display the copy also on the terminal

#endif
