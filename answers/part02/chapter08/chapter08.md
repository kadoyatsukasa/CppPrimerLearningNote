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
+ 练习:
    - **8.1 编写函数,接收一个istream& 参数,返回值类型也是istream& 类型.此函数须从给定流中读取数据,直到遇到文件结束标识时停止.它将读取的数据输出到标准输出上.完成这些操作后,在返回流之前,对流进行复位,使其处于有效状态.**  
    
