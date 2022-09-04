#include <iostream>
#include "xcept.H"
#include <conio.h>
using namespace std;

template <class T>
class Array1D;
template <class T>
ostream &operator<<(ostream &, const Array1D<T> &);

template <class T>
class Array1D
{
    friend ostream &operator<<<>(ostream &, const Array1D<T> &);

public:
    int size;
    T *element;
    Array1D(int size = 0);
    Array1D(const Array1D<T> &v);
    ~Array1D() { delete[] element; }
    T &operator[](int i) const;
    int Size() { return size; }
    Array1D<T> &operator=(const Array1D<T> &v);
    Array1D<T> operator+() const;
    Array1D<T> operator+(const Array1D<T> &v) const;
    Array1D<T> operator-() const;
    Array1D<T> operator-(const Array1D<T> &v) const;
    Array1D<T> operator*(const Array1D<T> &v) const;
    Array1D<T> &operator+=(const T &x);
    Array1D<T> &ReSize(int sz);
};

template <class T>
Array1D<T>::Array1D(int sz)
{
    if (sz < 0)
        throw BadInitializers();
    size = sz;
    element = new T[sz];
}

template <class T>
Array1D<T>::Array1D(const Array1D<T> &v)
{
    size = v.size;
    element = new T[size];
    for (int i = 0; i < size; i++)
        element[i] = v.element[i];
}

template <class T>
T &Array1D<T>::operator[](int i) const
{
    if (i < 0 || i >= size)
        throw OutOfBounds();
    return element[i];
}

template <class T>
Array1D<T> &Array1D<T>::operator=(const Array1D<T> &v)
{
    if (this != &v)
    {
        size = v.size;
        delete[] element;
        element = new T[size];
        for (int i = 0; i < size; i++)
            element[i] = v.element[i];
    }
    return *this;
}

template <class T>
Array1D<T> Array1D<T>::operator+(const Array1D<T> &v) const
{
    if (size != v.size)
        throw SizeMismatch();
    Array1D<T> w(size);
    for (int i = 0; i < size; i++)
        w.element[i] = element[i] + v.element[i];
    return w;
}

template <class T>
Array1D<T> Array1D<T>::operator-(const Array1D<T> &v) const
{
    if (size != v.size)
        throw SizeMismatch();
    Array1D<T> w(size);
    for (int i = 0; i < size; i++)
        w.element[i] = element[i] - v.element[i];
    return w;
}

template <class T>
Array1D<T> Array1D<T>::operator-() const
{
    Array1D<T> w(size);
    for (int i = 0; i < size; i++)
        w.element[i] = -element[i];
    return w;
}

template <class T>
Array1D<T> Array1D<T>::operator*(const Array1D<T> &v) const
{
    if (size != v.size)
        throw SizeMismatch();
    Array1D<T> w(size);
    for (int i = 0; i < size; i++)
        w.element[i] = element[i] * v.element[i];
    return w;
}

template <class T>
Array1D<T> &Array1D<T>::operator+=(const T &x)
{
    for (int i = 0; i < size; i++)
        element[i] += x;
    return *this;
}

template <class T>
std::ostream &operator<<(std::ostream &out, const Array1D<T> &x)
{ // Put the elements of x into the stream out.
    for (int i = 0; i < x.size; i++)
        out << x.element[i] << "  ";
    return out;
}

template <class T>
Array1D<T> &Array1D<T>::ReSize(int sz)
{
    if (sz < 0)
        throw BadInitializers();
    delete[] element;
    size = sz;
    element = new T[size];
    return *this;
}

int main()
{
    Array1D<int> X(10), Y(10), Z(10);
    for (int i = 0; i < 10; i++)
        X[i] = i;
    cout << "X[3] = " << X[3] << endl;
    cout << "X is " << X << endl;
    Y = X;
    cout << "Y is " << Y << endl;
    X += 2;
    cout << "X incremented by 2 is " << X << endl;
    Z = (Y + X) * Y;
    cout << "(Y + X) * Y is " << Z << endl;
    cout << "-(Y + X) * Y is " << -Z << endl;
}
