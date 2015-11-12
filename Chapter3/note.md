#String

##1 string 类型的输入操作符 >> 
>* 忽略开头的所有空白字符(空格， 换行符，制表符)
>* 读取字符直至再次遇到空白字符，读取终止

```C
 cin >> string; //If "Hello World" is inputed, 
 // string is "Hello"  
```

##2 使用getline函数
getline函数接受两个入参：一个输入流对象和一个string对象  
getline函数的返回值为输入流对象，和输入操作符>>一样，把他作为  
判断条件

```C
   int main()
   {
       string line;

       //read line as time until end of file EOF
       while(getline(cin, line)) // getline函数返回时会丢弃换行符所以string不含换行符
           cout << line << endl;
       return 0;
   }
```C

##3 string 的拼接 
string的加法被定义为连接  
+操作符要求左右操作数至少有一个string类型:  
```C
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + ", ";
    string s4 = "hello" + ", "; //error, no string 操作数
```C

#4 vector

##1 vector
    vector 不是一种数据类型，她是一种类模板
```C
    vector<T> Tvec; // Tvec hold objects of type T
```C
