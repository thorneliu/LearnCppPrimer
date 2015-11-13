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
```

##3 string 的拼接 
string的加法被定义为连接  
+操作符要求左右操作数至少有一个string类型:  
```C
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + ", ";
    string s4 = "hello" + ", "; //error, no string 操作数
```

#4 vector

##1 vector
    vector 不是一种数据类型，她是一种类模板
```C
    vector<T> Tvec; // Tvec hold objects of type T
```

**vector的下标操作是不能添加元素的, 仅能对已经存在的元素进行下标操作**
```C
    vector<int> ivec; //empty vector
    for(vector<int>::size_type ix = 0; i != 10; ix++)
        ivec[ix] = ix; // error, ivec has no elements
```

#5 迭代器
每种容器类型都定义了自己的迭代器类型, 如vector:
```C
    vector<int>::interator iter;
    string::interator iter;
```

由end操作返回的迭代器指向vector的“末端元素的下一个”, 由end操作
返回的迭代器并不指向任何实际的元素，相反，它只是一个哨兵的作用。
迭代器类型可以使用解引用运算符(\*)来访问迭代器指向的元素。
```C
    *iter = 0;
```

##5 const_iterator
    const_iterator的类型只能用于读取容器内元素，但不能改变其值。但不要将const——iterator和const的iterator
混淆。const的iterator将只能指向某一个确定的元素，不能访问不同的元素。
```C
    vector<int>::const_iterator iter;
	*iter = 10; //error, the *iter value could not be changed, its read only

	cont vector<int>::iterator iter2 = ivec.begin();
	iter2++; // error, could not change const iterator's reference
```

#6 bitset
bitset是一种类模板，但是bitset类型对象的区别仅仅在于
其长度不同
```C
    bitset<n> b; //长度为n的biset类型
    bitset<m> b; //长度为m的bitset类型
```

bitset对象的初始化方法:
```C
    bitset<n> b;
    bitset<n> b(u); 
    bitset<n> b(s);
    bitset<n> b(s, pos, n);


    string strval("1100");
    bitset<32> bitvec4(strval); // bitset: 0011
    //string对象和bitset对象之间是反向转化的：strign对象的最右边字符用来初始化bitset对象的低阶位
```
