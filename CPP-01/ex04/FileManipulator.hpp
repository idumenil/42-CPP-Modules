#ifndef FILEMANIPULATOR_HPP
#define FILEMANIPULATOR_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class FileManipulator {
    public:
        FileManipulator( void );
        ~FileManipulator( void );

        void replaceAndWriteToFile(std::string& filename, std::string& s1, std::string& s2);

    private:
        void replaceOccurrences(std::string& content, std::string& s1, std::string& s2);
};

#endif