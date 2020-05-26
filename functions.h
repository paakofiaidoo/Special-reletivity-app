#ifndef functions
#define functions
#include "fundamental.cpp"
#include"home-ui.cpp"
#include "TimeDilation.cpp"
#include "lenghtContraction.cpp"
#include "galileanTransform.cpp"
#include "lorenzTransfrom.cpp"
#include "dataBase.cpp"



class SpecialRele: public TimeDilation
{
private:   
    //before event
    double xo , to, lo,vo;
    double x ,t, l, v;
public:
    
};




//functions on fundamental.cpp
float velocityF();
float c();
float beta(double v);
float beta();
float gamma(double velocity);
float gamma();

int plm =10000;
//functions in home-ui.cpp
void homeUI();
#endif



//functions in lenghtContraction.cpp
// function to find L
void findL();
//function to find Lo
void findLo();
//function to find v
void findVLenght();
//main function
void lenghtContraction();

//functions ingalileanTransform.cpp
// function to resolve the position using galilean transform 
void galileanPositionTransform();
//function to resolve the velocity using galilean transform 
void galileanVelocityTransform();
//function to find v
//void findVLenght();
//main function
void galileanTransform();

//functions in lorenzTransform.cpp
void lorenzPositionTransform();
void lorenzVelocityTransform();
void lorenzTransformations();
