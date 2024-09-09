#include <iostream>
#include <atomic>

class Base {
public:
    Base() {
        // 在构造时检查是否是第一次构造
        if (firstRef.load()) {
            onFirstRef(); // 调用子类重载的函数
            firstRef.store(false); // 标记为已经调用过
        }
    }

    virtual ~Base() = default; // 虚析构函数

protected:
    // 子类需要重载这个函数
    virtual void onFirstRef() = 0;

private:
    static std::atomic<bool> firstRef; // 静态原子变量
};

// 定义静态成员变量
std::atomic<bool> Base::firstRef(true);

class Derived : public Base {
protected:
    void onFirstRef() override {
        std::cout << "onFirstRef called for Derived class" << std::endl;
        // 执行初始化工作
    }
};

int main() {
    Derived d1; // 第一次构造，调用 onFirstRef
    Derived d2; // 第二次构造，不会调用 onFirstRef
    return 0;
}
