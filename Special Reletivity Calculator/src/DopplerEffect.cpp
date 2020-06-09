#include "DopplerEffect.h"
#include <iostream>
#include <cmath>

using namespace std;
void DopplerEffect::dopplerEffectUI()
{
    cout << "for light transmitted by a source in frame O and seen by an observer in O*, let calculate for its relativity doppler effect \n";
    cout << "1) frequency when source/receiver is approaching (blue shift)"<<endl;
    cout << "2) frequency when source/receiver is receding (red shift)"<<endl;
    cout << "3) wavelenght when source/receiver is approaching (blue shift)"<<endl;
    cout << "4) wavelenght when source/receiver is receding (red shift)\n"<<endl;
    char option;
    cin >> option;
    switch (option)
    {
    case '1':
        approchingFreq();
        break;
    case '2':
        recedingFreq();
        break;
    case '3':
        approchingWaveUI();
        break;
    case '4':
        recedingWaveUI();
        break;
    default:
        cout << "invalid input, try again\n\n";
        dopplerEffectUI();
        break;
    }


}

void DopplerEffect::approchingFreq(){
    cout << "When source/receiver is approaching (blue shift), what variable do you want to find in this situation: \n";
    cout << "1) source frequency \n2) observer frequency \n3) velocity of the light"<<endl;
    char option;
    cin >> option;
    float temp;
    switch (option)
    {
    case   '1':
        cout << "input the value of observed frequency f* : "<<endl;
        cin >>fo;
        cout << "input the value for velocity of the object v : ";
        v = velocityF();
        temp = (1 + beta(v))/(1 - beta(v));
        f = sqrt(temp) * fo;
        cout<< "the frequency of the light emitted as the source and observer are approaching each-other is : " << f<<endl;
        break;

    case '2':
        cout << "input the value of source frequency f: ";
        cin >> f;
        cout << "input the value for velocity of the object v : ";
        v = velocityF();
        temp = (1 + beta(v))/(1 - beta(v));
        fo = f / sqrt(temp);
        cout<< "the frequency of the light received as the source and observer are approaching form each other is : " << f<<endl;
        break;
    case '3':
        cout << "input the value of observed frequency f* : "<<endl;
        cin >>fo;
        cout << "input the value of source frequency f*: ";
        cin >>f;
        temp = pow((f/fo),2);
        temp = (temp - 1)/(1 + temp);
        v = temp * c();
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        approchingFreq();
        break;
    }

}


void DopplerEffect::recedingFreq(){
    cout << "When source/receiver is receding (red shift), what variable do you want to find in this situation: \n";
    cout << "1) source frequency \n2) observer frequency \n3) velocity of the light"<<endl;
    char option;
    cin >> option;
    float temp;
    switch (option)
    {
    case  '1':
        cout << "input the value of source frequency f*: ";
        cin >> fo;
        cout << "input the value for velocity of the object v : ";
        v = velocityF();
        temp = (1 - beta(v))/(1 + beta(v));
        f = sqrt(temp) * fo;
        cout<< "the frequency of the light received as the source and observer are aproching form each other is : " << f<<endl;
        break;
    case '2':
        cout << "input the value of observed frequency f : "<<endl;
        cin >>f;
        cout << "input the value for velocity of the object v : ";
        v = velocityF();
        temp = (1 - beta(v))/(1 + beta(v));
        fo = f / sqrt(temp);
        cout<< "the frequency of the light emitted as the source and observer are aproching form each-other is : " << f<<endl;
        break;
    case '3':
        cout << "input the value of observed frequency f : "<<endl;
        cin >>f;
        cout << "input the value of source frequency f*: ";
        cin >>fo;
        temp = pow((f/fo),2);
        temp = (1 - temp)/(1 + temp);
        v = temp * c();
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        recedingFreq();
        break;
    }
}

