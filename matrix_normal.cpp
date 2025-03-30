#include<iostream>
using namespace std;
int main() {
	const int n = 500;
	int sum[n];
	int a[n];
	int b[n][n];
	//初始化矩阵
	for (int i = 0; i < n; i++) {
		a[i] = i;
		for (int j = 0; j < n; j++) {
			b[i][j] = i + j;
		}
	}
	for (int i = 0; i < n; i++) {
		sum[i] = 0.0;
		for (int j = 0; j < n; j++) {
			sum[i] += b[i][j] * a[j];
		}
	}

}