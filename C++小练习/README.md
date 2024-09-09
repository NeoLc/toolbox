## 虚函数小练习
+ Practice~00  
>描述：设计一个C++基类，它的功能是只要子类重载了onFirstRef这个函数，那么子类在初次构造时会调用onFirstRef执行一些初始化工作，之后的构造不会再执行onFirstRef。

类似的用法，常常用于对象首次调用时执行打开文件、创建socket等等**只需执行一次**的初始化工作

[实现链接](https://github.com/NeoLc/toolbox/blob/master/C%2B%2B%E5%B0%8F%E7%BB%83%E4%B9%A0/vtable_00.cpp)
