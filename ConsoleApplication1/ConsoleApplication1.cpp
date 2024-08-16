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

// THis will reset every single wifi settings in the windows system
void resetWifi() {
    system("CLS");
    printf("Reiniciando wifi...");
    Sleep(1500);
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
    system("Reg.exe add HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Multimedia\\SystemProfile /v NetworkThrottlingIndex /t REG_DWORD /d 4294967295 /f");
    system("CLS");
    printf("Wifi reniciado!");
    Sleep(1500);
}

/**
This will change some settings directly into the network capacity of your computer / might cause changes in the network
(If it gets worse just change values to false)
*/
void improveInternet() {
    system("CLS");
    printf("Optimizando red...");
    Sleep(1500);
    system("netsh int tcp set global congestionprovider=ctcp"); // Change this to "none" if it gets worse
    system("netsh int tcp set global chimney=enabled");
    system("netsh int tcp set global autotuninglevel=normal");
    system("netsh int tcp set global dca=enabled");
    system("netsh int tcp set global netdma=");
    system("netsh int tcp set global ecncapability=enabled");
    system("netsh int tcp set supplemental");
    system("powercfg -change standby-timeout-ac 0");
    system("powercfg -change monitor-timeout-ac 0");
    Sleep(1500);
    system("CLS");
    printf("Red optimizada!");
}

// This will delete every single temporary files in the windows system
void tempFiles() {
    system("CLS");
    printf("Borrando archivos temporales...");
    Sleep(1500);
    system("del /s /f /q c:\\windows\\temp\\*.*");
    system("rd /s /q c:\\windows\\temp");
    system("md c:\\windows\\temp");
    system("del /s /f /q %temp%\\*.*");
    system("rd /s /q %temp%");
    system("del C:\\Windows\\prefetch\\*.*/s / q");
    system("deltree /y c:\\windows\\tempor~1");
    system("deltree /y c:\\windows\\temp");
    system("deltree /y c:\\windows\\tmp");
}

// This will delete every single cookie in the windows system
void windowsTree() {
    system("CLS");
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
}

// This will work for specific type of optimizations
void gamesOptimization() {
    int grafica;
    system("CLS");
    printf("Tienes alguna grafica NVIDIA?");
    cin >> grafica;
    printf("\n [1] Si         [2] No");
    if (grafica == 1) {
        system("CLS");
        printf("Deshabilitando serviciso inecesarios...");
        Sleep(500);
        system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
        system("sc config wuauserv start= disabled");
        system("sc config SysMain start= disabled");
        system("sc stop wuauserv");
        system("sc stop BITS");
        system("sc stop SysMain");
        system("defrag C: /O");
        Sleep(3000);
        printf("Servicios Quitados!");
        Sleep(800);
        system("powercfg -setactive e9a42b02-d5df-448d-aa00-03f14749eb61");
        system("nvidia-smi -pm 1");
        printf("Configuraciones gráficas optimizadas.");
        system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GameDVR /v AllowGameMode /t REG_DWORD /d 1 /f"); // This will enable the game mode
        Sleep(1000);
        //system("nvidia-smi -ac 4004,1531"); This will not be enabled right now because of difference in the grafic cards
    }
    if (grafica == 2) {
        system("CLS");
        printf("Deshabilitando serviciso inecesarios...");
        Sleep(500);
        system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
        system("sc config wuauserv start= disabled");
        system("sc config SysMain start= disabled");
        system("sc stop wuauserv");
        system("sc stop BITS");
        system("sc stop SysMain");
        system("defrag C: /O");
        Sleep(3000);
        printf("Servicios Quitados!");
        Sleep(800);
        system("powercfg -setactive e9a42b02-d5df-448d-aa00-03f14749eb61");
        printf("Configuraciones gráficas optimizadas.");
        system("reg add HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GameDVR /v AllowGameMode /t REG_DWORD /d 1 /f");  // This will enable the game mode
        Sleep(1000);
    }
    else {
        printf("Opcion no valida...");
        Sleep(1000);
        gamesOptimization();
    }
    // This will work to put the game into hight priority but i need to work on how to automtize this
    /*
    system("CLS");
    printf("Ajustando la prioridad del proceso de juego...");
    Sleep(1500);
    std::string command = "wmic process where name=\"" + processName + "\" CALL setpriority 128";
    system(command.c_str());
    Sleep(1200);
    printf("Prioridad del proceso de juego ajustada.");
    Sleep(1000);
    */
}

