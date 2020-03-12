**6.1 实参和形参的区别是什么？**
- 形参只是一个占位符，并没有占用实际的内存空间。
- 实参是实际传递进函数的值。  

**6.2 请指出下列函数哪个有错误，为什么？应该如何修改这些错误呢？**  
  a.
    ```
    int f(){
        string s;
        // ...
        return s;
    }
    ```  
  b.
    ```
    f2(int i){/**/}
    ```  
  c. 
    ```
    int calc(int v1,int v1){/**/}
    ```  
  d. 
    ```
    double square(double x) return x*x;
    ```  

  a. 返回值与类型不符，应该改成```int f(){ int s; /**/ return s}```或者```string f(){string s;/**/return s;}```  
  b.没有返回值类型。应该改为```void f2(int i){/**/}```  
  c.函数正确，但参数名称容易引发歧义，建议修改为不同的名称  
  d.函数体必须用花括号，应该改为 ```double square(double x){return x*x;}```  

**6.3 编写自己的fact函数,上机检查是否正确**
```
uint64_t fact(uint64_t val) {
	uint64_t ret;

	for (ret=1;val>1;val--)
		ret *= val;

	return ret;
}
```  

**6.4 编写一个用户交互的函数,要求用户输入一个数字,计算生成该数字的阶乘。在main函数中调用该函数**  
[例程](src/rfact.cpp)
```
//
//题目要求的是逆向将一个数分解为它的阶乘数字
//思路就是逆向将一个数字从1开始除,并取得最大的数
uint64_t rfact(uint64_t val) {
	uint64_t ret;

	for (ret=1;ret<val;ret++)
	{
		val /= ret;
	}

	return ret;
} 
```  

**6.5 编写一个函数，求一个数的绝对值**  
