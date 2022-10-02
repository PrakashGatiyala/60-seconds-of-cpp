---
title: Number Guessing
tags: Game, Input
expertise: intermediate
---

- Randomly generates a number between 1 and 100.
- Asks the user to guess the number.
- If the user's guess is higher than the number, it will display "Lower number please!".
- If the user's guess is lower than the number, it will display "Higher number please!".
- If the user guesses the correct number, it will display the number of attempts he took to guess the number.

```cpp

#include <iostream>                                     // for cout and cin
#include <cstdlib>                                      // for rand() and srand()
#include <ctime>                                        // for time()
using namespace std;                                    // for cout and cin

int main()                                              // main function
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;                          //generates a random number between 1 and 100
                                                        // cout << "The number is " << number << endl;
                                                        //keep running the loop until the number is guessed
    do
    {
        cout << "Guess the number between 1 to 100" << endl; // ask user to guess the number
        cin >> guess;                                        // take user input
        if (guess > number) 
        {
            cout << "Lower number please!" << endl;         // tell user to guess a lower number
        }
        else if (guess < number)
        {
            cout << "Higher number please!" << endl;        // tell user to guess a higher number
        }
        else
        {
            cout << "You guessed it in " << nguesses << " attempts" << endl; // tell user how many attempts he took to guess the number
        }
        nguesses++;
    } while (guess != number);                                // loop will run until the number is guessed

    return 0;                                                 // return 0 to the operating system
}
```
