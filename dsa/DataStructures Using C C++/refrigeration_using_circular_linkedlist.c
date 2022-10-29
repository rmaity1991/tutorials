#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct state{
    float tempSP;
    float defrostSP;
    bool compressorcommand;
    bool defrostcommand;
    bool evaporatorcommand;
    bool condensorcommand;
    struct state* nextState;
    struct state* prevState;
};

int main(){
    
}