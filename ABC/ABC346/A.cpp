#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> ans(N - 1);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = A.at(i) * A.at(i + 1);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i) << " ";
    }
    cout << endl;

    return 0;
}

// 20min