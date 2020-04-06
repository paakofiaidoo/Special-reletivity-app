#include <iostream>
#include <Cmath>

using namespace std;

float velocityF();
float c(){
    int inp;
    float c;
    cout << "what constant will you use for the speed of light"<<endl;
    cout << "1) 3x10^8 m/s \n 2) 299 792 458 m / s"<<endl;
    cin >> inp;

    switch (inp)
    {
    case 1:
        c = 3.0e8;
        break;
    case 2:
        c = 2.9e8;

    default:
        break;
    }
    cout << "Therefore the speed of light, c = "<< c <<endl;
    return c;
}

float velocityF(){
    cout << "\n what form of input are you giving for the velocity: \n1) x *10^8 m/s\n 2) x m/s" << endl;
    int x;
    float velocity;
    cin >> x;
    switch (x)
    {
    case 1:
        cin >> x ;
        velocity = x * 1e8;

    case 2:
        cin >> x ;
        velocity = x;
        break;
    default:
        break;
    }
    try
    {
        int err;
        if(velocity > 3e8 )
            throw err;
    cout << "Therefore velocity, v = "<< velocity<<endl;
        return velocity;
    }
    catch(int e)
    {
        cout << "the velocity is greater that the speed of light breaking the theory of relativity" << endl;
        velocityF();
    }

}

float beta(double v){
    float beta;
    beta = v / c();
    cout << "speed ratio , beta = "<< beta<<endl;
    return beta;
}

float gamma(double velocity){
    float gamma;
    gamma = 1 / (sqrt(1 - pow(beta(velocity),2)));
    return gamma;
}

float gamma(){
    float gamma;
    float velo = velocityF();
    gamma = 1 / (sqrt(1 - pow(beta(velo),2)));
    cout << "lorentz factor , gamma = "<< gamma<<endl;
    return gamma;
}
 /*int main() {
     gamma();
     return 0;
 }*/
