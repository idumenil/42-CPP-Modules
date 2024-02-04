#include "FileManipulator.hpp"

FileManipulator::FileManipulator( void ) {
    return;
}

FileManipulator::~FileManipulator( void ) {
    return;
}

void FileManipulator::replaceOccurrences(std::string& content, std::string& s1, std::string& s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
}

void FileManipulator::replaceAndWriteToFile(std::string& filename, std::string& s1, std::string& s2) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return;
    }

    std::string fileContent;
    char ch;
    while (inputFile.get(ch)) {
        fileContent += ch;
    }
    inputFile.close();

    replaceOccurrences(fileContent, s1, s2);

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Unable to create output file " << filename << ".replace" << std::endl;
        return;
    }

    outputFile << fileContent;
    outputFile.close();

    std::cout << "Replacement completed. Output written to " << filename << ".replace" << std::endl;
}
