/*
 * Echoes.cpp - Echoes class file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 *
 */

#include "Echoes.h"

using namespace std;


Echoes::Echoes()
{
    //npkPath = "/.npk/scripts/";
}

Echoes::Echoes(char* argv[]) : arg(argv[1]), opt(argv[2]), echoesVer("0.1.0"), name("echoes")
{
    /* Initializing private members used by Echoes.
    arg = argv[1];
    opt = argv[2];
    echoesVer = "0.1.0";
    name = "echoes";*/
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
    cout << "check-pkg pkg : Check Echoes package pkg." << endl;
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
