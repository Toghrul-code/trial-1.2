#include <iostream>
#include <vector>

std::vector<int> getPrimeFactors(int n) {
    int x = 2;
    if (n == 1) return {1};

    std::vector<int> result;
    while (n > 1) {
        if (n % x == 0) {
            result.push_back(x);
            n = n / x;
            continue;
        }

        x++;
    }

    return result;
}

std::vector<int> getCommonElements(std::vector<int> a, std::vector<int> b){
    int i = 0, j = 0;
    std::vector<int> result;

    std::cout << a.size() << " " << b.size() << std::endl;
    while (!(a.size() - 1 == i && b.size() - 1 == j)) {
        std::cout << (a.size() - 1 == i && b.size() - 1 == j) << std::endl;
        std::cout << "i: " << i << " j: " << j << std::endl;
        if (a[i] == b[i]) {
            std::cout << "pushing " << a[i];
            result.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            std::cout << "pushing " << a[i];
            result.push_back(a[i]);
            i++;
        } else {
            std::cout << "pushing " << b[j];
            result.push_back(b[j]);
            j++;
        }
    }

    return result;
}

int main() {
    int n1, n2;
    std::cin >> n1;
    std::cin >> n2;

    auto primeFactors1 = getPrimeFactors(n1);
    auto primeFactors2 = getPrimeFactors(n2);
    auto commonDivisors = getCommonElements(primeFactors1, primeFactors2);
    for (int j = 0; j < commonDivisors.size(); j++)
        std::cout << commonDivisors[j] << ", ";

    return 0;
}

