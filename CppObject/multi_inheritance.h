//
// Created by 何智强 on 2021/2/10.
//

#ifndef CPPOBJECT_MULTI_INHERITANCE_H
#define CPPOBJECT_MULTI_INHERITANCE_H
#include <iostream>

namespace multiple_inheritance{
  class Base1{
  public:
      virtual void f(){
          std::cout << "Base1::f()" << std::endl;
      }
      virtual void g(){
          std::cout << "Base1::g()" << std::endl;
      }
  };

  class Base2{
  public:
      virtual void h(){
          std::cout << "Base2::h()" << std::endl;
      }
      virtual void i(){
          std::cout << "Base2::i()" << std::endl;
      }
  };

  class Drive : public Base1, public Base2{
  public:
      virtual void f() override {
          std::cout << "Drive::f()" << std::endl;
      }
      virtual void i() override {
          std::cout << "Drive::i()" << std::endl;
      }

      virtual void my_h() {
          std::cout << "Drive::my_h()" << std::endl;
      }
      virtual void my_i(){
          std::cout << "Drive::my_i()" << std::endl;
      }
      virtual void my_j(){
          std::cout << "Drive::my_j()" << std::endl;
      }
  };

  void display(){
       typedef void(* Func)(void);

      std::cout << sizeof(Base1) << std::endl;
      std::cout << sizeof(Base2) << std::endl;
      std::cout << sizeof(Drive) << std::endl;

      Drive d{};
      Base1& b1 = d;
      Base2& b2 = d;
      Drive& d2 = d;

      Func** vft_pptr = reinterpret_cast<Func**>(&d);
      Func* vft_ptr = *vft_pptr;

      printf("%p\n", vft_pptr);
      for (int i = 0 ; i < 6; ++i){
          printf("vft1_drive[%d]: %p\n", i, vft_ptr[i]);
      }
      for(int i = 0 ; i < 6; ++i){
          vft_ptr[i]();
      }

      ++vft_pptr;
      vft_ptr = *vft_pptr;

      printf("%p\n", vft_pptr);
      for (int i = 0 ; i < 2; ++i){
          printf("vft2_drive[%d]: %p\n", i, vft_ptr[i]);
      }
      for(int i = 0 ; i < 2; i++){
          vft_ptr[i]();
      }

      std::cout << "\n======\n";
      b1.f();
      b1.g();
      b2.h();
      b2.i();


      d2.f();
      d2.g();
      d2.h();
      d2.i();
  }
};


#endif //CPPOBJECT_MULTI_INHERITANCE_H
