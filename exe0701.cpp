#include<iostream>
#include<cstdlib>
#include<fstream>
//#include<string>
#include<ctime>
using namespace std;
int main()
{
	ofstream ofile;
	ofile.open("data2.txt");
	if ( ! ofile.is_open())
	{
		cout << "文件打开成功？了吗孩子你再看看你后面呢" << endl;
		return 0;
	}
	srand(int(time(0)));
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		j = rand() % 451 + 50;
		k = rand() % 451 + 50;
		int r;
		for (r = (j < k) ? j : k; r >= 1 ; r--)
		{
			if (j%r == 0 && k % r == 0)
				break;
		}
		ofile << "(" << j << "," << k << ") 的最大公约数为：" << r << endl;
	}
	ofile.close();
	return 0;
}
