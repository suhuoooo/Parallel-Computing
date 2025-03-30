#include<iostream>
using namespace std;
int main() {
	const int n = 64;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << "ºÏÎª"<<sum;
}