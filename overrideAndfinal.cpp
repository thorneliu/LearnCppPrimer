#include<iostream>

class AbstractLibraryBase
{
public:
	void templateMethod() const
	{
		std::cout << "Something about " << implDetail() << std::endl;
	}
private:
	virtual int implDetail() const = 0;
};

//Now we got one LibraryClass
class LibraryClass : public AbstractLibraryBase
{
private:
	virtual int implDetail() const override
	{
		return 42; //Yes, we implement this interface here
	}
};

//Now we got another LibraryClassFinal, which prevents its child to override the methods
class LibraryClassFinal : public AbstractLibraryBase
{
private:
	virtual int implDetail() const override final
	{
		return 42222; //Yes, we implement this interface here
	}
};

//And failed Hijacker could not override implDetail
//the following compile error: overriding final function ‘virtual int LibraryClassFinal::implDetail() const’
class failedEvilHijacker : public LibraryClassFinal
{
private:
	//virtual int implDetail() const override
	//{
	//	return 79;
	//}
};

class EvilHijacker : public LibraryClass
{
	virtual int implDetail() const override
	{
		return 79; //The EvilHijacker can override implDetail
	}
};

int main()
{
	EvilHijacker ev;
	failedEvilHijacker ev2;
	ev2.templateMethod(); //Something about 42
	ev.templateMethod(); //Something about 79;
}