void editOptimization() {
    system("CLS");
    printf("Deshabilitando servicios innecesarios para edición de video...");
    Sleep(1800);
    system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
    system("sc stop wuauserv");
    system("sc config wuauserv start=disabled");
    system("sc stop DiagTrack");
    system("sc config DiagTrack start=disabled");
    printf("Servicios innecesarios deshabilitados.");
    Sleep(1000);
    system("CLS");
    printf("Optimizando configuraciones de disco y grafica...");
    Sleep(2000);
    system("powercfg -setactive e9a42b02-d5df-448d-aa00-03f14749eb61");
    system("powercfg -h off");
    system("defrag C: /O");
    Sleep(1500);
    printf("Configuraciones de disco optimizadas.");

    // This will work to put the program into hight priority but i need to work on how to automtize this
    /*
    system("CLS");
    printf("Ajustando la prioridad del proceso de edicion...");
    Sleep(1500);
    std::string command = "wmic process where name=\"" + processName + "\" CALL setpriority 128";
    system(command.c_str());
    Sleep(1500);
    printf("Prioridad del proceso de edicion ajustada.");
    Sleep(1000);
    */
}

void streamingOptimization() {
    system("CLS");
    printf("Deshabilitando servicios innecesarios para streaming...");
    Sleep(1800);
    system("sc stop wuauserv");
    system("sc config wuauserv start=disabled");
    system("sc stop DiagTrack");
    system("sc config DiagTrack start=disabled");
    system("sc stop SysMain"); 
    system("sc config SysMain start=disabled");
    system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61");
    system("powercfg -setactive e9a42b02-d5df-448d-aa00-03f14749eb61");
    Sleep(1000);
    printf("Servicios innecesarios deshabilitados.");
    Sleep(800);

    // This will work to put the program into hight priority but i need to work on how to automtize this
    /*
    system("CLS");
    printf("Ajustando la prioridad del proceso de streaming...");
    Sleep(1800);
    std::string command = "wmic process where name=\"" + processName + "\" CALL setpriority 128";
    system(command.c_str());
    Sleep(1200);
    printf("Prioridad del proceso de streaming ajustada.");
    Sleep(1000);
    */
}

// Esto actualizara todo el sistema y lo pondra listo para usarse
void updateSystem() {
    system("CLS");
    printf("Verificando actualizaciones de aplicaciones de Microsoft Store...");
    Sleep(1000);
    system("powershell.exe Get-AppxPackage -AllUsers | ForEach-Object {Add-AppxPackage -DisableDevelopmentMode -Register \"$($_.InstallLocation)\\AppXManifest.xml\"}");
    Sleep(2000);
    printf("Verificación y actualización de aplicaciones completada.");
    system("CLS");
    printf("Buscando actualizaciones de Windows...");
    Sleep(1500);
    system("gpupdate /force");
    system("wuauclt /detectnow");
    system("wuauclt /updatenow");
    Sleep(1000);
    printf("Verificación de actualizaciones completada.");
    Sleep(800);
}

