// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// ar 1.cpp : Defines the entry point for the console application.
//
#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 12,4,55,1,8 }, i, u, s=0, m, t=0;
	for (u = 0; 0 < 3; u++)
	{
		m = arr[u];
		for (i = u; i <= 3; i++)
		{
			if (m > arr[u])
			{
				m = arr[i];
				s = i;
			}
			t = arr[s];
			arr[s] = arr[u];
			arr[u] = t;
		}
		cout << "sorted values" << endl;
		for (i = 0; i < 3; i++)
		{
			cout << arr[i] << endl;
		}
	}
}
