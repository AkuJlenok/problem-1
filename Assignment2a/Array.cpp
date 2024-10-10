/* Kirill Begaliev st129977@student.spbu.ru
Gets file, read its size, create array with needed size and puts file in this array
*/

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

int Array ()
{
    std::ifstream infile;
    infile.open("filetoread",std::ios::binary|std::ios::in);
    int file_size = std::filesystem::file_size("filetoread");
    std::cout<< file_size <<std::endl;
    return 0;
}
