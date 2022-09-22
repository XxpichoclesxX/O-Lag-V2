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

int main()
{
    SetConsoleTitleA("Emir UwU");
    int choice;
menu:
    system("CLS");//that link will be below
    system("color c");
    string raw_str = R"(               
)";
    cout << raw_str << endl;
    cout << "1: Limpiar red y archivos (Tendras que iniciar sesion de nuevo en todo!!)\n";
    cout << "2: Checar archivos corruptos files\n";
    //cout << "3: New features you can add\n";
    //cout << "4: New features you can add\n";
    cin >> choice;
    if (choice == 1)
    {
    limpiar:
        int Option2;
        system("color c");
        system("CLS");
        printf("Advertencia estas apunto de usar el cleaner, deseas continuar?");
        printf("\nOpciones: [1] Limpiar y optimizar! [2] Regresar al menu ");
        cin >> Option2;
        if (Option2 == 1)
        {
            system("CLS");
            printf("Reiniciando wifi...");
            Sleep(2000);
            system("taskkill /f /im explorer.exe");
            system("netsh winsock reset");
            system("netsh winsock reset catalog");
            system("netsh int ip reset");
            system("netsh advfirewall reset");
            system("netsh int reset all");
            system("netsh int ipv4 reset");
            system("netsh int ipv6 reset");
            system("ipconfig / release");
            system("ipconfig / renew");
            system("ipconfig / flushdns");
            system("netsh int tcp set global chimney=enabled");
            system("netsh int tcp set global autotuninglevel=normal");
            system("netsh int tcp set supplemental");
            system("netsh int tcp set global dca=enabled");
            system("netsh int tcp set global netdma=");
            system("netsh int tcp set global ecncapability=enabled");
            system("Reg.exe add HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Multimedia\\SystemProfile /v NetworkThrottlingIndex /t REG_DWORD /d 4294967295 /f");
            system("CLS");
            printf("Wifi reniciado!");
            Sleep(1500);
            system("CLS");
            printf("Borrando archivos temporales...");
            Sleep(1500);
            system("del /s /f /q c:\\windows\\temp\\*.*");
            system("rd /s /q c:\\windows\\temp");
            system("md c:\\windows\\temp");
            system("del /s /f /q %temp%\\*.*");
            system("rd /s /q %temp%");
            system("del C:\\Windows\\prefetch\\*.*/s/q");
            system("deltree /y c:\\windows\\tempor~1");
            system("deltree /y c:\\windows\\temp");
            system("deltree /y c:\\windows\\tmp");
            Sleep(500);
            system("deltree /y c:\\windows\\cookies");
            system("deltree /y c:\\windows\\history");
            system("deltree /y c:\\windows\\ff*.tmp");
            system("DEL /f /s /q %systemdrive%\\*.chk");
            system("DEL /f /s /q %systemdrive%\\*.old");
            system("DEL /f /s /q %systemdrive%\\*.gid");
            system("DEL /f /s /q %systemdrive%\\*.log");
            system("DEL /f /s /q %systemdrive%\\*._mp");
            system("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp");
            system("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache");
            system("md %temp%");
            system("start explorer.exe");
            system("CLS");
            printf("Desea limpiar su disco?");
            int Option4;
            system("CLS");
            printf("\n [1] Si    [2] No");
            cin >> Option4;
            if (Option4 == 1)
            {
                system("CLS");
                system("cleanmgr");
                goto menu;
            }
            if (Option4 == 2)
            {
                system("CLS");
                printf("Todos los archivos temporales etc... Se han borrado correctamente!");
                Sleep(1000);
                system("CLS");
                printf("Regresando al menu...");
                Sleep(2500);
                goto menu;
            }
        }
        if (Option2 == 2)
        {
            printf("Regresando al menu...");
            Sleep(2000);
            goto menu;
        }
    }
    if (choice == 2)
    {
    checar:
        int Option3;
        system("color c");
        system("CLS");
        printf("Desea continuar?");
        printf("\n[1] Si     [2] No");
        cin >> Option3;
        if (Option3 == 1);
        {
            system("CLS");
            printf("Iniciando...");
            system("sfc /scannow");
            Sleep(25000);
        }
        if (Option3 == 2)
        {
            system("CLS");
            printf("Regresando al menu...");
            Sleep(2500);
            goto menu;
        }
    }
    // here put the code
    //if (choice == 3)
    //{
    //}
    //if (choice == 4)
    //{
    //}
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
