# 第八章 IO库

## 8.1 IO类
+ 知识点: 
    - IO库类型和头文件 
        |||
        |:---:|:---:|
        |头文件|类型|
        |iostream|istream,wistream  从流读取数据<br/> ostream,wostream 向流写入数据<br/> iosream,wiostream 读写流|
        |fstream|ifstream,wifstream 从文件读取数据<br/> ofstream,wostream 向文件写入数据<br/> fstream,wfstream 读写文件|
        |sstream|istringstream,wistringstream 从string读取数据<br/>ostringstream,wostringstream 向string写入数据<br/>stringstream,wstringstream 读写string|
        |||
    - IO对象无拷贝或赋值  
    
    - IO库条件状态  
        |||
        |:---:|:---:|
        |`strm::iostate`|`strm`是一种IO类型.<br/>iostate是一种机器相关的类型,提供了表达条件状态的完整功能|
        |`strm::badbit`|用来指出流已经崩溃|
        |`strm::failbit`|用来指出一个IO操作已经失败|
        |`strm::eofbit`|用来指出流到达了文件结尾|
        |`strm::goodbit`|用来指出流未处于错误状态,此值保证为0|
        |`s.eof()`|若流s的eof置位,则返回true|
        |`s.fail()`|若流s的failbit或badbit置位,则返回true|
        |`s.bad()`|若流s的badbit置位,则返回true|
        |`s.good()`|若流s有效,则返回true|
        |`s.clear()`|将流s中的所有条件状态复位,将流的状态设置为有效,返回void|
        |`s.clear(flags)`|根据给定的flags标志位,将流s中对应条件状态复位.flags的类型为`strm::iostate`.返回void| 
        |`s.setstate(flags)`|根据给定的flags标志位,将流s中对应条件状态置位.flags的类型为`strm::iostate`,返回void|
        |`s.rdsate()`|返回流s的当前条件状态,返回值类型为`strm::iostate`|
        |||
    - 导致缓冲刷新的原因有很多:  
        - 程序正常结束,作为main函数的return操作的一部分,缓冲刷新被执行.  
        - 缓冲区满时,需要刷新缓冲,而后刷新的数据才能继续写入缓冲区.  
        - 我们可以使用操作符来显示刷新缓冲区.  
        - 在每个输出操作之后,可以使用操作符`unitbuf`设置流的内部状态,来清空缓冲区.  
            - 默认情况下,对cerr是设置`unitbuf`的,因此写道cerr的内容都是立即刷新的.  
        - 一个输出流可能被关联到另一个流.
            - 在这种情况下,当读写被关联时,关联到的流的缓冲区会被刷新.  
            - 当一个输入流被关联到一个输出流的时候,任何试图从输入流读取数据的操作都会先刷新关联的输出流  
            - 交互式系统通常应该关联输入流和输出流  
        - 如果程序崩溃,输出缓冲区不会被刷新  

    
+ 练习:
    - **8.1 编写函数,接收一个istream& 参数,返回值类型也是istream& 类型.此函数须从给定流中读取数据,直到遇到文件结束标识时停止.它将读取的数据输出到标准输出上.完成这些操作后,在返回流之前,对流进行复位,使其处于有效状态.**  
    - **8.2 测试函数,参数为cin**  
    [0801](src/0801.cpp)  

    - **8.3 什么情况下,下面的while循环会终止**  
    ```c++
    while(cin>>i)
    //...
    ```
    > 当输入流遇到结束信号的时候,while循环就会停止  

## 8.2 文件输入输出 
+ 知识点
    - fstream特有的操作  
    
    |||
    |:---:|:---:|
    |`fstream fstrm`|创建一个未绑定的文件流.<br/> `fstream`是`头文件fstream`中定义的一个类型|
    |`fstream fstrm(s);`|创建一个fstream,并打开名为s的文件<br/>s是string类型,或者是一个指向一个C风格字符串的指针.这些构造函数都是`explicit`的.默认的文件模式mode依赖于fstream的类型|
    |`fstream fstrm(s,mode)`|按指定的mode打开文件|
    |`fstrm.open(s)`|打开名为s的文件,并将文件与fstrm绑定<br>s可以是一个string或者是指向一个C风格字符串的指针<br>默认文件mode依赖于fstream的类型,返回void|  
    |`fstrm.close()`|关闭于fstrm绑定的文件,返回void|
    |`fstrm.is_open()`|返回一个bool值,指出与fstrm关联的文件是否成功打开且尚未关闭|

+ 练习  