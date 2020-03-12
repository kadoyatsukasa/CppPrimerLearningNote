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
    ```c++
    int f(){
        string s;
        // ...
        return s;
    }
    ```  
  b.
    ```c++
    f2(int i){/**/}
    ```  
  c. 
    ```c++
    int calc(int v1,int v1){/**/}
    ```  
  d. 
    ```c++
    double square(double x) return x*x;
    ```  

  >a. ����ֵ�����Ͳ�����Ӧ�øĳ�```int f(){ int s; /**/ return s}```����```string f(){string s;/**/return s;}```  
  >b.û�з���ֵ���͡�Ӧ�ø�Ϊ```void f2(int i){/**/}```  
  >c.������ȷ�����������������������壬�����޸�Ϊ��ͬ������  
  >d.����������û����ţ�Ӧ�ø�Ϊ ```double square(double x){return x*x;}```  

**6.3 ��д�Լ���fact����,�ϻ�����Ƿ���ȷ**
```c++
uint64_t fact(uint64_t val) {
	uint64_t ret;

	for (ret=1;val>1;val--)
		ret *= val;

	return ret;
}
```  

**6.4 ��дһ���û������ĺ���,Ҫ���û�����һ������,�������ɸ����ֵĽ׳ˡ���main�����е��øú���**  
[����](src/rfact.cpp)
```c++
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
```c++
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
```c++
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
```c++
//������
void reset(int& num) {
	
	num = 0;
}
```  

**6.12 ��д6.2.1������ϰ6.10�ĳ���,ʹ�����ö���ָ�뽻������������ֵ����������ַ���������ʹ�ã�
Ϊʲô��**  
[passByReference.cpp](src/passByReference.cpp)
```c++
void mySwap(int* first,int* second) {
	int temp;			//�м����
	temp = *first;		//����first�ĳ�ʼֵ
	*first = *second;	//��second��ֵ��first
	*second = temp;		//��first�ĳ�ʼֵ��second
}
```  
  > ʹ�ô����ø������ã�����Ҫÿ�ζ�дһ��ȡ��ַ������ˡ�  

**6.13 ����T��ĳ�����͵����֣�˵������������������������**
- `void f(T)` : ����ΪT���ͣ��޷���ֵ  
- `void f(&T)` �� ����Ϊ��T���͵����ã�

**6.14 ��һ���β�Ӧ�����������͵�����,�پ�һ���ββ������������͵�����**  
   >- ��������Ҫ����������λ�õ�ʱ�����Ҫ�������ô�ֵ������ð���㷨��  
   >- �������Ƕ����������бȽ϶�����Ҫ������ֵ������ʱ�򣬾Ͳ���ʹ�����ô�ֵ��  

**6.15 ˵��find_char�����е������β�Ϊʲô�����ڵ�����,�ر�˵��Ϊʲôs�ǳ�������
��occurs����ͨ���ã�Ϊʲôs��occurs���������Ͷ�c���ǣ������s����ͨ���û�����ʲô�����
�����occurs�ǳ������û�����ʲô�����**  

```c++
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

  >- s��Ϊ��ͳ�Ƶ��ַ������ں������ǲ����Ըı�ģ���occurs����������ΪĿ���ַ�������λ�ã���Ҫ�����޸�
  >- s��occurs��ҪԴ�ַ����ĵ�ַ����cֻ����Ϊһ����ͨ�Ĳ����������Ҫ��ԭʼ�ַ����в���  
  >- s�������ͨ���ý���ı�Դ�ַ���������  
  >- occurs����ǳ������ã����޷����������в���   

### 6.2.3����ϰ
**6.16 �������������Ȼ�Ϸ�,���ǲ����ر����á�ָ��������Բ��跨����**  
`bool is_empty(string& s){ return s.empty();}`  

  >empty()��������ʹ��������Ѿ����ˣ����Բ�������Ϊһ������ֵ����Ҫ�޸�Ϊ:  
```
    bool is_empty(string& s){
        return s.empty()?true:false;
    }
```  

**6.17 ��дһ������,�ж�string�������Ƿ��д�д��ĸ����д����һ����������string����ȫ����д
��Сд��ĸ**  
[replace.cpp](src/replace.cpp)

```c++
// �ж��ַ������Ƿ���ڴ�д
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

```c++
// ���ַ�����������ĸ��ת����Сд
// 
//      @param source ��Ҫת����Դ�ַ���
//      @return ת����ɵ��ַ���
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

```c++
double calc(double);
int count(const string&,char);
int sum(vector<int>::iterator,vector<int>::iterator,int);
vector<int> vec(10);
```  
  a) calc(23.4,55.1);  
        
   > ���Ϸ�����Ϊ����ֻ����һ������  
        
  b) count("abcda",'a');
   
   >  �Ϸ�  
   
  c) calc(66);
   
   > �Ϸ�  

  d) sum(vec.begin(),vec.end(),3.8);  
   > ���Ϸ����ڶ����������ܵ���intֵ������doubleֵ  
 
**6.20 �����β�ʲôʱ��Ӧ���ǳ������ã�����β�Ӧ���ǳ�������,�����ǽ�����Ϊ����ͨ����,�ᷢ��ʲô�����**  
  > ���������ò�Ӧ���޸�ԭ�еĶ��󣬾���Ҫ����Ϊ��������
  > �����������Ϊ����ͨ���ã���ô���������޸�ԭ�ж���  
 

### 6.2.4����ϰ  

