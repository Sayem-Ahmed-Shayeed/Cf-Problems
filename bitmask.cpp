#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        double px, py, ax, ay, bx, by;
        cin >> px >> py;
        cin >> ax >> ay;
        cin >> bx >> by;
        double op = sqrt((px*px) + (py*py));
        double oa = sqrt((ax*ax) + (ay*ay));
        double bo = sqrt((bx*bx) + (by*by));
        double ap = sqrt((ax - px)*(ax - px)+(ay - py)*(ay - py));
        double bp = sqrt((bx - px)*(bx - px)+(by - py)*(by - py));
        double ab = sqrt((ax - bx)*(ax - bx)+(ay - by)*(ay - by));
        //d ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8;
    /*ans1 = sqrt((ax-px)*(ax-px)+(ay-py)*(ay-py));  // distance a to p
    ans2 = sqrt((ax)*(ax)+(ay)*(ay));              // distance a to 0
    ans3 = sqrt((bx-px)*(bx-px)+(by-py)*(by-py));  // distance b to p
    ans4 = sqrt((bx)*(bx)+(by)*(by));              // distance b to 0

    ans5 = minn(maxx(ans1,ans2) , maxx(ans3,ans4));

    ans6 = (sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)))) /2.0000;

    ans7 = maxx(maxx(ans6 , minn(ans1,ans3)), minn(ans2,ans4));

    ans8 = minn(ans5,ans7);

    printf("%.10Lf\n",ans8);*/
    double x=min(max(ap,oa),max(bp,bo));
    double y=ab/2;
    double z=max(max(y,min(ap,bp)),min(oa,bo));
    double ans=min(x,z);
        cout<<fixed<<setprecision(10);
        cout<<ans<<"\n";
    }

    return 0;
}
