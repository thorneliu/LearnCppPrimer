#include <iostream>
//#include <boost/make_shared.hpp>
#include <memory>

class foo;
class bar
{
public:
	bar(foo* pfoo)
	{
		std::cout << "constructing bar with pfoo..." << std::endl;
		m_pfoo.reset(pfoo);
	}
	~bar(){std::cout << "destory bar..." << std::endl;}
private:
	std::shared_ptr<foo> m_pfoo;
};

class foo
{
public:
	foo(){std::cout << "constructing foo..." << std::endl;}
	~foo(){std::cout << "destory foo..." << std::endl; }
	
	void getMsg(int i)
	{
		std::cout << "foo getMsg i = " << i << std::endl;
		m_bar = std::make_shared<bar>(this);
	}
private:
	std::shared_ptr<bar> m_bar;
};

int main()
{
	std::shared_ptr<foo> pfoo = std::make_shared<foo>();
	pfoo->getMsg(1);
	//pfoo->getMsg(2);
	return 0;
}
