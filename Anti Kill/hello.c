#include <windows.h>

int main() {
    // Невидимое приложение
    HWND hwndConsole = GetConsoleWindow();
    if (hwndConsole != NULL) {
        ShowWindow(hwndConsole, SW_HIDE);
    }

    // Бесконечный цикл.
    while (TRUE) {
        Sleep(5000); 
    }

    return 0;
}
