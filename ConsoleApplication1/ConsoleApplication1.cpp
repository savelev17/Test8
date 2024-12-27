#include <iostream>
class Point
{
private:
    double m_a;
    double m_b;
public:
    Point(double m_a = 0, double m_b = 0)
    {
        this->m_a = m_a;
        this->m_b = m_b;
    }
    void print()
    {
        std::cout << "Point(" << m_a << ", " << m_b << ")" << std::endl;
    }
};
int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();

    return 0;
}