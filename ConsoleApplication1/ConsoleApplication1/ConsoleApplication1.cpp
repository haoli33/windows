#include <iostream>
#include "Lib1.h"
using namespace std;
#pragma comment(lib,"../Debug/Lib1.lib")
int main()
{
	int a = 30;
	int b = 12;
	cout << SumSquare(a, b) << endl;
	cout << SquareSum(a, b) << endl;

	system("pause");
	return 0;

}

