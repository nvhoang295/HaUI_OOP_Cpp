#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("unroll-all-loops")
#pragma GCC optimize("O3")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE

#define For(i, b, e, s) for (int i = (b); (s) > 0 ? i < (e) : i > (e); i += (s))
#define Fore(e) For(i, 0, e, 1)
#define Forbe(b, e) For(i, b, e, 1)
#define Forbes(b, e, s) For(i, b, e, s)
#define Foribes(i, b, e, s) For(i, b, e, s)
#define Each(x, a) for (auto &x : a)

#define vt vector
#define vl vector<ll>
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define eb emplace_back
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define Sort(v) sort(all(v))

#define mp make_pair
#define pll pair<ll, ll>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pii pair<int, int>

#define endl "\n"
#define tab "\t"
#define sp " "

#define track1(a) cout << #a << ": " << (a) << endl
#define track2(a, b)                                                           \
    cout << #a << ": " << (a) << " | " << #b << ": " << (b) << endl
#define track3(a, b, c)                                                        \
    cout << #a << ": " << (a) << " | " << #b << ": " << (b) << " | " << #c     \
         << ": " << (c) << endl
#define track4(a, b, c, d)                                                     \
    cout << #a << ": " << (a) << " | " << #b << ":" << (b) << " | " << #c      \
         << ":" << (c) << " | " << #d << ": " << (d) << endl

template <class T> void read(T &x) { cin >> x; }
template <class H, class... T> void read(H &h, T &...t) {
    read(h);
    read(t...);
}

template <class T> void write(T &x) { cout << x << sp; }
template <class H, class... T> void write(H &h, T &...t) {
    write(h);
    write(t...);
}

#define sqr(x) ((x) * (x))
#define yesno(x) cout << ((x) ? "YES" : "NO") << endl
#define mlt(t)                                                                 \
    int t;                                                                     \
    read(t);                                                                   \
    while (t--)

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) { return uniform_int_distribution<ll>(a, b)(mt_rng); }

class HCN {
private:
    int D;
    int R;

public:
    void NHAP() {
        // cout << ">>> Nhap vao chieu dai: ";
        cin >> D;
        // cout << ">>> Nhap vao chieu rong: ";
        cin >> R;
    }

    void VE() {
        for (int i = 1; i <= R; ++i) {
            if (i == 1 || i == R) {
                for (int j = 1; j <= D; ++j)
                    cout << "*";
                cout << endl;
            } else {
                cout << "*";
                for (int j = 2; j <= D - 1; ++j)
                    cout << " ";
                cout << "*" << endl;
            }
        }
    }

    long long DIENTICH() { return D * R; }

    double CHUVI() { return (D + R) / 2.0; }
};

void solve() {
    HCN x;
    x.NHAP();
    x.VE();

    long long dienTich = x.DIENTICH();
    double chuVi = x.CHUVI();

    cout << "Dien tich = " << dienTich << endl;
    cout << "Chu vi = " << chuVi << endl;
}

int_fast32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // mlt(t) {
    solve();
    //}
    return 0;
}