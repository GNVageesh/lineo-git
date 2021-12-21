#include <fstream>
#include <iostream>

int lines(std::string file)
{
    std::string lineText;
    std::ifstream fileReader(file);
    int lineCounter = 0;

    while (std::getline(fileReader, lineText))
    {
        lineCounter++;
    }

    fileReader.close();

    return lineCounter;
}

std::string filename(std::string path)
{
    return path.substr(path.find_last_of("/\\") + 1);
}