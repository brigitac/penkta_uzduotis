#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include <map>
#include <string>
#include <iomanip> 
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
                if (w.back()=='.' || w.back()==',' || w.back()==')' || w.back()=='"') w = w.substr(0, w.size()-1);
                if (w.front()=='(' || w.front()=='"') w = w.substr(1, w.size());
                ++word_map[w];
                if (word_map[w]>1)
                    {
                        std::string eil=std::to_string(eile);    
                        char eilutuke=eil.front();
                        if (static_cast<char>(line_map[w].back())!=eilutuke)
                        {line_map[w]=line_map[w] +", " +std::to_string(eile);}
                    }
                else line_map[w]=std::to_string(eile);
            }
    }
    for(const auto &pair : word_map) 
    {
      if (pair.second>1) 
        {
         std::cout<<"'"+pair.first+"'"<<" žodis pasikartoja " << pair.second <<" kartus ir yra šiose eilutėse: "<<line_map[pair.first]<<std::endl;
        } 
    }
}