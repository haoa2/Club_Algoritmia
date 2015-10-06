#include <iostream>

int main()
{
    int k, N, M, x, y;

    do{
        std::cin >> k;
        if(k)
        {
            std::cin >> N >> M;
        }
        for(int i = 0; i < k; i++)
        {
            std::cin >> x >> y;

            if( (x == N) || (y == M))
            {
                std::cout << "divisa" << std::endl;
            }
            else if((x > N)&&(y > M))
            {
                std::cout << "NE" << std::endl;
            }
            else if((x > N)&&(y < M))
            {
                std::cout << "SE" << std::endl;
            }
            else if((x < N)&&(y > M))
            {
                std::cout << "NO" << std::endl;
            }
            else // (x < N) && ( y < M)
            {
                std::cout << "SO" << std::endl;
            }
        }
    }while(k);

    return 0;
}
