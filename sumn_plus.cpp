#include <iostream>
using namespace std;
const int N = 64;
int A[N];
void fuzhi(int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = i;
    }
}
int sumn(int* arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    // 将数组的后半部分加到前半部分
    int half_size = size / 2;
    for (int i = 0; i < half_size; i++)
    {
        arr[i] += arr[i + half_size];
    }

    // 递归处理前半部分
    return sumn(arr, half_size);
}
int sumn_wrapper()
{
    int temp[N];
    for (int i = 0; i < N; i++)
    {
        temp[i] = A[i];
    }
    return sumn(temp, N);
}
int main() {
    fuzhi(N);
     // 调用递归算法
     int sum_recursive =sumn_wrapper();
     cout << "递归算法结果: " << sum_recursive << endl;
}