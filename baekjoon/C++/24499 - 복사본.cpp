#include <iostream>
using namespace std;

int arr[100001];
int value[100001];
int N, K;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < K; i++) {
        sum += arr[i];
    }
    value[0] = sum;

    int idx = K;
    int max = value[0];
    for (int i = 1; i < N; i++) {
        idx = (i + K - 1) % N;
        value[i] = value[i - 1] + arr[idx] - arr[i - 1];
        if (max < value[i]) {
            max = value[i];
        }
    }

    cout << max << "\n";
    return 0;
}