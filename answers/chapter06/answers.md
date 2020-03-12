# ������ ����

   - [6.1����ϰ](#6.1����ϰ)  
   - [6.1.1����ϰ](#6.1.1����ϰ)  
   - [6.1.2����ϰ](#6.1.2����ϰ)

## 6.1����ϰ

**6.1 ʵ�κ��βε�������ʲô��**
- �β�ֻ��һ��ռλ������û��ռ��ʵ�ʵ��ڴ�ռ䡣
- ʵ����ʵ�ʴ��ݽ�������ֵ��  

**6.2 ��ָ�����к����ĸ��д���Ϊʲô��Ӧ������޸���Щ�����أ�**  
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

  a. ����ֵ�����Ͳ�����Ӧ�øĳ�```int f(){ int s; /**/ return s}```����```string f(){string s;/**/return s;}```  
  b.û�з���ֵ���͡�Ӧ�ø�Ϊ```void f2(int i){/**/}```  
  c.������ȷ�����������������������壬�����޸�Ϊ��ͬ������  
  d.����������û����ţ�Ӧ�ø�Ϊ ```double square(double x){return x*x;}```  

**6.3 ��д�Լ���fact����,�ϻ�����Ƿ���ȷ**
```
uint64_t fact(uint64_t val) {
	uint64_t ret;

	for (ret=1;val>1;val--)
		ret *= val;

	return ret;
}
```  

**6.4 ��дһ���û������ĺ���,Ҫ���û�����һ������,�������ɸ����ֵĽ׳ˡ���main�����е��øú���**  
[����](src/rfact.cpp)
```
//
//��ĿҪ���������һ�����ֽ�Ϊ���Ľ׳�����
//˼·��������һ�����ִ�1��ʼ��,��ȡ��������
uint64_t rfact(uint64_t val) {
	uint64_t ret;

	for (ret=1;ret<val;ret++)
	{
		val /= ret;
	}

	return ret;
} 
```  

**6.5 ��дһ����������һ�����ľ���ֵ**  
[����](src/testABS.cpp)  

### 6.1.1����ϰ
**6.6 ˵���βΡ��ֲ������Լ��ֲ���̬���������𡣱�дһ������,ͬʱ�õ���������ʽ**  
[����](src/life.cpp)

**6.7 ��дһ������,������һ�α�����ʱ����0,�Ժ�ÿ�ε��÷���ֵ��1**  
[����](src/incream.cpp)
```
//���ⲿ����ѭ������
//Ȼ����е���
int incream(int count) {
	return count;
}
```  

### 6.1.2����ϰ 
**6.8 ��дһ����Ϊchapter06.h��ͷ�ļ�,�������6.1����ϰ�ĺ�������**  
[chapter06.h](src/chapter06.h)  

### 6.1.3����ϰ  
**��ϰ6.9 ��д���Լ���fact.cc��factMain.cc,
�������ļ���Ӧ�ð�����һС�ڵ���ϰ�б�д��chapter06.hͷ�ļ���
ͨ����Щ�ļ�,�������������֧�ַ���ʽ�����**  

### 6.2.1����ϰ

**6.10 ��дһ������,ʹ��ָ���βν�������������ֵ**  
[swapByPtr.cpp](src/swapByPtr.cpp)
```
void mySwap(int* first,int* second) {
	int temp;			//�м����
	temp = *first;		//����first�ĳ�ʼֵ
	*first = *second;	//��second��ֵ��first
	*second = temp;		//��first�ĳ�ʼֵ��second
}
```  

### 6.2.2����ϰ
**6.11 ��д����֤�Լ���reset����,ʹ���������������͵Ĳ���**  
[passByReference.cpp](src/passByReference.cpp)  
```
//������
void reset(int& num) {
	
	num = 0;
}
```  

**6.12 ��д6.2.1������ϰ6.10�ĳ���,ʹ�����ö���ָ�뽻������������ֵ����������ַ���������ʹ�ã�
Ϊʲô��**  
[passByReference.cpp](src/passByReference.cpp)
```
void mySwap(int* first,int* second) {
	int temp;			//�м����
	temp = *first;		//����first�ĳ�ʼֵ
	*first = *second;	//��second��ֵ��first
	*second = temp;		//��first�ĳ�ʼֵ��second
}
```  
ʹ�ô����ø������ã�����Ҫÿ�ζ�дһ��ȡ��ַ������ˡ�  

**6.13 ����T��ĳ�����͵����֣�˵������������������������**
- `void f(T)` : ����ΪT���ͣ��޷���ֵ  
- `void f(&T)` �� ����Ϊ��T���͵����ã�

**6.14 ��һ���β�Ӧ�����������͵�����,�پ�һ���ββ������������͵�����**  
- ��������Ҫ����������λ�õ�ʱ�����Ҫ�������ô�ֵ������ð���㷨��  
- �������Ƕ����������бȽ϶�����Ҫ������ֵ������ʱ�򣬾Ͳ���ʹ�����ô�ֵ��  

**6.15 ˵��find_char�����е������β�Ϊʲô�����ڵ�����,�ر�˵��Ϊʲôs�ǳ�������
��occurs����ͨ���ã�Ϊʲôs��occurs���������Ͷ�c���ǣ������s����ͨ���û�����ʲô�����
�����occurs�ǳ������û�����ʲô�����**  

```
//����s��c��һ�γ��ֵ�λ������
//�����βθ���ͳ��c���ֵ��ܴ���
string::size_type 
find_char(const string& s,char c,string::size_type& occurs){
    auto ret=s.size(); //��һ�γ��ֵ�λ��(����еĻ�)
    occurs=0;           //���ñ��ֳ��ִ����βε�ֵ
    for(decltype(ret)i =0;i!=s.size();++i){
        if(s[i]==c){
            if(ret==s.size())
                ret=i;  //��¼c��һ�γ��ֵ�λ��
            ++occurs;   //�����ֵĴ�����һ
        }
    }    
    return ret;         //���ִ���ͨ��occurs��ʽ�ط���
}
```  

- s��Ϊ��ͳ�Ƶ��ַ������ں������ǲ����Ըı�ģ���occurs����������ΪĿ���ַ�������λ�ã���Ҫ�����޸�
- s��occurs��ҪԴ�ַ����ĵ�ַ����cֻ����Ϊһ����ͨ�Ĳ����������Ҫ��ԭʼ�ַ����в���  
- s�������ͨ���ý���ı�Դ�ַ���������  
- occurs����ǳ������ã����޷����������в���   

### 6.2.3����ϰ
**6.16 �������������Ȼ�Ϸ�,���ǲ����ر����á�ָ��������Բ��跨����**  
`bool is_empty(string& s){ return s.empty();}`  

empty()��������ʹ��������Ѿ����ˣ����Բ�������Ϊһ������ֵ����Ҫ�޸�Ϊ:  
```
    bool is_empty(string& s){
        return s.empty()?true:false;
    }
```  

**6.17 ��дһ������,�ж�string�������Ƿ��д�д��ĸ����д����һ����������string����ȫ����д
��Сд��ĸ**  
[replace.cpp](src/replace.cpp)

```
//  �ж��ַ������Ƿ���ڴ�д
//
//	@param source ��Ҫ����Դ�ַ���
//	@return ���û�д�д���򷵻�true�����򷵻�false
bool isAnyUpper(const string& source) {
	auto ret = source.size();
	for (int index=0;index!=source.size();++index)
		if (std::isupper(source[index])) //�ж��Ƿ���ڴ�д
			return true;
	return false;
}

```  

```
//  ���ַ�����������ĸ��ת����Сд
// 
// @param source ��Ҫת����Դ�ַ���
// @return ת����ɵ��ַ���
string convertToLower(string& source) {
	for (int index=0;index!=source.size();++index) //�����ַ���
		 source[index]=std::tolower(source[index]); //��������ĸ��ת����Сд��ĸ
		
	return source;
}

```

**6.18 Ϊ����ĺ�����д��������,�Ӹ������������Ʋ⺯���߱��Ĺ���**  
  a.  ��Ϊcompare�ĺ���,���ز���ֵ,������������matrix�������.  
        > `bool compare(matrix&)`  
        > ���ڶԲ���ָ���������һЩ�ж������  

  b.  ��Ϊchang_val�ĺ���,����`vector<int>`�ĵ�����,����������:һ����int,��һ����`vector<int>`�ĵ�����  
        > `vector<int>::iterator change_val(int,vector<int>::iterator)`  
        > ��ָ���ĵ�ֵ�滻Ϊint������ֵ  
       
**6.19 �ٶ�����������,�ж��ĸ����úϷ�,�ĸ����ò��Ϸ�,���ڲ��Ϸ��ĺ�������,˵��ԭ��**  

```
double calc(double);
int count(const string&,char);
int sum(vector<int>::iterator,vector<int>::iterator,int);

```