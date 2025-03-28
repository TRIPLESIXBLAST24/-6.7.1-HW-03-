#define SMART_DEVICE_H
#include "Electronics.h"
#include <string>

using namespace std;

class SmartDevice : public virtual Electronics {
public:
    string getDescription() const override {
        return "Smart Device: Internet-enabled device with app functionality.";
    }
};