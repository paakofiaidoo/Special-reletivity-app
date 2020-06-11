#ifndef DOPPLEREFFECT_H
#define DOPPLEREFFECT_H
#include "Fundamentals.h"

class DopplerEffect : private Fundamentals
{
    public:
        void dopplerEffectUI();
    private:
        //for values of frequency f(source) fo(receiver)
        float Fs,Fr;
        //for values of wavelength w(source) wo(receiver)
        float Ws, Wr;
        //velocity of the moving body
        double v;

        float approachingFreqFindFs(float recivedFreq, float FreqVelocity);
        float approachingFreqFindFr(float sourceFreq,float FreqVelocity);
        float approachingFreqFindV(float sourceFreq, float recivedFreq);
        void approachingFreqUI();
        float recedingFreqFindFs(float recivedFreq, float FreqVelocity);
        float recedingFreqFindFr(float sourceFreq,float FreqVelocity);
        float recedingFreqFindV(float sourceFreq,float recivedFreq);
        void recedingFreqUI();

        float approachingWaveFindWs(float recivedWavelenght, float waveVelocity);
        float approachingWaveFindWr(float sourceWavelenght,float waveVelocity);
        float approachingWaveFindV(float sourceWavelenght, float recivedWavelenght);
        void approachingWaveUI();
        float recedingWaveFindWs(float recivedWavelenght, float waveVelocity);
        float recedingWaveFindWr(float sourceWavelenght,float waveVelocity);
        float recedingWaveFindV(float sourceWavelenght,float recivedWavelenght);
        void recedingWaveUI();

};

#endif // DOPPLEREFFECT_H
