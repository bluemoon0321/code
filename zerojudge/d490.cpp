#include <math.h>

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int in1, in2;
    while (cin >> in1 >> in2) {
        int out = 0;
        for (int i = in1; i <= in2; i++) {
            if (i % 2 == 0) out += i;
        }
        cout << out << endl;
    }
    return EXIT_SUCCESS;
}
