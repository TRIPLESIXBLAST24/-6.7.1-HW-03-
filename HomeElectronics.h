#define HOME_ELECTRONICS_H
#include "Electronics.h"
#include <string>

using namespace std;

class HomeElectronics : public Electronics {
public:
    string getDescription() const override {
        return "Home Electronics";
    }
};