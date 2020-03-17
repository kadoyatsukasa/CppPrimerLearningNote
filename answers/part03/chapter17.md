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
    |||