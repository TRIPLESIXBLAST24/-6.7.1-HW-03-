#ifndef SMART_TV_H
#define SMART_TV_H
#include "Television.h"
#include "SmartDevice.h"
#include <string>

using namespace std;

class SmartTV : public virtual Television, public virtual SmartDevice {
public:
    string getDescription() const override {
        return "SmartTV: Combines features of smart devices with television.";
    }
};
#endif