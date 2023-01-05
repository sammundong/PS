#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long int> ve;
int N;

int main(void) {
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        ve.push_back(num);
    }




    long long int ans = 0;
    for (int i = 1; i < N - 1; i++) {
        int Min = min(ve[i - 1], ve[i + 1]);
        ans = max(ans, ve[i] + Min);
    }
    cout << max({ ans,ve[0],ve[ve.size() - 1] });

    return 0;
}