float DopplerEffect::approchingWaveFindWs(float recivedWavelenght, float waveVelocity){
    float temp = (1 + beta(waveVelocity))/(1 - beta(waveVelocity));
    temp = recivedWavelenght / sqrt(temp);
    return temp;
}
float DopplerEffect::approchingWaveFindWr(float sourceWavelenght,float waveVelocity){
    float temp = (1 + beta(waveVelocity))/(1 - beta(waveVelocity));
    temp = sqrt(temp) * sourceWavelenght;
    return temp;
}
float DopplerEffect::approchingWaveFindV(float sourceWavelenght, float recivedWavelenght){
    float temp = pow((recivedWavelenght/sourceWavelenght),2);
    temp = (temp - 1)/(1 + temp);
    temp = temp * c();
    return temp;
}

void DopplerEffect::approchingWaveUI(){
    cout << "When source/receiver is approaching (blue shift), what variable do you want to find in this situation: \n";
    cout << "1) source wavelength \n2) observer wavelength \n3) velocity of the light"<<endl;
    char option;
    cin >> option;
    switch (option)
    {
    case   '1':
        cout << "input the value of observed wavelength, Wr : "<<endl;
        cin >> Wr;
        cout << "input the value for velocity of the object v : ";
        Ws = approchingWaveFindWs(Wr, velocityF());
        cout<< "The wavelength of the light emitted as the source and observer are approaching each-other is : " << Ws <<endl;
        break;

    case '2':
        cout << "input the value of source wavelength, Ws: ";
        cin >> Ws;
        cout << "input the value for velocity of the object v : ";
        Wr = approchingWaveFindWr(Ws, velocityF());
        cout<< "The wavelength of the light received as the source and observer are approaching form each other is : " << Wr <<endl;
        break;
    case '3':
        cout << "input the value of observed wavelength Wr : "<<endl;
        cin >>Wr;
        cout << "input the value of source wavelength Ws: ";
        cin >>Ws;
        v = approchingWaveFindV(Ws, Wr);
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        approchingWaveUI();
        break;
    }

}

float DopplerEffect::recedingWaveFindWs(float recivedWavelenght, float waveVelocity){
    float temp = (1 - beta(waveVelocity))/(1 + beta(waveVelocity));
    temp = recivedWavelenght / sqrt(temp);
    return temp;
}
float DopplerEffect::recedingWaveFindWr(float sourceWavelenght,float waveVelocity){
    float temp = (1 - beta(waveVelocity))/(1 + beta(waveVelocity));
    temp = sqrt(temp) * sourceWavelenght;
    return temp;
}
float DopplerEffect::recedingWaveFindV(float sourceWavelenght,float recivedWavelenght){
    float temp = pow((recivedWavelenght/sourceWavelenght),2);
    temp = (1 - temp)/(1 + temp);
    temp = temp * c();
    return temp;
}

void DopplerEffect::recedingWaveUI(){
cout << "When source/receiver is receding (red shift), what variable do you want to find in this situation: \n";
    cout << "1) source wavelength \n2) observer wavelength \n3) velocity of the light"<<endl;
    char option;
    cin >> option;
    switch (option)
    {
    case   '1':
        cout << "input the value of observed wavelength, Wr : "<<endl;
        cin >> Wr;
        cout << "input the value for velocity of the object v : ";
        Ws = recedingWaveFindWs(Wr, velocityF());
        cout<< "The wavelength of the light emitted as the source and observer are receding each-other is : " << Ws <<endl;
        break;

    case '2':
        cout << "input the value of source wavelength, Ws: ";
        cin >> Ws;
        cout << "input the value for velocity of the object v : ";
        Wr = recedingWaveFindWr(Ws, velocityF());
        cout<< "The wavelength of the light received as the source and observer are receding form each other is : " << Wr <<endl;
        break;
    case '3':
        cout << "input the value of observed wavelength Wr : "<<endl;
        cin >>Wr;
        cout << "input the value of source wavelength Ws: ";
        cin >>Ws;
        v = recedingWaveFindV(Ws, Wr);
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        approchingWaveUI();
        break;
    }}

