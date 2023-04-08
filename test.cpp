#include <iostream>
#include <windows.h>

int main() {
    DWORD mode;
    HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
    GetConsoleMode(hstdin, &mode);
    SetConsoleMode(hstdin, mode & (~ENABLE_ECHO_INPUT));

    std::string password;
    std::cout << "Enter password: ";
    std::getline(std::cin, password);

    // Restore the console mode
    SetConsoleMode(hstdin, mode);

    std::cout << "Password entered: " << password << std::endl;
    return 0;
}
