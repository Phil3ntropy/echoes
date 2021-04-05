/*
 * Installer.h - Installer header file 
 * by weltrusten (Maxence Buisson) for Philentropy.
 * Copyright 2020 - Philentropy
 * See LICENSE for informations. 
 *
 * Public members:
 *  - setupCore() -> A method to install Entropyx Linux core packages in one run.
 *  - isPkgToInstallExists() -> A method to check if a package is available to install.
 *  - isPkgToSearchExists() -> A method to search for a package in the repositories.
 *  
 * Private members:
 *  - echoesVer -> contains current Echoes version.
 *  - name -> contains the name of the software.
 *  - arg -> contains user argument.
 *  - opt -> contains user options.
 *  - npkPath -> contains path to eNtropyx Packager Kit.
 * 
 */

#ifndef INSTALLER_HEADER
#define INSTALLER_HEADER
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>

class Installer
{
public:
    Installer();
    ~Installer();
    int setupCore();
    int installPkg(std::string pkg);
    int searchPkg(std::string pkg);
    std::string getNpkPath() const;
    std::string getIndexPath() const;
    std::string getPkgCachePath() const;
    std::string getDepPath() const;
    
private:
    
    bool isPkgToInstallExists(std::string option);
    bool isPkgToSearchExists(std::string option);
    int scanDep(std::string depFilePath);
    int depInstaller(std::string pkgName);
    int checkEchoesPkg(std::string pkgName);
    std::string npkPath;
    std::string echoesIndexDir;
    std::string echoesPkgCacheDir;
    std::string echoesPkgInfoDir;
    std::string echoesPkgDepDir;
};

#endif
