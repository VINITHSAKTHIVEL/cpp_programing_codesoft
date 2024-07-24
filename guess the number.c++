#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 //int choicesLeft ;
int main()
{

    cout << "\n*Welcome to Guess The Number game*\n\n";
    cout<<"\t\t\t\t\t\t  Powerd by SMILE :) ";
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;
        int level;
        int choicesLeft ;
        int ch_left;
        // int choicesLeft ;
    cout<< "\n\n\t   ----------Levels of the GAME---------- \n\n"
        << "\tEasy : 1\t\tMedium : 2\t\tHard : 3"<<endl;
        cout<<"\n* * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<< "\nEnter a level : ";
    cin>>level;
    if(level==1)
    {
       ch_left=10; 
    }
     else if(level==2)
    {
       ch_left=7; 
    }
     else if(level==3)
    {
       ch_left=5; 
    }
    else
    {
        cout<<"\nChoose a Valid Level:("<<endl;
    }
    choicesLeft=ch_left;
cout<<"\nYou Choose a Level : "<<level<<"\n\nSo You Have "<<choicesLeft<<" ChoicesLeft Only, Mind It !!!";
            for (int i = 1; i <= ch_left ; i++) {
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout<<" choices left is  "<<choicesLeft<<endl;
                  
                       
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have choosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;

                }
            
                                if (choicesLeft == 0) {
                        cout << " \n\n You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", \n You lose!!\n Don't worry, you done a great job*.\n Victory is an destination. But defeat is an journey..\n\n* * * * * * * * * * Restart The Game * * * * * * * * * * ";
                       
                        
                    }
            }
            
       if(level==3)
        {
         if(choicesLeft == 4)
            {
            cout << " \nOh!!! you done a great job\n either luck or your geussing is good\n"
                 << endl;
             }
               else if(choicesLeft ==3 ||choicesLeft ==2 )
            {
            cout << " \nVictory is sweet"
                 << endl;
             }
       else if(choicesLeft ==1)
            {
            cout << " \nNice, GOOD JOB"
                 << endl;
             }
        }
          if(level==1) 
          {
              if(choicesLeft ==9 ||choicesLeft ==8)
            {
            cout << " \nOh!!! you done a great job\n either luck or your geussing is good\n"
                 << endl;
             }
               else if(choicesLeft ==7 ||choicesLeft ==6 ||choicesLeft ==5)
            {
            cout << " \nVictory is sweet"
                 << endl;
             }
              else if(choicesLeft >=1 &&choicesLeft <=4 )
            {
            cout << " \nNice, GOOD JOB"
                 << endl;
            }
          }
        if(level==2)
        {
         if(choicesLeft == 6 || choicesLeft ==5)
            {
            cout << " \nOh!!! you done a great job\n either luck or your geussing is good\n"
                 << endl;
             }
               else if(choicesLeft ==3||choicesLeft ==4 )
            {
            cout << " \nVictory is sweet"
                 << endl;
             }
       else if(choicesLeft ==1||choicesLeft ==2)
            {
            cout << " \nNice, GOOD JOB"
                 << endl;
             }
        }
    
    return 0;
}
