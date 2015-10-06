#include <iostream>

int main()
{
    char n;
    bool a = false;

    while(std::cin >> std::noskipws >> n)
    {
        if(n == '"')
        {
            if(a)
            {
                std::cout << "''";
                a = false;
            }
            else
            {
                std::cout <<  "``";
                a = true;
            }
        }
        else
        {
            std::cout << n;
        }
    }

    return 0;
}
