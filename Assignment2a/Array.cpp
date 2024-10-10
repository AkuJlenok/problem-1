/* Kirill Begaliev st129977@student.spbu.ru
Gets file, read its size, create array with needed size and puts file in this array
*/

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

int Array ()
{
    //opens file and reads its size
    std::ifstream infile;
    infile.open("filetoread",std::ios::binary|std::ios::in);
    int file_size = std::filesystem::file_size("filetoread");
    
    //arrays to save and reverse file
    char* file = new char [file_size];
    char* reversed_file = new char [file_size];
    
    //saves file into array and reverses into another one
    infile.read(file,file_size);
    for (int i = 0; i < file_size; ++i)
    {
        reversed_file[i] = file[file_size-i];
    }
    delete [] file;
    infile.close();
    
    //writes reversed array into the new file
    std::ofstream outfile;
    outfile.open("answer_file",std::ios::binary|std::ios::out);
    outfile.write(reversed_file,file_size);
    delete [] reversed_file;
    outfile.close();
    
    return 0;   
}
