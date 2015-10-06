#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct URL
{
    std::string url;
    int n;

    bool operator<(const URL& a) const
    {
        return ( n < a.n );
    }

};

int main()
{
    int t;
    URL temp;
    std::vector<struct URL> urls;
    std::cin >> t;
    for(int b = 0; b < t; b++)
    {
        for(int i = 0; i < 10; i++)
        {
            std::cin >> temp.url >> temp.n;
            urls.push_back(temp);
        }
        std::sort(urls.rbegin(), urls.rend());
        std::cout << "Case #" << b+1 << ":" << std::endl;
        std::cout << urls.at(0).url << std::endl;
        for(int i = 1; (i < urls.size()) && (urls.at(i).n == urls.at(0).n); i++)
        {
            std::cout << urls.at(i).url << std::endl;
        }
        urls.clear();
    }
    return 0;
}
