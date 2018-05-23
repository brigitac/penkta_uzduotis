#include <iostream>
#include <string>
#include <vector>
#include <map>
 #include <string>
int main()
{
    std::map<std::string, size_t>  word_map;
    std::string w;
    for (;std::cin>>w;)  
        {
        if (w.back()=='.' || w.back()==',' || w.back()==')') w = w.substr(0, w.size()-1);
        if (w.front()=='(') w = w.substr(1, w.size());
         ++word_map[w]; 
        }
 
    for (const auto &pair : word_map) 
    { 
        if (pair.second>2) 
        {
            std::cout << pair.second;
            std::cout << " occurrences of word '" << pair.first << "'\n"; 
        }
    }
}