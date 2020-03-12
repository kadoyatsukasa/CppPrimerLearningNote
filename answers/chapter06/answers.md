# 第六章 函数

   - [6.1节练习](#6.1节练习)  
   - [6.1.1节练习](#6.1.1节练习)  
   - [6.1.2节练习](#6.1.2节练习)

## 6.1节练习

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
[例程](src/testABS.cpp)  

### 6.1.1节练习
**6.6 说明形参、局部变量以及局部静态变量的区别。编写一个函数,同时用到这三种形式**  
[例程](src/life.cpp)

**6.7 编写一个函数,当它第一次被调用时返回0,以后每次调用返回值加1**  
[例程](src/incream.cpp)
```
//在外部进行循环调用
//然后进行递增
int incream(int count) {
	return count;
}
```  

### 6.1.2节练习 
**6.8 编写一个名为chapter06.h的头文件,令其包含6.1节练习的函数声明**  
[chapter06.h](src/chapter06.h)  

### 6.1.3节练习  
**练习6.9 编写你自己的fact.cc和factMain.cc,
这两个文件都应该包含上一小节的练习中编写的chapter06.h头文件。
通过这些文件,理解编译器是如何支持分离式编译的**  

### 6.2.1节练习

**6.10 编写一个函数,使用指针形参交换两个整数的值**  
[swapByPtr.cpp](src/swapByPtr.cpp)
```
void mySwap(int* first,int* second) {
	int temp;			//中间变量
	temp = *first;		//保存first的初始值
	*first = *second;	//把second的值给first
	*second = temp;		//把first的初始值给second
}
```  

### 6.2.2节练习
**6.11 编写并验证自己的reset函数,使其作用于引用类型的参数**  
[passByReference.cpp](src/passByReference.cpp)  
```
//传引用
void reset(int& num) {
	
	num = 0;
}
```  

**6.12 改写6.2.1节中练习6.10的程序,使用引用而非指针交换两个整数的值。你觉得哪种方法更易于使用？
为什么？**  
[passByReference.cpp](src/passByReference.cpp)
```
void mySwap(int* first,int* second) {
	int temp;			//中间变量
	temp = *first;		//保存first的初始值
	*first = *second;	//把second的值给first
	*second = temp;		//把first的初始值给second
}
```  
使用传引用更加易用，不需要每次都写一个取地址运算符了。  

**6.13 假设T是某种类型的名字，说明以下两个函数声明的区别**
- `void f(T)` : 参数为T类型，无返回值  
- `void f(&T)` ： 参数为对T类型的引用，

**6.14 举一个形参应该是引用类型的例子,再举一个形参不能是引用类型的例子**  
- 当函数需要交换两个数位置的时候就需要进行引用传值，比如冒泡算法。  
- 当仅仅是对两个数进行比较而不需要进行数值交换的时候，就不能使用引用传值。  

**6.15 说明find_char函数中的三个形参为什么是现在的类型,特别说明为什么s是常量引用
而occurs是普通引用？为什么s和occurs是引用类型而c不是？如果令s是普通引用会引发什么情况？
如果令occurs是常量引用会引发什么情况？**  

```
//返回s中c第一次出现的位置索引
//引用形参负责统计c出现的总次数
string::size_type 
find_char(const string& s,char c,string::size_type& occurs){
    auto ret=s.size(); //第一次出现的位置(如果有的话)
    occurs=0;           //设置表现出现次数形参的值
    for(decltype(ret)i =0;i!=s.size();++i){
        if(s[i]==c){
            if(ret==s.size())
                ret=i;  //记录c第一次出现的位置
            ++occurs;   //将出现的次数加一
        }
    }    
    return ret;         //出现次数通过occurs隐式地返回
}
```  

- s作为被统计的字符串，在函数中是不可以改变的，而occurs的作用是作为目标字符的索引位置，需要进行修改
- s和occurs需要源字符串的地址，而c只是作为一个普通的参照物，而不需要对原始字符进行操作  
- s如果是普通引用将会改变源字符串的内容  
- occurs如果是常量引用，将无法对索引进行查找   

### 6.2.3节练习
**6.16 下面这个函数虽然合法,但是不算特别有用。指出其局限性并设法改善**  
`bool is_empty(string& s){ return s.empty();}`  

empty()方法本身就代表数组已经空了，所以并不能作为一个返回值。需要修改为:  
```
    bool is_empty(string& s){
        return s.empty()?true:false;
    }
```  

**6.17 编写一个函数,判断string对象是是否含有大写字母。编写另外一个函数，把string对象全部改写
成小写字母**  
[replace.cpp](src/replace.cpp)

```
//  判断字符串中是否存在大写
//
//	@param source 需要检测的源字符串
//	@return 如果没有大写，则返回true，否则返回false
bool isAnyUpper(const string& source) {
	auto ret = source.size();
	for (int index=0;index!=source.size();++index)
		if (std::isupper(source[index])) //判断是否存在大写
			return true;
	return false;
}

```  

```
//  将字符串中所有字母都转化成小写
// 
// @param source 需要转换的源字符串
// @return 转换完成的字符串
string convertToLower(string& source) {
	for (int index=0;index!=source.size();++index) //遍历字符串
		 source[index]=std::tolower(source[index]); //将所有字母都转换成小写字母
		
	return source;
}

```

**6.18 为下面的函数编写函数声明,从给定的名字中推测函数具备的功能**  
  a.  名为compare的函数,返回布尔值,两个参数都是matrix类的引用.  
        > `bool compare(matrix&)`  
        > 用于对参数指定的类进行一些判断类操作  

  b.  名为chang_val的函数,返回`vector<int>`的迭代器,有两个参数:一个是int,另一个是`vector<int>`的迭代器  
        > `vector<int>::iterator change_val(int,vector<int>::iterator)`  
        > 将指定的的值替换为int参数的值  
       
**6.19 假定有如下声明,判断哪个调用合法,哪个调用不合法,对于不合法的函数调用,说明原因**  

```
double calc(double);
int count(const string&,char);
int sum(vector<int>::iterator,vector<int>::iterator,int);

```