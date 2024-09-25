#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
double distance(double xa,double ya,double xb,double yb){
	double dx=xb-xa;
	double dy=yb-ya;
	return sqrt(dx*dx + dy*dy);
}
int main(){
	double xa=1,ya=2;
	double xb=4,yb=6;
	double dist= distance(xa,ya,xb,yb);
	cout<<"La distance entre les points A(" << xa << ", " << ya << ") et B(" << xb << ", " << yb << ") est : " << dist << endl;
	return 0;
}
