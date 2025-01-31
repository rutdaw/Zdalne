
bool czy_pierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int value;
    std::cin >> value;

    if (value <= 0) {
        std::cout << "Podana liczba nie jest dodatnia!" << std::endl;
        return 1;
    }

    std::cout << value << " jest " << (czy_pierwsza(value) ? "liczbą pierwszą" : "nie jest liczbą pierwszą") << std::endl;
    return 0;
}
