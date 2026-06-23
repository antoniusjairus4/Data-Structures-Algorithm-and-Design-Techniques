#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Point{
    int x, y;
};

bool compare(Point a, Point b){
    if(a.x == b.x){
        return a.y < b.y;
    }

    return a.x < b.x;
}

long long crossProduct(Point a, Point b, Point c){
    return 1LL * (b.x - a.x) * (c.y - a.y) - 1LL * (b.y - a.y) * (c.x - a.x);
}

int main()
{
    int n;
    cin >> n;

    if(n <= 0){
        cout << "Invalid input";
        return 0;
    }

    vector<Point> points(n);

    for(int i = 0; i < n; i++){
        cin >> points[i].x >> points[i].y;
    }

    if(n == 1){
        cout << points[0].x << " " << points[0].y;
        return 0;
    }

    sort(points.begin(), points.end(), compare);

    vector<Point> hull;

    for(int i = 0; i < n; i++){
        while(hull.size() >= 2 && crossProduct(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) < 0){
            hull.pop_back();
        }

        hull.push_back(points[i]);
    }

    int lowerSize = hull.size();

    for(int i = n - 2; i >= 0; i--){
        while(hull.size() > lowerSize && crossProduct(hull[hull.size() - 2], hull[hull.size() - 1], points[i]) < 0){
            hull.pop_back();
        }

        hull.push_back(points[i]);
    }

    set<pair<int, int>> uniquePoints;

    for(Point p : hull){
        uniquePoints.insert({p.x, p.y});
    }

    for(auto p : uniquePoints){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}