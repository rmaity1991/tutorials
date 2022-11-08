#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct rack{
  bool compressor;
  bool defrost;
  bool fanOn;
  bool doorOpen;
  bool defrostSensor;
  bool panheaterSensor;
  bool condensorFan;
  bool evaporatorFan;
  bool regulation;

  float evapTemp;
  float evapPres;
  float evapFanCtrl;
};

float regulationSP=10.0;
float defrostSP=18.0;
void setup();

void regulation(struct rack* case1);

void ioInterface(struct rack* case1);
void defrost(struct rack* case1);

int main() {
  struct rack* rk1=(struct rack*)malloc(sizeof(struct rack));
  void (*defrostFunc)(struct rack*);
  void (*regulationFunc)(struct rack*);
  void (*ioFunc)(struct rack*);

  defrostFunc=regulation;
  regulationFunc=defrost;
  ioFunc=ioInterface;

  defrostFunc(rk1);
  regulationFunc(rk1);
  ioFunc(rk1);

  return 0;
}

void setup() {

}

void regulation(struct rack* case1){

    if(case1->regulation){
        case1->defrost=true;
    }

}

void ioInterface(struct rack* case1){
    
}

void defrost(struct rack* case1){
  
}


