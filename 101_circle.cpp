#include "bits/stdc++.h"
using namespace std;

//หาพื้นที่วงกลม  πr^2
double circlearea(int r){
  double carea=M_PI*pow(r,2);
  return (carea);
}

//หาเส้นรอบวง 2πr
double circleline(int r){
  double cline = 2*M_PI*r;
  return (cline);
}

int main (){
    int r,h;
    cin>>r>>h;
    //แสดงพื้นที่วงกลม   πr^2
    printf("circlearea : ");
    printf("%.2f\n",circlearea(r));

    //แสดงเส้นรอบวง 2πr
    printf("circleline : ");
    printf("%.2f\n",circleline(r));

    //หาปริมาตรทรงกลม   4/3πr^3
    printf("sphereVolume : ");
    double sphereVolume = 4.0/3.0*circlearea(r)*r;
    printf("%.2f\n",sphereVolume);

    //พื้นที่ผิวทรงกลม   4πr^2
    printf("sphereSurface : ");
    cout << fixed << setprecision(2) << 4 * circlearea(r) << "\n";
    //พื้นที่ผิวทรงกระบอกคือ : 2πrh+2(πr^2)
    printf("cylinderSurface : ");
    cout << fixed << setprecision(2) << (circleline(r)*h) + (2.00 * circlearea(r)) << "\n";
    //ปริมาตรทรงกระบอกคือ : hπr^2
    printf("cylinderVolume : ");
    cout << fixed << setprecision(2) << h*(circlearea(r)) << "\n";
    //พื้นที่ผิวของกรวยคือ : πrh+πr^2
    printf("coneSurface : ");
    cout << fixed << setprecision(2) << (M_PI * r * h) + circlearea(r) << "\n";
    //ปริมาตรของกรวยคือ : 1/3hπr^2
    printf("coneVolume : ");
    cout << fixed << setprecision(2) <<  (h * circlearea(r))/3.00 << "\n";
    return 0;

}
