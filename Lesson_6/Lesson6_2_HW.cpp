#include <iostream>
#include <fstream>

const char CHARS_NUM = 'z'-'a';

void fillRandomFile(std::ostream& out) {
    for (size_t i=0; i<50; i++){
        char c = ('a'+rand()%CHARS_NUM);
        out<<c;
    }
}

void concatStreams (std::istream& in1, std::istream& in2, std::ostream& out){
    in1.seekg(0, std::ios_base::end);
    auto size1 = in1.tellg();
    in1.seekg (0, std::ios_base::beg);

    in2.seekg(0, std::ios_base::end);
    auto size2 = in2.tellg();
    in2.seekg (0, std::ios_base::beg);

    char* buffer = new char[size1+size2];
    in1.read(buffer, size1);
    in2.read(buffer + size1, size2);

    out.write (buffer, size1 + size2);


}

bool findWord(std::istream& in, char* sought_word){
    std::string word;
    while(in>>word) {
        if(word==sought_word){
            return true;
        }
    }
    return false;
}

int main(int argc, char** argv){
    {
        std::ofstream out1 ("file1.txt");
        std::ofstream out2 ("file2.txt");

        fillRandomFile(out1);
        fillRandomFile(out2);
    }
    {
        std::ifstream in1 ("file1.txt");
        std::ifstream in2 ("file2.txt");
        std::ofstream out ("file3.txt");

        concatStreams(in1, in2, out);
    }
    {
        if (argc != 3){
            std::cout << "Usage: "<<argv[0]<<"FILE WORD\n";
            return 1;
        }
        char* filename = argv[1];
        char* word  = argv[2];

        std::ifstream in(filename);
        std::cout << std::boolalpha << findWord(in, word); 
    }
}