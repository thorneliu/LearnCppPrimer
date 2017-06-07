# 令函数的返回值是一个const
令函数返回一个const值是有意义的，可以降低因为客户错误而造成的意外，而又不至于放弃安全性和高效性。
```
class　Rational {};
const Rational operator* (const Rational& lhs, const Rational& rhs);
```

函数返回值声明为const的作用，以如下例子为例：
```
Rational a, b, c;
...
(a * b) = c;
```
如果a和b都是内置类型，上述代码直接就是不合法的。基于我们“良好的用户自定义类型”的特征是他们能够避免
无端的与内置类型不兼容。
