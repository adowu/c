#include <stdio.h>

void new_for()
{
    for (int i = 0; i < 10; i++)
    {
        printf("A C99 feature : i = %d \n", i);
    }
}

int main()
{
    new_for();
}
/*
文件作用域
    全局变量 global variable
3种链接属性
    外部链接
    内部链接
    无链接  
    1. 具有块作用域、函数作用域、或函数原型作用域的变量都是无链接变量
    2. 文件作用域的变量可以是
        外部链接 可以在多文件程序中使用
        内部链接 只能在一个翻译单元中使用
            翻译单元：C预处理实际上用包含的头文件内容替换#include指令，
                    所以 编译器源代码文件和所有的头文件都看成是一个包含信息的单独文件，这个文件被称为翻译单元。
    3. 如何知道文件作用域是内部链接还是外部链接
        可以查看外部定义中是否使用了存储类别说明符static
        int g = 5;          // 文件作用域 ， 外部链接 
        static int dg = 3   // 文件作用域 ， 内部链接
总结： 作用域和链接描述了标识符的可见性

存储期：
    描述了通过这些标识符访问的对象的生存期
    4种存储期
        静态存储期
        线程存储期
        自动存储期
        动态分配存储期
    1. 静态存储期 文件作用域具有 
        关键字 static 表明的是 链接属性 而不是 存储期；
        以 static 声明的文件作用域变量具有内部链接；
        但是无论内部链接还是外部链接，所有的文件作用域变量都具有静态存储期
    2. 线程存储期 用于 并发程序设计
        关键字 _Thread_local 声明一个对象时，每个线程都获得该变量的私有备份；
    3. 自动存储期   块作用域的变量
        当程序进入定义这些变量的块时，为这些变量分配内存
        当退出这个块时，释放刚才为变量分配的内存；
        注：变长数组稍有不同，他们的存储期从声明处到块的结尾，而不是从块的开始到块的结尾。
        块中 声明 static 类型变量 也就具有了 静态存储期
自动变量
    为了更清楚的表达 有意覆盖一个外部变量定义，或者强调不要把该变量改为其他存储类别，可以显式使用关键字 auto
    auto 存储类别说明符 
    内层块和外层块有同名变量
        内层块会隐藏外层块定义
        但是离开内存块后，外层块变量的作用域又回到了原来的作用域
寄存器变量
    变量通常存储在计算机内存中，如果幸运的话，寄存器变量储存在CPU的寄存器上
    或者说，存储在最快的可用内存中：访问处理速度更快，但是无法获取地址
    和自动变量一样：块作用域、无链接的自动存储期。
    使用存储类别说明符  register 可声明寄存器变量
    使用了不一定就是 寄存器变量，所以有可能就是普通变量，但是也不能对该变量使用地址运算符
    并且类型有限，寄存器可没有那么大空间存储 double类型的值
静态变量
    指的是 该变量在内存中原地不动，并不是说它的值不变
*/