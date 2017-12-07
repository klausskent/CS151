//Name: Egide Capo-chichi
 //Creation: 11/25/2017
 //Version: 5.R
 //Description: Take three inputs from the user


 #ifndef GUESS_H
 #define GUESS_H


 //Name: GuessNumber()
 //Paramter(s): int  min, max, limit, list(egide_log) ;
 //Returns: none
 //Label   Task                                                              Goto
 //01      (start: min,max,limit,egide_log)                                  02
 //02      srand( (unsigned)time(0) )                                        03
 //03      stating randomNum, (rand() % (max - min) + min) randomNum         04
 //04      stating randomNum, (rand() % (max + min)  randomNum               05
 //05      declaring guess                                                   06
 //06      declaring i, m, n                                                 07
 //07       limit == 0                                                       08
 //08      display "You don't even want to try?\n"                           09
 //09      display "Well then, my number was "                               10
 //10      dispaly randomNum,  << endl;                                      11
 //11      limit == 1 >                                                      12
 //12      display  "Guess my number: "                                      13
 //13      input  guess                                                      14
 //14      guess  guesslog[0] ]                                              15
 //15      guess == randomNum                                                16
 //16      display "You got it!" << endl;                                    17
 //17      display "Your guess was ["                                        18
 //18      display  guess, "] << endl;                                       19
 //19      guess != randomNum                                                20
 //20      display "You didn't guess my number!" << endl;                    21
 //21      display "Your guess was ["                                        22
 //22      display  guess, "]                                                23
 //23      display "My number was ", randomNum, " << endl;                   24
 //24      while (i < limit - 1) >                                           25
 //25      i == 0                                                            26
 //26      display "Guess my number: "                                       27
 //27      input  guess                                                      28
 //28      guess == randomNum                                                29
 //29      guess  egide_log[i]]                                              30
 //30      display  "You got it!" << endl;                                   31
 //31      display  "Your guesses were ["                                    32
 //32      while m < i                                                       33
 //33      display  egide_log[m], ","                                        34
 //34      m++                                                               35
 //35      display guess                                                     36
 //36      display  "]"  << endl;                                            37
 //37      guess != randomNum                                                38
 //38      guess  egide_log[i]]                                              39
 //39      display "Incorrect. Guess Again:"                                 40
 //40      input guess                                                       41
 //41      i++                                                               42
 //42      i == limit - 1                                                    43
 //43      display  "You didn't guess my number!" << endl;                   44
 //44      display  "Your guesses were ["                                    45
 //45      while (n < i)                                                     46
 //46      display  egide_log[n], ","                                        47
 //47      n++                                                               48
 //48      display  (guess)                                                  49
 //49      display  "]\n"                                                    50
 //50      display "My number was ", randomNum  << endl;                     51
 //51      (exit)

 void GuessNumber(int min, int max, int limit, int egide_log[])
 {
   srand( (unsigned)time(0) );

   int randomNum = (rand() % max + min);
   int guess;
   int i = 0, m = 0, n = 0;

   if (limit == 0)
   {
     cout << "You don't even want to try?" << endl;
     cout << "Well then, my number was ";
     cout << randomNum << endl;
     return;
   }

   if (limit == 1)
   {
     cout << "Guess my number: ";
     cin >> guess;
     egide_log[0] = guess;
     if (guess == randomNum)
     {
       cout << "You got it!\n";
       cout << "Your guess was [";
       cout << guess << "]" << endl;
     }
     else if (guess != randomNum)
     {
       cout << "You didn't guess my number!\n";
       cout << "Your guess was [";
       cout << guess << "]\n";
       cout << "My number was " << randomNum << endl;
     }
     return;
   }

   while (i < limit - 1)
   {
     if (i == 0)
     {
       cout << "Guess my number: ";
       cin >> guess;
     }

     if (guess == randomNum)
     {
       egide_log[i] = guess;
       cout << "You got it!" << endl;
       cout << "Your guesses were [ ";

         while (m < i)
         {
           cout << egide_log[m] << ",";
           m++;
         }
        cout << guess;
        cout << "]\n";
        break;
     }

     else if (guess != randomNum)
     {

         egide_log[i] = guess;
         cout << "Incorrect. Guess Again: ";
         cin >> guess;
       }
       i++;
     }

     if (i == limit - 1)
     {
       cout << "You didn't guess my number!\n";
       cout << "Your guesses were [";

        while (n < i)
        {
           cout << egide_log[n] << ",";
           n++;
         }
       cout << guess;
       cout << "]\n";
       cout << "My number was " << randomNum << endl;
     }
  }

 #endif
