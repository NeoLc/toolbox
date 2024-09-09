+ 编译属性

> 可以通过编译属性修饰函数，使得函数在指定阶段调用.  
> `__attribute__((constructor))`可以实现当链接到一个库时，自动调用该库的某个接口.  
> 在android的property服务启动过程中使用到了该技巧.  

```c
// 编译属性的示例
#include <stdio.h>

void my_init_function() __attribute__((constructor));

void my_init_function() {
    printf("This function is called before main()!\n");
    // 执行一些初始化操作
}

int main()
{
    printf("main() is being executed.\n");
    return 0;
}
```
