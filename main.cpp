#include <iostream>
#include <iomanip>
#include "pokemonparty.h"
#include "items.h"
#include "badgecase.h"
#include <string>
using namespace std;

int main()
{
    string type;
    char choice;
    Pokedex pokemon;                                //Creates an object which will add all pokemon to the pokedex
    int party[12];                                  //an array of ints to store party pokemon's numbers and their levels
    for(int c = 0; c < 6; c++) { party[c] = 0; }    //initializes the int array

    while(true){                                     //menu
        cout << "\t\tPokemon Menu: \n";
        cout << "(A) Pokedex\n";
        cout << "(B) Pokemon\n";
        cout << "(C) Bag\n";
        cout << "(D) Badge Case \n";
        cout << "(E) Type Search \n";
        cout << "(F) Exit \n";
        cout << "Enter choice A, B, C, D, E, or F: \n";
        
        cin >> choice;                              //receives users selection
        cin.ignore();                               //Skips the newline character
        
        switch (choice){
            case 'a':
            case 'A': pokemon.showPokes();          //Function to display all Pokemon in the pokedex
                    break;
            case 'b':
            case 'B': pokemonparty(party);          //Function to display the 6 Pokemon in our party
                    break;
            case 'c':
            case 'C': items();                      //Function to display our items
                    break;
            case 'd':
            case 'D': showBadges();                 //Function to display our badges
                    break;
            case 'e':
            case 'E':
                cout << "Enter type you would like to search for." << endl;
                cin >> type;
                pokemon.printType(type);
                cin.ignore();
                    break;
            case 'f':
            case 'F': cout << "Goodbye! \n";        //Exit
                    return 0;
            default : cout << "Invalid, please enter A, B, C, D, E, or F!\n";
        }
    }
    return 0;
}
