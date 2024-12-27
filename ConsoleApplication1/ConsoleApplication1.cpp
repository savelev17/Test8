#include <iostream>
#include <cmath>
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
    double distanceTo(const Point& point) const
    {
        return sqrt((m_a - point.m_a) * (m_a - point.m_a) + (m_b - point.m_b) * (m_b - point.m_b));
    }
};
int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}