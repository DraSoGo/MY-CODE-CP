#include "closest_pair.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int manhattan_distance(const Point& a, const Point& b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

// นักเรียนเติมฟังก์ชัน divide & conquer ตรงนี้
int closest_pair(vector<Point> points) {
    // Placeholder สำหรับผลลัพธ์เริ่มต้น
    return -1;
}