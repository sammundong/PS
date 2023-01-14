#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector <int> input;
vector <int> ri;
vector <int> ox;
int main(void) {
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        input.push_back(q);
    }
    
    sort(input.begin(), input.end());
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        ri.push_back(q);
    }


    for (int i = 0; i < m; i++) {
        int start = 0;
        int end = input.size();
        int mid = 0;

        while (1) {
            if (start >= end) {
                ox.push_back(0);
                break;
            }
            mid = (start + end) / 2;
            if (input[mid] == ri[i]) {
                ox.push_back(1);
                break;
            }

            if (input[mid] > ri[i]) {
                end = mid;
            }
            if (input[mid] < ri[i]) {
                start = mid + 1;
            }
        }


    }
    for (int i = 0; i < m; i++) {
        cout << ox[i] << " ";
    }



    

    return 0;
}