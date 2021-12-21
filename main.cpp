#include "include/reader.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cout << "No arguments passed" << std::endl;
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            std::cout << filename(argv[i]) << ": " << lines(argv[i]) << std::endl;
            i++;
        }
    }
    return 0;
}