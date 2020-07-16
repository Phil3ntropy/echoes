/*
 * Echoes.h - Echoes header file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 *
 * Public members:
 *  - showHelp() -> A basic method to display available commands to use with Echoes.
 *  - showInfo() -> A basic method to display informations about Echoes.
 *  - getArg() -> An accessor to get the user input argument.
 *  - getOpt() -> An accessor to get the user input options.
 *  - setupCore() -> A method to install Entropyx Linux core packages in one run.
 *  - isPkgToInstallExists() -> A method to check if a package is available to install.
 *  - isPkgToSearchExists() -> A method to search for a package in the repositories.
 *  
 * Private members:
 *  - echoesVer -> contains current Echoes version.
 *  - name -> contains the name of the software.
 *  - arg -> contains user argument.
 *  - opt -> contains user options.
 * 
 */

#ifndef ECHOES_HEADER
#define ECHOES_HEADER
#include <iostream>
#include <string>

class Echoes 
{
public:
    Echoes(char* argv[]);
    ~Echoes();
    
    void showHelp() const;
    void showInfo() const;
    char* getArg() const;
    char* getOpt() const;
    std::string getEchoesName() const;
    int setupCore();
    bool isPkgToInstallExists();
    bool isPkgToSearchExists();
    
private:
    std::string echoesVer;
    std::string name;
    char* arg;
    char* opt;
};
#endif
