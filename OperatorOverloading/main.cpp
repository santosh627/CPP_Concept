#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;
    
public:
    Complex (int r =0, int i = 0): real(r), imag(i){}
    
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
    
        return res;
    }
    
    void display()
    {
        cout << "Hello real: " << real << " and imag: " << imag << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(5, 7);
    Complex c3 = c1 + c2; // same as c1(c2);
    c3.display();
    
    return 0;
}