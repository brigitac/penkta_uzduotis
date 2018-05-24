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
    std::map<std::string, std::string>  line_map;
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
                if (word_map[w]>1)  line_map[w]=line_map[w] +", " +std::to_string(eile);
                else line_map[w]=std::to_string(eile);
                std::cout<<word_map[w]<<" "<<line_map[w]<<std::endl;
            }
    }
    for(auto it = word_map.cbegin(); it != word_map.cend(); ++it)
    {
     if (it->second>1) 
        {
         std::cout <<"'"<<it->first<<"'"<< " žodis pasikartoja " << it->second <<" kartus ir yra šiose eilutėse: "<<line_map[it->first]<<std::endl;
        } 
    }
}