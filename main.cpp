#include <iostream>
#include <fstream>// ���� �а� ���� ���� ���.
#include <string>
#include <sstream>// ���� �ѹ��� �б� ���� ���.

using namespace std;

int main()
{
	//���� ��������.
	ifstream ifs("Map.txt");
	if (ifs.fail())
	{
		cerr << "Error!" << endl;
		return -1;
	}

	//�� ���ھ�
	while (!ifs.eof()) 
	{
		cout << (char)ifs.get();
	}
	//�� �پ�
	/*string String;
	while (getline(ifs, String))
	{
		cout << String << endl;
	}*/

	//�ѹ��� ��ü �б� - sstream ���
	/*stringstream SS;

	SS << ifs.rdbuf();
	cout << SS.str();*/

	string Map[10] = {
	"**********",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"**********"
	};

	//���� �����.
	ofstream Ofs;
	Ofs.open("MyMap.txt");

	for (int i = 0; i < Map->length(); i++)
	{
		if (Ofs.is_open())
		{
			Ofs << Map[i] << endl;
		}
	}
	Ofs.close();


	return 0;
}