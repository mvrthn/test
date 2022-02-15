#include <cstdio>

using namespace std;

int getInt(char c) {
    return static_cast<int>(c) - 96;
}

int main() {
    char bishopChar, pawnChar;
    int b, y;
    scanf("%c%d\n%c%d", &bishopChar, &b, &pawnChar, &y);
    int a = getInt(bishopChar);
    int x = getInt(pawnChar);

    int c1 = b - a;
    int c2 = b + a;
    if(y == x + c1 || y == -x + c2) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    return 0;
}