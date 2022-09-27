#include <bits/stdc++.h>
using namespace std;
#include <string>

#define ONLINE_JUDGE                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


int main(){
ONLINE_JUDGE
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n][n];
     for (int line = 0; line < n; line++)
    {
        // Every line has number of integers
        // equal to line number
        for (int i = 0; i <= line; i++)
        {
        // First and last values in every row are 1
        if (line == i || i == 0)
            arr[line][i] = 1;
        // Other values are sum of values just
        // above and left of above
        else
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i];
        cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}
}