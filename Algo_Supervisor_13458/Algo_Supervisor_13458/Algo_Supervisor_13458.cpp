// Algo_Supervisor_13458.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
/*
TC
1
1
1 1
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int N, B, C;

/*Nooooooooooooooooooooooooooooooooooo*/
long long pri, sub;
int room[2000000];

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> room[i];
	}
	cin >> B >> C;

	for (int i = 0; i < N; i++)
	{
		room[i] -= B;
		pri++;
	}

	for (int i = 0; i < N; i++)
	{
		if (room[i] <= 0)
			continue;
		pri = sub + (room[i] / C);
		if (room[i] % C != 0)
			pri++;
	}

	cout << pri+sub << endl;
    return 0;
}

