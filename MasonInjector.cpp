#include<iostream>
#include<windows.h>
#include<clocale>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved){
    std::setlocale(LC_ALL,".Russian");
    switch(fdwReason){
        case DLL_PROCESS_ATTACH:
            std::cout<<"[+] DLL внедрен в процесс"<<std::endl;

            MessageBoxA(NULL,"DLL успешно внедрен","MasonDLL",MB_OK|MB_ICONINFORMATION);

            break;
        case DLL_PROCESS_DETACH:
            std::cout<<"[-] DLL выгружен из процесса"<<std::endl;
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
    }
    return TRUE;
}
