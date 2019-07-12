#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void calcMiddle(const string file);

int main(int argc, char **argv)
{


	char * file = "/home/vladimir/Загрузки/data_v7.txt";

	calcMiddle((string)file);
	return 0;
}

void calcMiddle(const string file)
{

	const int SIZE = 5;
	float array[SIZE];
	ifstream ifs;
	ifs.open(file, ios::binary | ios::in);

	ifs.seekg (0, std::ios::end);
	int size = ifs.tellg();
	ifs.seekg(0,ios::beg);

	ifs.read((char*)array, 20);z

	ifs.close();

	float summ = 0;
	for (int i = 0; i < SIZE; i++) {
		cout << array[i] << endl;
		summ +=array[i];
	}
	cout << "СРДЕНЕЕ АРИФМЕТИЧЕСКОЕ:"<< summ/SIZE << endl;
}
