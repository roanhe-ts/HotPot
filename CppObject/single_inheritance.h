//
// Created by 何智强 on 2021/2/10.
//

#ifndef CPPOBJECT_SINGLE_INHERITANCE_H
#define CPPOBJECT_SINGLE_INHERITANCE_H

#include <iostream>

using namespace std;

namespace single_inheritance{
    class Base{
    public:
        virtual void f(){cout<< "Base:f()" << endl;}
        virtual void g(){cout<< "Base:g()" << endl;}
        virtual void h(){cout<< "Base:h()" << endl;}
    };

    class Drive : public Base{
    public:
        void g() override {cout<< "Drive::g()" << endl;}
    };

    void display(){
        typedef void (* Func)(void);
        cout << sizeof (Base) << endl;
        cout << sizeof (Drive) << endl;

        Base b{};
        Func** vft_pptr = reinterpret_cast<Func**>(&b);
        Func* vft_ptr = *vft_pptr;
        for (int i = 0; i < 3; ++i) {
            printf("vft_base[%d] = 0x: %p\n", i, *(vft_ptr + i));
        }

        for (int i = 0; i < 3; ++i) {
            vft_ptr[i]();
        }

        Base b1{};
        vft_pptr = reinterpret_cast<Func**>(&b);
        vft_ptr = *vft_pptr;
        for (int i = 0; i < 3; ++i) {
            printf("vft_base[%d] = %p\n", i, vft_ptr[i]);
        }

        for (int i = 0; i < 3; ++i) {
            vft_ptr[i]();
        }

        Drive d{};
        vft_pptr = reinterpret_cast<Func**>(&d);
        vft_ptr = *vft_pptr;
        for (int i = 0; i < 3; ++i) {
            printf("vft_drive[%d] = 0x: %p\n", i, vft_ptr[i]);
        }

        for (int i = 0; i < 3; ++i) {
            vft_ptr[i]();
        }

    }
};

#endif //CPPOBJECT_SINGLE_INHERITANCE_H
