#include <iostream>
#include <string>

int main()
{
    std::string temp;
    const std::string   EN = "HELLO",
                        ES = "HOLA",
                        GE = "HALLO",
                        FR = "BONJOUR",
                        IT = "CIAO",
                        RS = "ZDRAVSTVUJTE",
                        nl = "#";
    int i = 1;
    while(std::getline(std::cin, temp))
    {
        if(temp == nl)
        {
            break;
        }
        std::cout << "Case " << i << ": ";
        if(temp == EN)
        {
            std::cout << "ENGLISH" << std::endl;
        }
        else if(temp == ES)
        {
            std::cout << "SPANISH" << std::endl;
        }
        else if(temp == FR)
        {
            std::cout << "FRENCH" << std::endl;
        }
        else if(temp == IT)
        {
            std::cout << "ITALIAN" << std::endl;
        }
        else if(temp == GE)
        {
            std::cout << "GERMAN" << std::endl;
        }
        else if(temp == RS)
        {
            std::cout << "RUSSIAN" << std::endl;
        }
        else
        {
            std::cout << "UNKNOWN" << std::endl;
        }
        i++;
    }
    return 0;
}
