#include "WB.h"
#include <iostream>
#include <fstream>
#include <map>
#include <string>

void Mini_AI::fileSaveKnowledge(const std::string& filename, const std::map<std::string, std::string>& dictionary) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }
    for (const auto& entry : dictionary) {
        outFile << entry.first << "|" << entry.second << "\n"; // word|definition
    }
    outFile.close();
}

void Mini_AI::FileLoadKnowledge(const std::string& filename, std::map<std::string, std::string>& dictionary) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error opening file for reading: " << filename << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inFile, line)) {
        size_t delimiterPos = line.find("|");
        if (delimiterPos != std::string::npos) {
            std::string word = line.substr(0, delimiterPos);
            std::string definition = line.substr(delimiterPos + 1);
            dictionary[word] = definition;
        }
    }
    inFile.close();
}
