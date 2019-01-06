#include<iostream>

class Screen
{
public:
    using pos = std::string::size_type;
    Screen() = default;
    ~Screen() = default;
    Screen(const std::string& str, pos cursur) : data_(str), cursur_(cursur) {}
    Screen(const Screen& other)
    {
        if (this != &other)
        {
            this->cursur_ = other.getPos();
            this->data_ = other.getData();
        }
    }
    void show() const
    {
        if (data_.empty())
        {
            std::cout << "empty screen..." << std::endl;
            return;
        }
        std::cout << data_[cursur_] << std::endl;
    }

    void showScreen() const
    {
        std::cout << data_ << std::endl;
    }

    Screen& move(int x) 
    {
        cursur_ += x;
        return *this;
    }

    Screen& set(char c)
    {
        data_[cursur_] = c;
        return *this;
    }

    std::string getData() const {return data_;}
    pos getPos() const {return cursur_;}

private:
    std::string data_;
    pos cursur_;
};

int main()
{
    Screen s;
    s.show();
    Screen s2("Hello world", 0);
    s2.show();
    s = s2;
    s.show();
    s.move(1).set('q');
    s.showScreen();
    s.show();

    //Screen::set(Screen::move(&s, 2), 'Z');
    s.move(3).set('Z');
    s.showScreen();
    s.show();

    return 0;
}

