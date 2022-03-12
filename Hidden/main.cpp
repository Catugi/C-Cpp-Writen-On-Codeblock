#include <iostream>
#include <termios.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // esconde

    std::string s;
    std::cout << "Informe sua senha: ";
    getline(std::cin, s);

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // retorna à exibir
    std::cout << "\rSua senha é: " << s << '\n';
    return EXIT_SUCCESS;
}
