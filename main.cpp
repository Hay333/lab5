#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
string text;
{
char * file2 = "/home/vladimir/Загрузки/f1.txt";
ifstream ifs;
ifs.open(file2);

ifs.seekg (0, std::ios::end);
int size = ifs.tellg();
ifs.seekg(0,ios::beg);
char * buffer = new char[size];

ifs.read((char*)buffer, size);
text = buffer;

ifs.close();
delete[] buffer;
}

{
char * file3 = "/home/vladimir/Загрузки/f2.txt";
ofstream ofs;

ofs.open(file3, std::ios::app);
ofs << text;
ofs.close();
}
return 0;
} 