#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include <string>
using namespace std;

class Electronics {
public:
    virtual ~Electronics() {}
    virtual string getDescription() const = 0;
};

#endif