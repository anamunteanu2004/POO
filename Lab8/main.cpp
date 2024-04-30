#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <cctype>

//Compar si sortez lexicografic
struct Compare {
    bool operator()(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) const {
        if (a.second == b.second) {
            return a.first > b.first; 
        }
        return a.second < b.second; 
    }
};

int main() {
    std::ifstream file("Text.txt"); 
    if (!file) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    std::string phrase;
    std::getline(file, phrase); 

    std::map<std::string, int> wordCount;
    std::string word;
    for (char c : phrase) { // 
        if (std::isspace(c) || c == ',' || c == '.' || c == '?' || c == '!') { // Se verifica daca este separator
            if (!word.empty()) { 
                // Convertez word in litere mici
                for (char& ch : word) {
                    ch = std::tolower(ch);
                }
                
                ++wordCount[word];
                word.clear(); 
            }
        }
        else {
            word.push_back(c); 
        }
    }

    if (!word.empty()) {
        for (char& ch : word) {
            ch = std::tolower(ch);
        }
        ++wordCount[word];
    }

    std::priority_queue<std::pair<std::string, int>, std::vector<std::pair<std::string, int>>, Compare> pq;

    for (const auto& pair : wordCount) {
        pq.push(pair);
    }

    while (!pq.empty()) {
        auto top_pair = pq.top();
        std::cout << static_cast<std::string>(top_pair.first) << " => " << top_pair.second << std::endl;
        pq.pop();
    }

    return 0;
}
