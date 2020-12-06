#pragma once
#include <string>

class Example
{
public:
    explicit Example(const char *name);
    virtual ~Example();

    std::string Greet() const;

private:
    const char *name_;
};


// Example::Example(const char *name)
//         :name_(name) {
// }

// Example::~Example() {
// }

// std::string Example::Greet() const {
//     std::string ret;
//     ret.append("Hello, ");
//     ret.append(name_);
//     ret.push_back('!');
//     return ret;
// }