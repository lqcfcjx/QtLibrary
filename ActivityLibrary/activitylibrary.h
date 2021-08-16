#ifndef ACTIVITYLIBRARY_H
#define ACTIVITYLIBRARY_H

#include "ActivityLibrary_global.h"

class ACTIVITYLIBRARY_EXPORT ActivityLibrary
{
public:
    ActivityLibrary();

    int subtract(int a,int b);

};

extern "C" {
    ACTIVITYLIBRARY_EXPORT ActivityLibrary* getActivityLibrary();
    ACTIVITYLIBRARY_EXPORT int add(int a,int b);
}

#endif // ACTIVITYLIBRARY_H
