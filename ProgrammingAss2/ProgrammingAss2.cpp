// ProgrammingAss2.cpp : This file contains the 'main' function. Program execution begins and ends there.

using namespace std;

#include <iostream>
#include "GameManager.h"
#include <cstdlib>
#include <ctime>


GameManager manager;

//Change to Uppercase
//Reference Used: https://www.journaldev.com/36852/string-uppercase-lowercase-c-plus-plus

string ConvertToupper(char* input) {

    for (int x = 0; x < strlen(input); x++) {

      input[x]=toupper(input[x]);

    }
    string returnval = input;
    return returnval;
}

int WordGenerate() {

    int choice;
    string Question;
    string Answer= "";

    //Before the round start
    cout << "Please select how many letters you want to have?\n\n";
    cout << "Enter the number of letters you want to have between '5 min - 13 max'\n\n";


    //Users Choice
    cin >> choice;

    for (int retries = 3; retries > 0; retries--) {
        cout << "\nChoice Input: ";
        cin >> choice;
        if (choice >= 5 && choice <= 13) {
            // Correct Input, set choiceRetries to 0 to end input loop
            retries = 0;
        }
    }

    // Check if we got an input
    if (choice > 4 && choice < 14) {
        // perform actions with correct input


    }

    cout << "You have selected " << choice << "\n";

    //Picks a random Question based on the number chosen
    srand(static_cast<unsigned int>(time(0)));
    int RandomNumber = rand() % 5 + 0;
    Question = manager.GetQuestion(choice, RandomNumber);
    
    cout << "Here is the Anagram, good luck.\n\n";
    cout << Question << "\n";

    
    char input[10];
    cin >> input;
    Answer = ConvertToupper(input);
   
    


    //Correct Answer
    if (Answer == manager.GetAnswer(choice, RandomNumber))
    {
         cout << "Well done that is the correct answer!\n\n";
         return choice;

    }

    //Incorrect Answer
    else 
    {
        cout << "Incorrect Answer, no points awarded!\n\n";
        choice = 0;
        return choice;

    }

}




string GameIntro() {

    string name;

    //Game Intro
    cout << "Hello and Welcome to the Anagram Game!\n";
    cout << "There will be 10 rounds in total!\n";
    cout << "You will get to pick how long you want your word to be!\n";
    cout << "More letters means more score, but you have to get it right to earn score!\n";
    cout << "If you get the answer correct you will earn the word length in points, an incorrect answer means no points.\n\n";


    //User Input Name
    cout << "Before we start please input your name: ";
    cin >> name;

    //Clears the console
    cout << "\x1B[2J\x1B[H";

    cout << "Hello " << name << " Welcome to the Anagram Game!\n\n\n";
    cout << "Let's begin!\n\n";

    return name;

}




int main()
{
    
    bool KeepPlaying = true;
    int CurrRound = 1;
    int Points = 0;
    string name = GameIntro();

    while(KeepPlaying) {
        
        //Round count
        cout << "Round " << CurrRound << "!\n\n";

        //Points awarded depending on how long the word is
        Points = Points + WordGenerate();
        
        //Display current points
        cout << "Current points " << Points << "\n";

        CurrRound++;
        //End of the Game
        if (CurrRound > 10) {
            KeepPlaying = false;

            //Output Message
            cout << "Well done on finishing all the rounds, your overall score was: " << Points << "\n\n";
            cout << "Thank you for playing!";

            
        }

        
    }




    
    


    

   

    


   

    


    }

