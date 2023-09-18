#include <iostream>
#include <iomanip>
#include <ctime>
using std::time;

int NaiveGCD(int a, int b) {
    int gcd = 1;
    for (int d = 2; d < std::max(a, b); d++)
        if (a % d == 0 && b % d == 0) gcd = d;
    return gcd;
}

int main() {
    int needed_number, places;
    for (int i = 1200000; i < 1400000; i += 13837) {
        clock_t start_time = clock();
        needed_number = NaiveGCD(i, 123456789);
        clock_t end_time = clock();
        double spent_time = (end_time - start_time) / double(CLOCKS_PER_SEC);
        std::cout << std::setprecision(8) << "\n\nValues are " << i << " and 123456789. Answer is " << needed_number << "\nStart time - " << start_time << "\nEnd time - " << end_time << "\nSpent time - " << spent_time;
    }
}