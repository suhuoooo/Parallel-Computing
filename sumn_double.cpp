#include<iostream>
using namespace std;
int main() {
	const int n = 64;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	int sum = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < n; i+=2) {
		sum1 += a[i];
		sum2 += a[i + 1];
	}
	sum = sum1 + sum2;
	cout << "ºÏÎª" << sum;
}