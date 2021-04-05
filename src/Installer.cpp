/*
 * Installer.cpp - Installer class file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 *
 */

#include "Installer.h"

using namespace std;

Installer::Installer() : npkPath("/.npk/scripts/"), echoesIndexDir("/etc/echoes/index/"), echoesPkgCacheDir("/usr/share/echoes/pkgcache/"),
    echoesPkgInfoDir("/usr/share/echoes/pkg/info/"), echoesPkgDepDir("/usr/share/echoes/pkg/deps/")
{
}

Installer::~Installer()
{
}


int Installer::setupCore()
{
    cout << "SETUP CORE" << endl;
    return 0;
}

int Installer::installPkg(string pkg)
{
    cout << "\033[33m[Echoes] - Installation of " << pkg << "\033[0m" << endl;
    cout << "Package is already installed: ";
    if(isPkgToInstallExists(pkg))
    {
        cout << "\033[32mYes\033[0m" << endl;
        cout << "Nothing to do." << endl;
        return 0;
    }
    else
    {
        cout << "\033[31mNo\033[0m" << endl;
        cout << "Package exists in index: ";
        if(isPkgToSearchExists(pkg))
        {
            cout << "\033[32mYes\033[0m" << endl;
            
            string indexPath = getIndexPath() + pkg;
            //cout << "Path to index -> " << indexPath << endl;
            ifstream index(indexPath.c_str());
            string pkgDesc;
            
            if(index)
            {
                getline(index, pkgDesc);
            }
            else
            {
                cerr << "Error: Echoes can't find index file." << endl;
                return 1;
            }

            cout << "Scanning dependencies of package " << pkgDesc << endl;
            string depPath = getDepPath() + pkgDesc + "-dep";
            //cout << "Dep path -> " << depPath << endl;
            scanDep(depPath);
            
        }
        else
        {
            cout << "\033[31mNo\033[0m" << endl;
        }
    }
    /*
    string indexPath = getIndexPath() + pkg;
        fstream index(indexPath.c_str());
        string pkgDesc;
        while(getline(index, pkgDesc))
       
        cout << "Scanning dependencies of package " << pkgDesc << endl;
        string depPath = getDepPath() + pkgDesc;
    
    
    fstream depFile(depPath.c_str()); 
    
    if(isPkgToInstallExists(pkg))
    {
        cout << "\033[32mYes\033[0m" << endl;
    }
    else
    {
        cout << "\033[31mNo\033[0m" << endl;
    }
    */
    return 0;
}

int Installer::searchPkg(string pkg)
{
    cout << "\033[33m[Echoes] - Searching " << pkg << "\033[0m" << endl;
    cout << "Package is available for installation: ";
    if(isPkgToSearchExists(pkg))
    {
        cout << "\033[32mYes\033[0m" << endl;
        cout << "Run echoes install " << pkg << " to install it." << endl;
        return 0;
    }
    else
    {
        cout << "\033[31mNo\033[0m" << endl;
        cout << "Nothing to do." << endl;
    }
    return 0;
}


bool Installer::isPkgToInstallExists(string option)
{
    string path = getPkgCachePath() + option;
    //cout << "Package path : " << path << endl;
    ifstream pkgCache(path.c_str());
    
    if(pkgCache)
    {
        pkgCache.close();
        return true;
    }
    else
    {
        pkgCache.close();
        return false;
    }
}

bool Installer::isPkgToSearchExists(string option)
{
    string path = getIndexPath() + option;
    //cout << "Package path : " << path << endl;
    ifstream index(path.c_str());
    
    if(index)
        return true;
    else
        return false;
}

int Installer::scanDep(string depFilePath)
{
    //cout << depFilePath << endl;
    vector<string> depToInstall;
    vector<string> depVec;
    ifstream depFile(depFilePath.c_str());
    
    
    if(depFile)
    {
        //cout << "In depfile..." << endl;
        string dep;
        while(getline(depFile, dep))
        {
            depVec.push_back(dep);
        }
    }
    else
    {
        cerr << "Error: Echoes can't find dependencies file." << endl;
        return 1;
    }
    depFile.close();
    
    for(int i(0); i < depVec.size(); i++)
    {
        cout << depVec[i] << " : ";
        if(isPkgToInstallExists(depVec[i]))
            cout << "\033[32mYes\033[0m" << endl;
        else
        {
            cout << "\033[31mNo\033[0m" << endl;
            installPkg(depVec[i]);
        }   
    }
    
    return 0;
}

