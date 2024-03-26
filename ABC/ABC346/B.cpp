#include <bits/stdc++.h>
using namespace std;

int main()
{
    int W, B;
    cin >> W >> B;
    int totalLength = W + B;
    string S = "wbwbwwbwbwbw";
    S = string(10000, 'w') + S;

    if (totalLength > 2 && (W == 0 || B == 0))
    {
        cout << "No";
        return 0;
    }

    for (int i = 0; i <= S.size() - totalLength; i++)
    {
        int countW = 0;
        int countB = 0;
        for (int j = i; j < i + totalLength; j++)
        {
            if (S.at(j) == 'w')
            {
                countW++;
            }
            else
            {
                countB++;
            }
        }
        if (W == countW && B == countB)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}