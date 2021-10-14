#include <Arduino.h>
#include <comm_manager.h>

void setup() { Serial.begin(115200); }
void loop(){ Serial.println(gimme_dat_string()); }