int Installer::checkEchoesPkg(string pkgName)
{
    cout << "Check is available for " << pkgName << endl;
    
    vector<char *> checkArg;
    vector<char *> checkArgPassTwo;
    vector<char *> checkArgPassThree;
    vector<char *> checkArgPassFour;
    
    string path = getNpkPath();
    string userHome = getenv("HOME");
    
    string scriptPath = userHome + path + "check-pkg.sh";
    string scriptPathPassTwo = userHome + path + "check-pkg-2.sh";
    string scriptPathPassThree = userHome + path + "check-pkg-3.sh";
    string scriptPathPassFour = userHome + path + "check-pkg-4.sh";
    
    cout << "DEBUG: In sandbox with -> " << pkgName << " and " << scriptPath << endl;
    
    checkArg.push_back(const_cast<char*>("bash"));
    checkArg.push_back(const_cast<char*>(scriptPath.c_str()));
    checkArg.push_back(const_cast<char*>(pkgName.c_str()));
    checkArg.push_back(NULL);
    
    checkArgPassTwo.push_back(const_cast<char*>("bash"));
    checkArgPassTwo.push_back(const_cast<char*>(scriptPathPassTwo.c_str()));
    checkArgPassTwo.push_back(const_cast<char*>(pkgName.c_str()));
    checkArgPassTwo.push_back(NULL);
    
    checkArgPassThree.push_back(const_cast<char*>("bash"));
    checkArgPassThree.push_back(const_cast<char*>(scriptPathPassThree.c_str()));
    checkArgPassThree.push_back(const_cast<char*>(pkgName.c_str()));
    checkArgPassThree.push_back(NULL);
    
    checkArgPassFour.push_back(const_cast<char*>("bash"));
    checkArgPassFour.push_back(const_cast<char*>(scriptPathPassFour.c_str()));
    checkArgPassFour.push_back(const_cast<char*>(pkgName.c_str()));
    checkArgPassFour.push_back(NULL);
    
    char **arg = checkArg.data();
    char **argPassTwo = checkArgPassTwo.data();
    char **argPassThree = checkArgPassThree.data();
    char **argPassFour = checkArgPassFour.data();
    
    pid_t check_pkg_proc, check_pkg_proc_2, check_pkg_proc_3, check_pkg_proc_4;

    // PASS 1:
    do
    {
        check_pkg_proc = fork();
    }
    while(check_pkg_proc == 0 && (errno == EAGAIN));

    if(check_pkg_proc == 0)
    {
        if(execv("/bin/bash", arg) != 0)
        {
            cerr << "Error with execv." << endl;
            perror("execv");
            return 1;
        }
    }
    else
    {
        if(wait(NULL) == -1)
        {
            cerr << "Error with wait." << endl;
            return 1;
        }
    }
    
    // PASS 2:
    do
    {
        check_pkg_proc_2 = fork();
    }
    while(check_pkg_proc_2 == 0 && (errno == EAGAIN));

    if(check_pkg_proc_2 == 0)
    {
        if(execv("/bin/bash", argPassTwo) != 0)
        {
            cerr << "Error with execv." << endl;
            perror("execv");
            return 1;
        }
    }
    else
    {
        if(wait(NULL) == -1)
        {
            cerr << "Error with wait." << endl;
            return 1;
        }
    }
    
    // PASS 3:
    do
    {
        check_pkg_proc_3 = fork();
    }
    while(check_pkg_proc_3 == 0 && (errno == EAGAIN));

    if(check_pkg_proc_3 == 0)
    {
        if(execv("/bin/bash", argPassThree) != 0)
        {
            cerr << "Error with execv." << endl;
            perror("execv");
            return 1;
        }
    }
    else
    {
        if(wait(NULL) == -1)
        {
            cerr << "Error with wait." << endl;
            return 1;
        }
    }
    
    // PASS 4:
    do
    {
        check_pkg_proc_4 = fork();
    }
    while(check_pkg_proc_4 == 0 && (errno == EAGAIN));

    if(check_pkg_proc_4 == 0)
    {
        if(execv("/bin/bash", argPassFour) != 0)
        {
            cerr << "Error with execv." << endl;
            perror("execv");
            return 1;
        }
    }
    else
    {
        if(wait(NULL) == -1)
        {
            cerr << "Error with wait." << endl;
            return 1;
        }
    }
    
    return 0;
}

string Installer::getNpkPath() const
{
    return npkPath;
}

string Installer::getIndexPath() const
{
    return echoesIndexDir;
}

string Installer::getDepPath() const
{
    return echoesPkgDepDir;
}

string Installer::getPkgCachePath() const
{
    return echoesPkgCacheDir;
}
