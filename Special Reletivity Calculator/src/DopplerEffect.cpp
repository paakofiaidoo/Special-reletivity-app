#include "DopplerEffect.h"
#include <iostream>
#include <cmath>

using namespace std;
void DopplerEffect::dopplerEffectUI()
{
    cout << "for light transmitted by a source in frame O and seen by an observer in O*, let calculate for its relativity doppler effect \n";
    cout << "1) frequency when source/receiver is approaching (blue shift)"<<endl;
    cout << "2) frequency when source/receiver is receding (red shift)"<<endl;
    cout << "3) wavelength when source/receiver is approaching (blue shift)"<<endl;
    cout << "4) wavelength when source/receiver is receding (red shift)\n"<<endl;
    char option;
    cin >> option;
    switch (option)
    {
    case '1':
        approachingFreqUI();
        break;
    case '2':
        recedingFreqUI();
        break;
    case '3':
        approachingWaveUI();
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
float DopplerEffect::approachingFreqFindFs(float recivedFreq, float FreqVelocity){
    float temp = (1 + beta(FreqVelocity))/(1 - beta(FreqVelocity));
    temp = sqrt(temp) * Fr;
    return temp;
}
float DopplerEffect::approachingFreqFindFr(float sourceFreq,float FreqVelocity){
    float temp = (1 + beta(FreqVelocity))/(1 - beta(FreqVelocity));
    temp = sourceFreq / sqrt(temp);
    return temp;
}
float DopplerEffect::approachingFreqFindV(float sourceFreq, float recivedFreq){
    float temp = pow((sourceFreq/recivedFreq),2);
    temp = (temp - 1)/(1 + temp);
    temp = temp * c();
    return temp;
}

void DopplerEffect::approachingFreqUI(){
    cout << "When source/receiver is approaching (blue shift), what variable do you want to find in this situation: \n";
    cout << "1) source frequency \n2) observer frequency \n3) velocity of the light"<<endl;
    char option;
    cin >> option;
    switch (option)
    {
    case   '1':
        cout << "input the value of observed frequency Fr : "<<endl;
        cin >>Fr;
        cout << "input the value for velocity of the object v : ";
        Fs = approachingFreqFindFs(Fr, velocityF());
        cout<< "the frequency of the light emitted as the source/observer are approaching each-other is : " << Fs <<endl;
        break;

    case '2':
        cout << "input the value of source frequency Fs: ";
        cin >> Fs;
        cout << "input the value for velocity of the object v : ";
        Fr = approachingFreqFindFr(Fs, velocityF());
        cout<< "the frequency of the light received as the source/observer are approaching form each other is : " << Fr <<endl;
        break;
    case '3':
        cout << "input the value of observed frequency f* : "<<endl;
        cin >>Fr;
        cout << "input the value of source frequency f*: ";
        cin >>Fs;
        v = approachingFreqFindV(Fs, Fr);
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        approachingFreqUI();
        break;
    }

}
float DopplerEffect::recedingFreqFindFs(float recivedFreq, float FreqVelocity){
    float temp = (1 - beta(FreqVelocity))/(1 + beta(FreqVelocity));
    temp = sqrt(temp) * recivedFreq;
    return temp;
}
float DopplerEffect::recedingFreqFindFr(float sourceFreq,float FreqVelocity){
    float temp = (1 - beta(FreqVelocity))/(1 + beta(FreqVelocity));
    temp = sourceFreq / sqrt(temp);
    return temp;
}
float DopplerEffect::recedingFreqFindV(float sourceFreq,float recivedFreq){
    float temp = pow((sourceFreq/recivedFreq),2);
    temp = (temp - 1)/(1 + temp);
    temp = temp * c();
    return temp;
}

void DopplerEffect::recedingFreqUI(){
    cout << "When source/receiver is receding (red shift), what variable do you want to find in this situation: \n";
    cout << "1) source frequency \n2) observer frequency \n3) velocity of the light"<<endl;
    char option;
    cin >> option;
   switch (option)
    {
    case   '1':
        cout << "input the value of observed frequency Fr : "<<endl;
        cin >>Fr;
        cout << "input the value for velocity of the object v : ";
        Fs = recedingFreqFindFs(Fr, velocityF());
        cout<< "the frequency of the light emitted as the source/observer are receding each-other is : " << Fs <<endl;
        break;

    case '2':
        cout << "input the value of source frequency Fs: ";
        cin >> Fs;
        cout << "input the value for velocity of the object v : ";
        Fr = recedingFreqFindFr(Fs, velocityF());
        cout<< "the frequency of the light received as the source/observer are receding form each other is : " << Fr <<endl;
        break;
    case '3':
        cout << "input the value of observed frequency f* : "<<endl;
        cin >>Fr;
        cout << "input the value of source frequency f*: ";
        cin >>Fs;
        v = recedingFreqFindV(Fs, Fr);
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        recedingFreqUI();
        break;
    }
}

float DopplerEffect::approachingWaveFindWs(float recivedWavelenght, float waveVelocity){
    float temp = (1 + beta(waveVelocity))/(1 - beta(waveVelocity));
    temp = recivedWavelenght / sqrt(temp);
    return temp;
}
float DopplerEffect::approachingWaveFindWr(float sourceWavelenght,float waveVelocity){
    float temp = (1 + beta(waveVelocity))/(1 - beta(waveVelocity));
    temp = sqrt(temp) * sourceWavelenght;
    return temp;
}
float DopplerEffect::approachingWaveFindV(float sourceWavelenght, float recivedWavelenght){
    float temp = pow((recivedWavelenght/sourceWavelenght),2);
    temp = (temp - 1)/(1 + temp);
    temp = temp * c();
    return temp;
}

void DopplerEffect::approachingWaveUI(){
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
        Ws = approachingWaveFindWs(Wr, velocityF());
        cout<< "The wavelength of the light emitted as the source/observer are approaching each-other is : " << Ws <<endl;
        break;

    case '2':
        cout << "input the value of source wavelength, Ws: ";
        cin >> Ws;
        cout << "input the value for velocity of the object v : ";
        Wr = approachingWaveFindWr(Ws, velocityF());
        cout<< "The wavelength of the light received as the source/observer are approaching form each other is : " << Wr <<endl;
        break;
    case '3':
        cout << "input the value of observed wavelength Wr : "<<endl;
        cin >>Wr;
        cout << "input the value of source wavelength Ws: ";
        cin >>Ws;
        v = approachingWaveFindV(Ws, Wr);
        cout << "the velocity of the moving body is : "<< v <<endl;
    default:
        cout << "invalid input, try again\n\n";
        approachingWaveUI();
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
        cout<< "The wavelength of the light emitted as the source/observer are receding each-other is : " << Ws <<endl;
        break;

    case '2':
        cout << "input the value of source wavelength, Ws: ";
        cin >> Ws;
        cout << "input the value for velocity of the object v : ";
        Wr = recedingWaveFindWr(Ws, velocityF());
        cout<< "The wavelength of the light received as the source/observer are receding form each other is : " << Wr <<endl;
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
        approachingWaveUI();
        break;
    }}

