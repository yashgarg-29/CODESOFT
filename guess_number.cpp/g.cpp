#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// int random=offset+(rand()% range);

int main()
{

  cout << "\n\t\t\tWelcome To Guess TheNumber game!" << endl;
  cout << " you have to guess a number between 1and 100.you'll have limited choices based on the level you choose.Good LUCK!" << endl;
  while (true)
  {
    cout << "\n enter the difficulty level:\n";
    cout << "1 for easy!\t";
    cout << "2 for medium!\t";
    cout << "3 for difficult!\t";
    cout << "4 for ending the game!\n"
         << endl;
    int difficultychoice;
    cout << "enter the number:";
    cin >> difficultychoice;

    srand(time(0));
    int secretnumber = 1 + (rand() % 100);
    int playerchoice;

    if (difficultychoice == 1)
    {
      cout << "\nyou have 10 choices for finding the secret number which lies between 1 and 100.";
      // int choiceleft = 10;
    //   for (int i = 1; i <= 10; i++)
    //   {
    //     cout << "\n\nEnter the number:";
    //     cin >> playerchoice;
    //     if (playerchoice == secretnumber)
    //     {
    //       cout << "well played!you won," << playerchoice << "is the secret number." << endl;
    //       cout << "\t\t\t thank sfor playing...." << endl;
    //       cout << "play the game again with us!!\n\n"
    //            << endl;
    //       break;
    //     }
    //     else
    //     {
    //       cout << "nope," << playerchoice << "is not the right number\n";

    //       if (playerchoice > secretnumber)
    //       {
    //         cout << "the secret number is smaller than the number you have chosen" << endl;
    //       }
    //       else
    //       {
    //         cout << "the secret number is greater than the number you have chosen" << endl;
    //       }
    //       choiceleft--;
    //       cout << choiceleft << "choices left." << endl;
    //       if (choiceleft == 0)
    //       {
    //         cout << "you couldn't find the secret number,it was" << secretnumber << ",you lose!!\n\n";
    //         cout << " play the gam agin to win!!\n\n";
    //       }
    //     }
    //   }
    // }
    // int choiceleft = 10;
    // for (int i = 1; i <= 10; i++)
    // {
    //   cout << "\n\nEnter the number: ";
    //   cin >> playerchoice;

    //   if (playerchoice == secretnumber)
    //   {
    //     cout << "Well played! You won, " << playerchoice << " is the secret number." << endl;
    //     cout << "\t\t\tThanks for playing...." << endl;
    //     cout << "Play the game again with us!!\n\n"
    //          << endl;
    //     break;
    //   }
    //   else
    //   {
    //     cout << "Nope, " << playerchoice << " is not the right number\n";
    //     if (playerchoice > secretnumber)
    //     {
    //       cout << "The secret number is smaller than the number you have chosen" << endl;
    //     }
    //     else
    //     {
    //       cout << "The secret number is greater than the number you have chosen" << endl;
    //     }
    //     choiceleft--;
    //     cout << choiceleft << " choices left." << endl;
    //   }
    // }

    // if (choiceleft == 0)
    // {
    //   cout << "You couldn't find the secret number, it was " << secretnumber << ", you lose!!\n\n";
    //   cout << "Play the game again to win!!\n\n";
    // }
    }
    else if (difficultychoice == 2)
    {
      cout << "\nyou have 7 choices for finding the secret number between 1and 100.";
      int choiceleft = 7;
      for (int i = 1; i < 7; i++)
      {
        cout << "\n\nEnter the number:";
        cin >> playerchoice;
        if (playerchoice == secretnumber)
        {
          cout << "well played!you won," << playerchoice << "is the secret number." << endl;
          cout << "\t\t\t thank sfor playing...." << endl;
          cout << "play the game again with us!!\n\n"
               << endl;
          break;
        }
        else
        {
          cout << "nope," << playerchoice << "is not the right number\n";

          if (playerchoice > secretnumber)
          {
            cout << "the secret number is smaller than the number you have chosen" << endl;
          }
          else
          {
            cout << "the secret number is greater than the number you have chosen" << endl;
          }
          choiceleft--;
          cout << choiceleft << "choices left." << endl;
          if (choiceleft == 0)
          {
            cout << "you couldn't find the secret number,it was" << secretnumber << ",you lose!!\n\n";
            cout << " play the gam agin to win!!\n\n";
          }
        }
      }
    }
    else if (difficultychoice == 3)
    {
      cout << "\nope you have 5 choices for finding the secret number between 1and 100.";
      int choiceleft = 5;
      for (int i = 1; i < 5; i++)
      {
        cout << "\n\nEnter the number:";
        cin >> playerchoice;
        if (playerchoice == secretnumber)
        {
          cout << "well played!you won," << playerchoice << "is the secret number." << endl;
          cout << "\t\t\t thank sfor playing...." << endl;
          cout << "play the game again with us!!\n\n"
               << endl;
          break;
        }
        else
        {
          cout << "nope," << playerchoice << "is not the right number\n";

          if (playerchoice > secretnumber)
          {
            cout << "the secret number is smaller than the number you have chosen" << endl;
          }
          else
          {
            cout << "the secret number is greater than the number you have chosen" << endl;
          }
          choiceleft--;
          cout << choiceleft << "choices left." << endl;
          if (choiceleft == 0)
          {
            cout << "you couldn't find the secret number,it was" << secretnumber << ",you lose!!\n\n";
            cout << " play the gam agin to win!!\n\n";
          }
        }
      }
    }
    else if (difficultychoice == 4)
    {
      exit(0);
    }
    else
    {
      cout << "wrong choice,enter valid choice to play the game!(1,2,3,4)" << endl;
    }
  }
  return 0;
}















