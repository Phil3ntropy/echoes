/*
 * main.cpp - main file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 */

#include <iostream>
#include <string>
#include "Installer.h"
#include "Echoes.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Initializing echoes Echoes object
    Echoes *echoes = new Echoes(argv);
    Installer *eInstall = new Installer;
    
    // Get the name of the program
    string pkgName = echoes->getEchoesName();
    
    /* Basic debug string used during development. 
     * Uncomment to use this input.*/
    //cout << "DEBUG ARGS -> " << argc << endl;
    //*/
    
    // Get the arguments to run.
    string argument = "";
    string option = "";
    
    // Checking if argc values are correct.
    if (argc == 1)
    {
        cerr << "Erreur: " << pkgName << " needs arguments" << endl;
        echoes->showHelp();
        return -1;
    }
    else if (argc == 2)
    {
        argument = echoes->getArg();
        
        // Checking values of argument input.
        if(argument == "info")
            echoes->showInfo();
        else if(argument == "help")
            echoes->showHelp();
        else if (argument == "installcore")
            //echoes->setupCore();
            echoes->showInfo();
        else
        {
            cerr << "Erreur: Invalid input" << endl;
            echoes->showHelp();
        }
    }
    else if (argc >= 3)
    {
        // Get the options to eventually run.
        argument = echoes->getArg();
        option = echoes->getOpt();
        if(option == "")
        {
            cerr << "Error: invalid option" << endl;
            return -1;
        }
        /* Basic debug string used during development. 
         * Uncomment to use this input.*/
        else
        {
            //cout << "DEBUG OPTION : " << option << endl;
            
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
            
            if (argument == "install")
            {
                if(getuid() != 0)
                    cout << "This option need root permissions. Use su or sudo." << endl;
                else
                {
                    if(option != "")
                    {
                        //cout << "INSTALL EXIST " << endl;
                        eInstall->installPkg(option);                    
                    }
                    else
                    {
                        cerr << "Erreur 1" << endl;
                        return -1;
                    }
                }
            }
            else if (argument == "search")
            {
                if(option != "")
                {
                    //cout << "SEARCH EXIST " << endl;
                    eInstall->searchPkg(option);
                }
                else
                {
                    cerr << "Erreur 2" << endl;
                    return -1;
                }
            }
            else if (argument == "check-pkg")
            {
                //echoes->checkEchoesPkg(option);
            }
            else 
            {
                cerr << "Error: Invalid input" << endl;
                echoes->showHelp();
            }
        }
    }
    else if (argc >= 4)
    {
        cerr << "Error: Too much arguments for " << pkgName << endl;
        return -1;
    }
        
    // Freeing memory and deleting pointer.
    delete echoes;
    echoes = 0;
    
    // End of Echoes :D
    return 0;
}
