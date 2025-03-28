#ifndef TELEVISION_H
#define TELEVISION_H

#include "Electronics.h"
#include <string>

using namespace std;

class Television : public virtual Electronics {
public:
    string getDescription() const override {
        return "Television: Large screen for home entertainment.";
    }
};

#endif