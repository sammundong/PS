#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
using namespace std;
int arr[102];
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
  
    int t;
    cin >> t;
    int y_sum = 0;
    int m_sum = 0;
    
    for(int i=0; i<t; i++){
        int q;
        cin >> q;
        y_sum = y_sum + ((q / 30)+1) * 10;
        m_sum = m_sum + ((q / 60)+1) * 15;
        
    }

    if (y_sum > m_sum) {
        cout << "M" << " " << m_sum;
    }
    else if (y_sum < m_sum) {
        cout << "Y" << " " << y_sum;
    }
    else {
        cout << "Y" << " " << "M" << " " << y_sum;
    }


}
