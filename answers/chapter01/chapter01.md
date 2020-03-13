# 第一章 开始

## 1.2 节

### 1.2节练习  
**练习1.3 编写程序,在标准输出上打印Hello ,World**  
>```c++
>   #include<iostream>
>   int main(){
>       std::cout<<"Hello,World"<<std::endl;
>       return 0;
>   }
>```  

**练习1.4 编写程序,两数相乘**  

```c++
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    int first;
    int second;
    cout<<"Enter two integers"<<endl;
    cin>>first>>second;
    cout<<first<<"*"<<second<<"="<<first*second<<endl;

    return 0;
}
```  

## 1.4 节

### 1.4.1节练习 
**1.9 编写程序,使用while循环将50到100的整数相加**  
> [0109](src/0109.cpp)  

**1.10 编写程序,使用--运算符在循环中按递减顺序输出10到0之间的整数**  
> [0110](src/0110.cpp)  

**1.11 编写程序,提示用户输入两个整数,输出两个整数所指定范围内所有整数**  
> [0111](src/0111.cpp)  

### 1.4.2节练习  
**1.12 下面的for循环完成了什么功能?sum的最终值是多少?**  
```c++
int sum;
for(int i=-100;i<=100;++i)
    sum+=i;
```

> for循环完成了将-100到100之间所有整数相加,sum最终值是0  

**1.13 使用for重做1.4.1节所有练习**  
> [0113](src/0113.cpp)  

**1.14 对比for循环和while循环,两种形式的优缺点各是什么**  

**1.15 熟悉编译器生成的错误信息**  

### 1.4.3节练习  
**1.16 编写程序,从cin读取一组数,输出其总和**  
