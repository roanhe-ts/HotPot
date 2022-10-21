struct Exception {};

// Cpp编译器内置的宏
#ifdef __cplusplus
extern "C" {
#endif

    void raiseException();

#ifdef __cplusplus
};
#endif

/*
Undefined symbols for architecture x86_64:
"__ZTVN10__cxxabiv117__class_type_infoE", referenced from:
__ZTI9Exception in throw.o
        NOTE: a missing vtable usually means the first non-inline virtual member function has no definition.
"___cxa_allocate_exception", referenced from:
_seppuku in throw.o
"___cxa_throw", referenced from:
_seppuku in throw.o
        ld: symbol(s) not found for architecture x86_64
*/