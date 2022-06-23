#ifndef Otto_arms_h
#define Otto_arms_h
#include "Oscillator.h"
enum ARMS{
    LEFT = 1,
    RIGHT = 0
};
class Otto_Arms{
    public:
        //-- inicialization
        void init(int AR, int AL);
        void attach(void);
        void detach(void);
        void wave(void);
        void arms_up(void);
        void arms_down(void);
        void arm_up(ARMS arm);
        void arm_down(ARMS arm);

    private:
        int arms_pins[2];
        int arms_trims[2];
        Oscillator arms[2];
};

#endif