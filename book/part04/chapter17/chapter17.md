# 第17章 标准库特殊设施 
## 17.5 IO库再探
+ 知识点: 
    - 当操纵符改变流当格式状态时,通常改变后的状态对所有后续IO都生效  
    - 定义在iostream中的操纵符  

    |||
    |:---:|:---:|
    |boolalpha|将true和false输出为字符串|
    |noboolalpha|将true和false输出为1,0|
    |showbase|对整形值输出表示进制的前缀|
    |noshowbase|不生成进制前缀|
    |showpoint|对浮点值总是显示小数点|
    |noshowpoint|只有当浮点值包含小数部分时才显示小数点|
    |uppercase|在十六进制中输出Ox,在科学计数法中输出E|
    |nouppercase|在十六进制中输出ox,在科学计数法中输出e|
    |dec|整形数值显示为十进制|
    |hex||整形数值显示为十六进制|
    |oct|整形数值显示为八进制|
    |left|在值的右侧添加填充字符<br/>(值在左侧,左对齐,故为left)|
    |right|在值的左侧添加填充字符<br/>(值在右侧,右对齐,故为right)|
    |internal|在符号和值之间添加填充字符|
    |fixed|浮点值显示为定点十进制|
    |scientific|浮点值显示为科学计数法|
    |hexfloat|浮点值显示为十六进制(C++11)|
    |defaultfloat|重置浮点数格式为十进制(C++11)|
    |unitbuf|每次输出操作后都刷新缓冲区|
    |nounitbuf|恢复正常的缓冲区刷新方式|
    |skippws|输入运算符跳过空白符|
    |noskippws|输入运算符不跳过空白符|
    |flush|刷新ostream缓冲区|
    |ends|插入空字符,然后刷新ostream缓冲区|
    |endl|插入换行,然后刷新ostream缓冲区|
    |||

    - 除非你需要控制浮点数的表示形式,否则有标准库选择计数法是最好的方式  

    - 定义在iomanip中的操纵符  

    |||
    |:---:|:---:|
    |setfill(ch)|用ch填充空白|
    |setprecision(ch)|将浮点精度设置为n|
    |setw(w)|读或写值的宽度为w个字符|
    |setbase(b)|将整数输出为b进制|
    |||
    
