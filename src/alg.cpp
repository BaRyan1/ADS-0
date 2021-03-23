// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    return (a == 0) ? b: gcd(b % a, a);
}
 
int main() {
    int n, m = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        m = gcd(m, a);
    }
    cout << m;
    return 0;
}
