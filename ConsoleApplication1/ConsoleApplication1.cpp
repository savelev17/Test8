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
    friend double distanceFrom(const Point& point1, const Point& point2);
};
double distanceFrom(const Point& point1, const Point& point2)
{
    return sqrt((point1.m_a - point2.m_a) * (point1.m_a - point2.m_a) + (point1.m_b - point2.m_b) * (point1.m_b - point2.m_b));
}
int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}