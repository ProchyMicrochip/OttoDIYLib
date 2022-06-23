#include "Otto_arms.h"

void Otto_Arms::init(int AR, int AL){
    arms_pins[0] = AR;
    arms_pins[1] = AL;
    attach();
}
void Otto_Arms::attach(){
    arms[0].attach(arms_pins[0]);
    arms[1].attach(arms_pins[1]);
}
void Otto_Arms::detach(){
    arms[0].detach(arms_pins[0]);
    arms[1].detach(arms_pins[1]);
}
void Otto_Arms::arm_up(ARMS arm){
    if(arm = ARMS.LEFT){
        arms[1].SetPosition(135);
    }
    else{
        arms[0].SetPosition(45);
    }
}
void Otto_Arms::arm_down(ARMS arm){
    if(arm = ARMS.LEFT){
        arms[1].SetPosition(45);
    }
    else{
        arms[0].SetPosition(135);
    }
}
void Otto_Arms::arms_up(ARMS arm){
        arms[1].SetPosition(135);
        arms[0].SetPosition(45);
}
void Otto_Arms::arms_down(ARMS arm){
        arms[1].SetPosition(45);
        arms[0].SetPosition(135);
}
void Otto_Arms::arms_wave(){
    
}