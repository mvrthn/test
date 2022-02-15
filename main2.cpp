#include <cstdio>

int main() {
    int n, x;
    scanf("%d %d\n", &n, &x);
    int result = n * x;
    x--;
    result /= x;
    if(n % x == 0)
        result--;
    printf("%d\n", result);
}