// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
class MathA
{
	public:
		int GetMax(int a, int b)
		{
			return (a > b) ? a : b;
		}
		
		

};
class MathB :public MathA //MathB繼承MathA
{
	public:
		int GetAbs(int a)
		{
			return (a > 0) ? a : -(a);
		}

};
class MathC :public MathB //MathC繼承MathB
{
	public:
		int GetFacotial(int a)
		{
			if (a == 0)
			{
				return 1;
			}
			else
			{
				return(a * GetFacotial(a - 1));
			}
		}

};



int main()
{
	MathC objC;
	cout << "100和65最大數是" << objC.GetMax(100, 65)<<endl;
	cout << "-99絕對值是" << objC.GetAbs(-99) << endl;
	cout << "5!階層是:" << objC.GetFacotial(5) << endl;



	
	system("PAUSE");
	
	return 0;
} 


