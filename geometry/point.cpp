using T = double;
typedef struct pt : complex<T> {
    pt(complex<T> c) : complex(c) {}
    pt(T x = 0, T y = 0) : complex(x, y) {}
    T operator , (pt a) { return real() * a.real() + imag() * a.imag(); }
    T operator * (pt a) { return real() * a.imag() - imag() * a.real(); }
} vec;