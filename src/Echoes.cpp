/*
 * Echoes.cpp - Echoes class file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 *
 */

#include "Echoes.h"

using namespace std;

Echoes::Echoes(char* argv[])
{
    // Initializing private members used by Echoes.
    arg = argv[1];
    opt = argv[2];
    echoesVer = "0.1.0";
    name = "echoes";
}

Echoes::~Echoes()
{
    
}

void Echoes::showHelp() const
{
    cout << "________ Echoes ________" << endl;
    cout << "List of commands you can use with:" << endl;
    cout << "info : Display informations about echoes." << endl;
    cout << "help : Display this help." << endl;
    cout << "installcore : Install Core packages of Entropyx Linux." << endl;
    cout << "install pkg : Install the given pkg." << endl;
    cout << "search pkg : Search if pkg exists in repositories." << endl;
}

void Echoes::showInfo() const
{
    cout << "Echoes Package Manager" << endl;
    cout << "Version: " << echoesVer << endl;
    cout << "\n" << "Made by Philentropy for Entropyx Linux systems\nCopyright 2020 Philentropy" << endl;
    cout << "See license in /etc/echoes" << endl;
}

char* Echoes::getArg() const
{
    return arg;
}

char* Echoes::getOpt() const
{
    return opt;
}

string Echoes::getEchoesName() const
{
    return name;
}

int Echoes::setupCore()
{
    cout << "SETUP CORE" << endl;
    return 0;
}

bool Echoes::isPkgToInstallExists(string option)
{
    cout << "Package to install : " << option << endl;
    return false;
}

bool Echoes::isPkgToSearchExists(string option)
{
    return false;
}
