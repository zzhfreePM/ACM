#include <bits/stdc++.h>
using namespace std;
int T, n, c[200005];
bitset<200004> s;
void deal()
{
    cin >> n, s.reset();
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    s[1] = 1, sort(c + 1, c + n + 1);
    if (c[1] != 1)
        return cout << "NO\n", void();
    for (int i = 2; i <= n; i++)
        if (s[c[i]])
            s |= s << c[i];
        else
            return cout << "NO\n", void();
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (cin >> T; T; T--)
        deal();
    return 0;
}