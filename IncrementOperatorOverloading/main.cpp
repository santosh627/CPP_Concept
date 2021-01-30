#include <iostream>

using namespace std;

class IncrementValue
{
private:
    int value;
    
public :
    IncrementValue(int num = 0): value(num) {}
    
    void operator ++ ()
    {
        ++value;
    }
    
    //To use postincrement int must be passed as arg
    //its not a function parameter just a rule to use postincrement
    void operator ++ (int)
    {
        ++value;
    }
    
    void display ()
    {
        cout << "final value: " << value << endl;
    }
};

int main ()
{
    IncrementValue iv(4);
    
    ++iv;
    iv.display();
    
    iv++;
    iv.display();
    
    ++iv;
    iv.display();
    
    return 0;
}