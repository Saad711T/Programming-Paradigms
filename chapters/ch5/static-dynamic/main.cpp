#include <iostream>

int x = 1;

void f() {
    std::cout << x << " ";
}

void g() {
    int x = 5;
    f();
}

int main() {
    f();
    g();
}