#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include <map>
#include <string>
int main()
{
    auto eile=0;
    std::map<std::string, size_t>  word_map;
    std::string eilute;
    for(;std::getline(std::cin,eilute);)
    {
        eile++;
        std::istringstream eilute2(eilute);
        std:: string w;
        for (;eilute2>>w;)  
            {
                if (w.back()=='.' || w.back()==',' || w.back()==')') w = w.substr(0, w.size()-1);
                if (w.front()=='(') w = w.substr(1, w.size());
                ++word_map[w]; 
            }
    }
    for (const auto &pair : word_map) 
    { 
        if (pair.second>2) 
        {
            std::cout <<"'"<<pair.first<<"'"<< " žodis pasikartoja " << pair.second <<" kartus ir yra šiose eilutėse: "<<std::endl; 
        }
    }
}