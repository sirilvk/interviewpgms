#include <iostream>

using namespace std;

int max(int x, int y)
{
    return (x>y ? x : y);
}

int rknapsack(int wt, int W[], int Val[], int n)
{
    if (wt == 0 || n == 0)
	return 0;

    // if single weight > total weight remove item
    if (W[n-1] > wt)
	return rknapsack(wt, W, Val, n-1);

    // max of include n & without n
    return max(Val[n-1] + rknapsack(wt-W[n-1], W, Val, n-1), rknapsack(wt, W, Val, n-1));
}

int main()
{
    int wt = 50;
    int W[] = {10, 20, 30};
    int V[] = {60, 100, 120};
    cout << rknapsack(wt, W, V, 3) << endl;
}
