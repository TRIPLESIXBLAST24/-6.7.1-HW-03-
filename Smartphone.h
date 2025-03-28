#define SMARTPHONE_H
#include "PortableElectronics.h"
#include <string>

using namespace std;

class Smartphone : public PortableElectronics {
public:
    string getDescription() const override {
        return "Smartphone: High-end device for communication and entertainment.";
    }
};