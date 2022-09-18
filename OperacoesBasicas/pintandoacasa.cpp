#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float l1{}, l2{}, l3{};
    cin >> l1 >> l2 >> l3;

    float p = (l1 + l2 + l3)/ 2;

    float area = sqrt(p*(p - l1) * (p - l2) * (p - l3));

    printf("%.2f\n", area) ;

    return 0;


}