int main()
{
    SetConsoleTitleA("O-Lag");
    int choice;
menu:
    system("CLS");//that link will be below
    system("color c");
    
    string raw_str = R"(        
   ________    _________    _   ____________ 
  / ____/ /   / ____/   |  / | / / ____/ __ \
 / /   / /   / __/ / /| | /  |/ / __/ / /_/ /
/ /___/ /___/ /___/ ___ |/ /|  / /___/ _, _/ 
\____/_____/_____/_/  |_/_/ |_/_____/_/ |_|  
)";
    cout << raw_str << endl;
    cout << "1: Limpiar red y archivos (Tendras que iniciar sesion de nuevo en todo!!)\n";
    cout << "2: Checar archivos corruptos y actualizar todo\n";
    cout << "3: Optimizaciones Especificas\n";
    cout << "--------------------- OTROS -------------------------\n";
    cout << "4: Deshabilitar Servicios De Telemetria\n";
    cout << "5: Salir\n";
    //cout << "6: New features you can add\n";
    //cout << "7: New features you can add\n";
    cin >> choice;
    if (choice == 1)
    {
    // This will start the main cleaner and will ask you if you want to proceed.
    limpiar:
        int Option2;
        system("color c");
        system("CLS");
        printf("Advertencia estas apunto de usar el cleaner, deseas continuar?");
        printf("\nOpciones: [1] Limpiar y optimizar! [2] Regresar al menu ");
        cin >> Option2;
        if (Option2 == 1)
        {
            system("taskkill /f /im explorer.exe");
            Sleep(1500);
            resetWifi();
            tempFiles();
            windowsTree();
            system("start explorer.exe");
            system("CLS");
            Sleep(500);
            printf("Desea limpiar su disco?");
            int Option4;
            printf("\n [1] Si    [2] No");
            cin >> Option4;
            if (Option4 == 1)
            {
                system("CLS");
                printf("Abriendo limpiador de disco...");
                system("cleanmgr /sagerun:1");
                Sleep(1500);
                goto menu;
            }
            if (Option4 == 2)
            {
                system("CLS");
                printf("Todos los archivos temporales etc... Se han borrado correctamente!");
                Sleep(1000);
                system("CLS");
                printf("Regresando al menu...");
                Sleep(2000);
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
        printf("Continuaremos con actualizaciones... En 5s");
        Sleep(5000);
        updateSystem();
        system("CLS");
        printf("Continuaremos con la reparacion del sistema... Continuaremos?");
        printf("\n[1] Si     [2] No");
        cin >> Option3;
        if (Option3 == 1);
        {
            system("CLS");
            printf("Iniciando Con El Sistema...");
            system("winsat formal");
            system("CLS");
            printf("Terminando...");
            system("sfc /scannow");
            Sleep(24000);
        }
        if (Option3 == 2)
        {
            system("CLS");
            printf("Regresando al menu...");
            Sleep(1800);
            goto menu;
        }
    }
    if (choice == 3)
    {
        int Option4;
        system("CLS");
        system("color c");
        printf("Que optimizacion especifica desea?");
        printf("\n[1] Para Videojuegos  \n[2] Optimizacion Para Streaming  \n[3] Optimizacion Para Edicion  \n[4] Regresar Al Menu");
        cin >> Option4;
        if (Option4 == 1);
        {
            system("CLS");
            printf("Iniciando optimizacion para videojuegos...");
            Sleep(1300);
            gamesOptimization();
            system("CLS");
            printf("Optimizacion completada! Regresando al menu...");
            Sleep(1500);
            goto menu;
        }
        if (Option4 == 2);
        {
            system("CLS");
            printf("Iniciando optimizacion para streaming...");
            Sleep(1300);
            streamingOptimization();
        }
        if (Option4 == 3);
        {
            system("CLS");
            printf("Iniciando optimizacion para edicion...");
            Sleep(1300);
            editOptimization();
        }
        if (Option4 == 4);
        {
            system("CLS");
            printf("Regresando al menu...");
            Sleep(1800);
            goto menu;
        }
    }
    if (choice == 4) {
        system("CLS");
        printf("Deshabilitando servicios de telemetria..");
        Sleep(1500);
        system("sc delete DiagTrack");
        system("sc delete dmwappushservice");
        //system("sc delete WerSvc"); Esto es opcional ya que tambien ayuda a windows a identificar tus errores.
        system("CLS");
        printf("Terminado... Regresando al menu...");
        Sleep(1500);
        goto menu;
    }
    if (choice == 5)
    {
        system("CLS");
		printf("Saliendo y limpiando...");
		Sleep(1300);
		exit(0);
    }
    else {
        system("CLS");
        printf("Opcion no valida...");
        Sleep(800);
        goto menu;
    }
    // here put the code
    //if (choice == 6)
    //{
    //}
    //if (choice == 7)
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
