#include <string>
#include <iostream>

using namespace std;

#define REP(x, n) for(int x = 0; x < n; ++x)

int main() {

    int n; cin >> n;
    char p = 0;
    int k, t; t = 0; k = 1;

    REP(i, n) {
	char a; cin >> a;
	if(a == p) ++k;
	else { t += k / 2; k = 1; }
	p = a;
    }
    t += k / 2;
    cout << t << "\n";

    return 0;
}