**6.21 ��дһ�����������������������:һ��int,��һ��intָ��,�����Ƚ�int��ֵ��ָ����ָ��ֵ,���ؽϴ���Ǹ�.
�ں�����ָ�������Ӧ����ʲô��**  

```c++
// �Ƚ��������ֵĴ�С�������ؽϴ�ֵ
//
//	@param first ��һ����������ͨ����
//	@param second �ڶ���������ָ��
//	@return ���ؽϴ��һ������
int compare(int first, int* second) {
	int result;
	
	if (first > *second)
		result = first;
	else
		result = *second;
	return result;
}

```

**6.22 ��дһ�����������佻������intָ��**  
[swap_ptr.cpp](src/swap_ptr.cpp)  

```c++
//��������ָ��
//
//	@param first ��һ��ָ��
//	@param second �ڶ���ָ��
void swap_ptr(int *&first, int *&second) {
	int* temp;
	temp = first;
	first = second;
	second = temp;
}

```

### 6.2.6����ϰ  

**6.27 ��дһ�����������Ĳ�����`initializer_list<int>`���͵Ķ���,�����Ĺ����Ǽ����б�������Ԫ�صĺ�**  
[sum.cpp](src/sum.cpp)

```c++
//���ʼ���б����ֵ�ܺ�
//
//		@param numbers ��ʼ���б�
//		@return �б������ܺ�
int sum(initializer_list<int> numbers) {

	initializer_list<int>::iterator num_iter;
	int result = 0;

	for (num_iter = numbers.begin(); num_iter != numbers.end(); ++num_iter)
		result += *num_iter;
	return result;
}
```

**6.28 ��error_msg�����ĵڶ����汾�а���ErrCode���͵Ĳ���,����ѭ���ڵ�elem��ʲô���ͣ�**  
```c++
void error_msg(ErrCode e,initializer_list<string> li){
    cout<<e.msg()<<": ";
    for(const auto &elem:li)
        cout<<elem<<" ";
    cout<<endl;
}
```  
  > elem��string����  

**6.29 �ڷ�Χforѭ����ʹ��initializer_list����ʱ,Ӧ�ý�ѭ�����Ʊ�������������������Ϊʲô��**  
  > ����Ҫ����Ϊinitializer_list��Ԫ�ر�����ǲ���ı�ĳ���  

### 6.3.2����ϰ

**6.30 ����str_subrange����,��������������δ������еĴ����**  
  >����������``` error: return-statement with no value, in function returning 'bool' [-fpermissive]```

**6.31 ʲô����·��ص�������Ч��ʲô����·��س�����������Ч��**
  >��������������Ǻ����ľֲ������������ź��������ֲ�����ҲʧЧ�ˣ���ʱ���ص�������Ч��

**6.32 ����ĺ����Ϸ�������Ϸ�,˵���书��;������Ϸ�,�޸����еĴ��󲢽�����ԭ��**  
```c++
int& get(int* array,int index){return array[index];}

int main(){
    int ia[10];
    for(int i=0;i!=10;++i)
        get(ia,i)=i;
}
```

> ������ȡ������������ָ��λ�õ�Ԫ��  

**6.33 ��дһ���ݹ麯�������vector���������**  

```c++
void print_vector(vector<int> &ivec) {
	static auto sz = ivec.size();
	if (sz != 0) {
		cout << ivec[--sz];
		print_vector(ivec);
	}
}
```  

**6.34 ���factorial������ֹͣ����������ʾ,���ᷢ��ʲô�����**  
`if(val!=0)`

```c++
//factorial����
int factorial(int val){
    if(val>1)
        return factorial(val-1)*val;
    return 1;
}
```
  > ��������0

**6.35 �ڵ���factorial����ʱ��Ϊʲô���Ǵ����ֵ��val-1����val--**  
  > ��Ϊfactorial�Ĳ�����һ������

### 6.3.3����ϰ  

**6.36 ��дһ������������,ʹ�䷵����������ò��Ҹ��������10��string���󡣲�Ҫʹ��β�÷������͡�decltype�������ͱ���**  
 > `string (&(fun()))[10]`

**6.37 Ϊ��һ��ĺ�����д3������,һ��ʹ�����ͱ���,��һ��ʹ��β�÷�������,���һ��ʹ��decltype�ؼ��֡�
�����������ʽ��ã�Ϊʲô��**  
  > ���ͱ���: 
  > ```c++ 
  >  typedef string strT[10];
  >  using strT = string[10];
  >  strT& fun(); 
  >```

  > �������ͣ� 
  > ```c++  
  > auto func()->string(&)[10];
  >```

  > decltype: 
  > ```c++
  >  decltype(strT) &fun();
  >```

**6.38 �޸�arrPtr������ʹ�䷵�����������**  
```c++
int odd[]={1,3,5,7,9};
int even[]={0,2,4,6,8};

decltype(odd) &addPtr(int i){
    return ��i%2)? odd:even;
}
```  

### 6.4����ϰ
**6.39 ˵���������ÿ�������еڶ�����������Ǻκ��塣����зǷ�������,��ָ����**  
  1) 
   ```c++ 
    int calc(int,int);
    int calc(const int,const int);    
   ```  
  > �ظ������ˣ� 

  2) 
     ```c++
    int get();
    double get();
    ```
  > ����һ��doubleֵ  

  3) 
     ```c++
       int *reset(int*);
        double* reset(double*); 
     ```
  > ����һ��double���� 

