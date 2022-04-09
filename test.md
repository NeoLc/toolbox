**Bad 👎🏻**
```c++
int sr = 48000;
```

**Good 👍🏻**
```c++
// 使用解释性强的变量
int sampling_rate = 48000;
```

**Bad 👎🏻**
```c++
float res = 0xFF483;
```
**Good 👍🏻**
```c++
// 当你的代码不够简单和清楚之前，你是需要写注释的.
// 0xFF483 represents the correction parameters of the audio.
float res = 0xFF483;
```
**Bad 👎🏻**
```c++
if (...) {
  if (...) {
    if (...) {
      for (...) {
        if (...) {
          if (...) {}
        }
      }
    }
  }
} else {
}
```
**Good 👍🏻**
```
// 移除过深的嵌套层次，保持代码的整洁。
if (!...)
  return;
if (... || ...)
  ...
for (...) {
  if (... && ...)
}
```
**Bad 👎🏻**
```c++
class Effect : public IEffect {
public:
  void enable();
  void disable();
private:
 bool mBufferSize;
 void set(...);
 static void sendCommand(...);
 void get(...);
 static void process(...);
 void* mExternalData;
};
```
**Good 👍🏻**
```c++
class Effect : public IEffect {
public:
  void enable();
  void disable();
  
private:
 void set(...);
 void get(...);
 
 static void sendCommand(...);
 static void process(...);
 
 bool mBufferSize;
 void* mExternalData;
};
```

**Bad 👎🏻**
```c++
int doSomething() {
  // 几十行代码，得到结果A.
  ...
  // 几十行代码，得到结果B.
  ...
  // 几十行代码，得到结果C.
  ...
  return A * B * C;
}
```
**Good 👍🏻**
```c++
void doSomething() {
  return getA() * getB() * getC();
}
```
