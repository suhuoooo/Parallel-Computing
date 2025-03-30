#include<iostream>
using namespace std;
int main() {
	const int n = 50;
	int sum[n];
	int a[n];
	int b[n][n];
	//初始化
	for (int i = 0; i < n; i++) {
		a[i] = i;
		for (int j = 0; j < n; j++) {
			b[i][j] = i + j;
		}
	}
	//此处为优化算法。
	for (int i = 0; i < n; i++)
	{
		sum[i] = 0;
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum[i] += b[j][i] * a[j];
		}
	}
}