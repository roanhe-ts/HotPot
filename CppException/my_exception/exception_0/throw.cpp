#include "throw.h"

extern "C" {
    void raiseException() {
        throw Exception();
    }
}