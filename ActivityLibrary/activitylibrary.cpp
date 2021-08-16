#include "activitylibrary.h"

ActivityLibrary::ActivityLibrary()
{
}

int ActivityLibrary::subtract(int a, int b){
    return a-b;
}

ActivityLibrary* getActivityLibrary(){
    return new ActivityLibrary();
}

int add(int a,int b){
    return a + b;
}
