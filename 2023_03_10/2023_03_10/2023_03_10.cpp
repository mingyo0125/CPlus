#include <iostream>
#include <string>
using namespace std;

int main()
{
	#pragma region 구구단

	/*
	int input;
	cout << "구구단 중에서 출력하고 싶은 단을 입력하세요";
	cin >> input;

	for (int i = 1; i <= 9; i++)
	{
		cout << i << "*" << input << "=";
		cout << i * input << endl;
	}

	cout << endl;

	int cnt = 1;
	while (cnt <= 9)
	{
		cout << cnt << "*" << input << "=";
		cout << cnt * input << endl;
		cnt++;
	}

	cout << endl;

	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	for (int elem : arr)
	{
		cout << elem << "*" << input << "=";
		cout << elem * input << endl;
	}

	cout << endl;

	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i] << "*" << input << "=";
		cout << arr[i] * input << endl;
	}
	*/

	
	#pragma endregion

	#pragma region 자음모음

	
	string input;
	int za = 0;
	int mo = 0;
	string moem;
	
	cout << "영문자를 입력하고 1을 치세요" << endl;

	while (true)
	{
		cin >> input;
		if (input != "1")
		{
			if (input == "a" || input == "e" || input == "i" || input == "o" || input == "u")
			{
				mo++;
			}
			else
			{
				za++;
			}
		}
		else if (input == "1")
		{
			break;
		}
	}

	cout << "모음 : " << mo;
	cout << "자음 : " << za;
	
	#pragma endregion

}

inline int Swap(int* a, int* b) //포인터, inline(메인에 집어넣어줌)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

	cout << "Swap" << endl << a << endl << b;
}

//int _Swap(int& a, int& b) //참조
//{
//	int temp = 0;
//
//	temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap" << endl << a << endl << b;
//}