#include <iostream>

int main()
{
    int t;
    int j;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> j;
        j = ((((((j*567)/9)+7492)*235)/47)-498);
        j = j/10;
        j = j%10;
        if(j < 0)
        {
            j *= -1;
        }
        std::cout << j << std::endl;
    }
    return 0;
}
