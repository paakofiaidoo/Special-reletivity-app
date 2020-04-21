#include <iostream>
#include <Cmath>
#ifndef fundamenatal_h
#define fundamenatal_h

using namespace std;

float velocityF();
float c(){
    int inp;
    float sol;
    cout << "what constant will you use for the speed of light"<<endl;
    cout << "1) 3x10^8 m/s \n 2) 299 792 458 m / s"<<endl;
    cin >> inp;

    switch (inp)
    {
    case 1:
        sol = 3.0e8;
        break;
    case 2:
        sol = 2.99792458e8;
        break;
    default:
    std::cout << "invalid input, try again" << std::endl;
        c();
        break;
    }
    cout << "Therefore the speed of light, c = "<< sol << " m/s" <<endl;
    return sol;
}

float velocityF(){
    cout << "\n what form of input are you giving for the velocity: \n1) x *10^8 m/s\n 2) x m/s" << endl;
    int x;
    float sol;
    float velocity;
    cin >> x;
    switch (x)
    {
    case 1:
        cout<< "input the value of v ";
        cin >> x ;
        velocity = x * 1e8;
        break;
    case 2:
        cout<< "input the value of v";
        cin >> x ;
        velocity = x;
        break;
    /*case 3:
        cin >> x;
        sol = c();
        velocity = x* sol;
    */
    default:
        std::cout << "invalid input, try again " << std::endl;
        velocityF();
        break;
    }
    try
    {
        int err;
        if(velocity > 3e8 )
            throw err;
        cout << "Therefore velocity, v = "<< velocity<< "m/s"<<endl;
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
float beta(){
    float beta;
    float velo = velocityF();
    beta = velo / c();
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
     c();
     return 0;
 }*/
#endif
