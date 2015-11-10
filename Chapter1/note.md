# 第一章要点记录

##1 输入输出流

> * cin  : istream object
> * cout : ostream object

'>>' 输入操作符 : istream >> var  
'<<' 输出操作符 : ostream << var

##2 读取未知数目输入
``` C++
  while(cin>>value) 
  // 它从标准输入读取下一个数并保存在value中
  // while条件测试输入操作符">>"的返回结果，即测试std::cin
  // 如果流是有效的： 读入下一个输入时可能的
  // 如果流无效 比如遇到文件结束符或者无效输入 则会导致条件失败
```

##3 类的简介
