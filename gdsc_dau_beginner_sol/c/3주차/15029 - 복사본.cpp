#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
using namespace std;
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int a;
    int b;
    
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;     
        vector <int> df;
        int min = 10001;
        for (int i = 0; i < a; i++) {
            int q;
            cin >> q;
            if (min > q) min = q;
        }
        for (int i = 0; i < b; i++) {
            int q;
            cin >> q;
            df.push_back(q);
        }
        sort(df.begin(), df.end());
        int of = df[1];

        if (min >= of) {
            cout << "N" << '\n';
        }
        else {
            cout << "Y" << '\n';
        }
    }

}
