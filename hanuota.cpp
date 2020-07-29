#include <iostream>
#include <stdio.h>
using namespace std;

void hannuota(int n, string a, string b, string c) {
    if(n == 1) {
        printf("%s -----> %s\n", a.c_str(), c.c_str());
        return;
    }
    hannuota(n-1, a, c, b);
    printf("%s -----> %s\n", a.c_str(), c.c_str());
    hannuota(n-1, b, a, c);
}

int main() {
    int n;
    cin >> n;
    hannuota(n, "A", "B", "C");
    return 0;
}