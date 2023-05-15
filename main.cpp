#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a,b;
    cin >> a >> b;
    if (a<0) exit(1);
    if (b<0) exit(1);

    cout << add(3, -2) << endl;
    return 0;
}