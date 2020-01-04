// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Codechef- Breaking Bricks
// Problem Statement - https://www.codechef.com/JAN20B/problems/BRKBKS
// Main.cpp


#include<iostream>
using namespace std;

int main()
{
	int testCases;
	float sum, s, w1, w2, w3;

	cin >> testCases;
	for (int i = 0; i < testCases; i++)
	{
		cin >> s >> w1 >> w2 >> w3;
		sum = (w1 + w2 + w3) / s;
		cout << ceil(sum) << endl;
	}

	return 0;
}