#ifndef DOPPLEREFFECT_H
#define DOPPLEREFFECT_H
#include "Fundamentals.h"

class DopplerEffect : private Fundamentals
{
    public:
        void dopplerEffectUI();
    private:
        //for values of frequency f(source) fo(receiver)
        float f,fo;
        //for values of wavelength w(source) wo(receiver)
        float Ws, Wr;
        //velocity of the moving body
        double v;
        void approchingFreq();
        void recedingFreq();
        float approchingWaveFindWs(float recivedWavelenght, float waveVelocity);
        float approchingWaveFindWr(float sourceWavelenght,float waveVelocity);
        float approchingWaveFindV(float sourceWavelenght, float recivedWavelenght);
        void approchingWaveUI();
        float recedingWaveFindWs(float recivedWavelenght, float waveVelocity);
        float recedingWaveFindWr(float sourceWavelenght,float waveVelocity);
        float recedingWaveFindV(float sourceWavelenght,float recivedWavelenght);
        void recedingWaveUI();

};

#endif // DOPPLEREFFECT_H
