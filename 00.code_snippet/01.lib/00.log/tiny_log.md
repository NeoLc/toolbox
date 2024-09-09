## 微型的日志库

```cpp
#pragma once

#include <stdio.h>

#define LOG(fmt,args...) do { \
        FILE *out_tmp = fopen("/data/local/tmp/app.log", "a+w"); \
        if (out_tmp) { \
            fprintf(out_tmp, "file:%s line:%d, function:%s  ",__FILE__,__LINE__,__FUNCTION__);    \
            fprintf(out_tmp, (char*)fmt, ##args); \
            fprintf(out_tmp, "\n"); \
            fflush(out_tmp);        \
            fclose(out_tmp);        \
        } \
} while(0)

```
打印的日志如下:
```
file:test.c line:5, function:main  123456
file:test.c line:6, function:main  --- 123456 ---
file:test.c line:7, function:main  --- 123456 ---
```
