#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

struct Point {
    long long x, y;
    Point() {}
    Point(long long _x,long long _y):x(_x),y(_y){}
    bool operator<(const Point& o) const {
        return x < o.x || (x == o.x && y < o.y);
    }
    bool operator==(const Point& o) const {
        return x == o.x && y == o.y;
    }
};


struct Geometry {
    // ---------- Basic Operations ----------
    static long long cross(const Point& a,const Point& b,const Point& c){
        return (b.x-a.x)*(c.y-a.y) - (b.y-a.y)*(c.x-a.x);
    }
    static long long dot(const Point& a,const Point& b,const Point& c){
        return (b.x-a.x)*(c.x-a.x) + (b.y-a.y)*(c.y-a.y);
    }
    static long long dist2(const Point& a,const Point& b){
        long long dx=a.x-b.x, dy=a.y-b.y;
        return dx*dx+dy*dy;
    }

    // ---------- Segment Intersection ----------
    static bool onSeg(const Point& a,const Point& b,const Point& p){
        return cross(a,b,p)==0 &&
               min(a.x,b.x)<=p.x && p.x<=max(a.x,b.x) &&
               min(a.y,b.y)<=p.y && p.y<=max(a.y,b.y);
    }
    static bool segIntersect(Point a,Point b,Point c,Point d){
        long long c1=cross(a,b,c), c2=cross(a,b,d);
        long long c3=cross(c,d,a), c4=cross(c,d,b);
        if((c1==0&&onSeg(a,b,c))||(c2==0&&onSeg(a,b,d))||
           (c3==0&&onSeg(c,d,a))||(c4==0&&onSeg(c,d,b))) return true;
        return (c1>0)!=(c2>0) && (c3>0)!=(c4>0);
    }

    // ---------- Convex Hull (Monotone Chain) ----------
    static vector<Point> convexHull(vector<Point> pts){
        sort(pts.begin(),pts.end());
        pts.erase(unique(pts.begin(),pts.end()),pts.end());
        int n=pts.size();
        if(n<=1) return pts;
        vector<Point> lower,upper;
        for(auto& p:pts){
            while(lower.size()>=2 && cross(lower[lower.size()-2],lower.back(),p)<=0)
                lower.pop_back();
            lower.push_back(p);
        }
        for(int i=n-1;i>=0;i--){
            auto p=pts[i];
            while(upper.size()>=2 && cross(upper[upper.size()-2],upper.back(),p)<=0)
                upper.pop_back();
            upper.push_back(p);
        }
        lower.pop_back(); upper.pop_back();
        lower.insert(lower.end(),upper.begin(),upper.end());
        return lower; // hull CCW
    }

    // ---------- Polygon Area ----------
    static long long polygonArea2(const vector<Point>& poly){
        long long area=0; int n=poly.size();
        for(int i=0;i<n;i++){
            int j=(i+1)%n;
            area += poly[i].x*poly[j].y - poly[i].y*poly[j].x;
        }
        return area; // actual area = |area|/2.0
    }

    // ---------- Point in Convex Polygon ----------
    // return: -1=outside, 0=on border, 1=inside
    static int pointInConvex(const vector<Point>& poly,const Point& q){
        int n=poly.size();
        if(n<3) return 0;
        for(int i=0;i<n;i++){
            long long c=cross(poly[i],poly[(i+1)%n],q);
            if(c<0) return -1;
            if(c==0 && onSeg(poly[i],poly[(i+1)%n],q)) return 0;
        }
        return 1;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int c,p;
        cin >> c >> p;
        vector <Point> C;
        vector <Point> P;
        ll x,y;
        for(int j=0;j<c;j++){
            cin >> x >> y;
            C.pb({x,y});
        }
        for(int j=0;j<p;j++){
            cin >> x >> y;
            P.pb({x,y});
        }

        vector <Point> convex= Geometry::convexHull(C);
        

        cout << "Case " << i+1 <<endl;
        for(auto [k,u]:convex){
            cout << k << " " << u << endl;
        }
        cout << convex[0].x << " " << convex[0].y <<endl;
        
        for(auto [k,u]:P){
            if(Geometry::pointInConvex(convex,{k,u})<0){
                cout << k << " " << u << " is safe!\n";
            }else{
                cout << k << " " << u << " is unsafe!\n";
            }
        }        
        cout <<endl;
    }
}