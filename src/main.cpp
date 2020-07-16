/*
 * main.cpp - main file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 */

#include <iostream>
#include <string>
#include "Echoes.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Initializing echoes Echoes object
    Echoes *echoes = new Echoes(argv);
    string option = "";
    
    // Get the name of the program
    string pkgName = echoes->getEchoesName();
    
    /* Basic debug string used during development. 
     * Uncomment to use this input.
    cout << "DEBUG ARGS -> " << argc << endl;
    */
    
    // Checking if argc values are correct.
    if (argc == 1)
    {
        cerr << "Erreur: " << pkgName << " needs arguments" << endl;
        echoes->showHelp();
        return -1;
    }
    else if (argc >= 3)
    {
        // Get the options to eventually run.
        option = echoes->getOpt();
        if(option == "")
        {
            cerr << "Error: invalid option" << endl;
            return -1;
        }
        /* Basic debug string used during development. 
         * Uncomment to use this input.
        else
        {
            cout << "DEBUG OPTION : " << option << endl;
        }*/
    }
    else 
    {
        // Get the arguments to run.
        string argument = echoes->getArg();
        if(argument == "")
        {
            cerr << "Error: invalid arg" << endl;
            return -1;
        }
        /* Basic debug string used during development. 
         * Uncomment to use this input.
        else
        {
            cout << "DEBUG ARGUMENT : " << argument << endl;
        }
        */
        
        // Checking values of argument input.
        if(argument == "info")
        {
            echoes->showInfo();
        }
        else if(argument == "help")
            echoes->showHelp();
        else if (argument == "installcore")
        {
            echoes->setupCore();
        }
        else if (argument == "install")
        {
            if(option != "")
            {
                cout << "INSTALL EXIST ?" << endl;
                echoes->isPkgToInstallExists();
            }
            else
            {
                cerr << "Erreur 1" << endl;
                return -1;
            }
        }
        else if (argument == "search")
        {
            if(option != "")
            {
                cout << "SEARCH EXIST ?" << endl;
                echoes->isPkgToSearchExists();
            }
            else
            {
                cerr << "Erreur 2" << endl;
                return -1;
            }
        }
        else 
            echoes->showHelp();
    }
    
    // Freeing memory and deleting pointer.
    delete echoes;
    echoes = 0;
    
    // End of Echoes :D
    return 0;
}
