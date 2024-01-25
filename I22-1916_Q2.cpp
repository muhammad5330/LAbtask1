#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
    double getcorX() {
        return x;
    }
    double getcorY() {
        return y;
    }
    void setcorX(double x) {
        this->x = x;
    }
    void setcorY(double y) {
        this->y = y;
    }
    double distance(Point p) {
        double dx = x - p.getcorX();
        double dy = y - p.getcorY();
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    Point p1(5.6, 1.2);
    Point p2(9.8, 7.9);
    cout << "Distance between cor-x and cor-y: " << p1.distance(p2) << endl;
    return 0;
}
