```bash
> g++ -c -o throw.o -O0 -ggdb throw.cpp
> gcc -c -o main.o -O0 -ggdb main.c

> gcc main.o throw.o -o app
throw.o: In function `foo()':
throw.cpp:4: undefined reference to `__cxa_allocate_exception'
throw.cpp:4: undefined reference to `__cxa_throw'
throw.o:(.rodata._ZTI9Exception[typeinfo for Exception]+0x0): undefined reference to `vtable for __cxxabiv1::__class_type_info'
collect2: ld returned 1 exit status
```

g++编译的 throw.o 与gcc编译的 main.o 链接失败。

从提示信息中可以看出，throw.o 中包含一些被 g++ 自动产生的新东西，正是这些东西导致链接失败。