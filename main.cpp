#include <iostream>
#include <fstream>// 파일 읽고 쓰기 위한 헤더.
#include <string>
#include <sstream>// 파일 한번에 읽기 위한 헤더.

using namespace std;

int main()
{
	//파일 가져오기.
	ifstream ifs("Map.txt");
	if (ifs.fail())
	{
		cerr << "Error!" << endl;
		return -1;
	}

	//한 문자씩
	while (!ifs.eof()) 
	{
		cout << (char)ifs.get();
	}
	//한 줄씩
	/*string String;
	while (getline(ifs, String))
	{
		cout << String << endl;
	}*/

	//한번에 전체 읽기 - sstream 사용
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

	//파일 만들기.
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