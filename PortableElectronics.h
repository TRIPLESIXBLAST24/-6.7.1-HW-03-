#define PORTABLE_ELECTRONICS_H
#include "Electronics.h"
#include <string>

using namespace std;

class PortableElectronics : public Electronics {
public:
    string getDescription() const override {
        return "Portable Electronics";
    }
};