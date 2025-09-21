#include <iostream>
#include <string>
#include <cctype>
#include <utility>

using std::cout;
using std::string;


// 1) 
int add(int a, int b) { return a + b; }

// 2) 
void set_name_val(std::string s) { g_name = std::move(s); }

// 4) 
bool starts_with_hello(const std::string& s) {
    return s.rfind("hello", 0) == 0;
}

// 5) 
void increment(int& x) { ++x; }

// 6) 
void to_upper(std::string& s) {
    for (char& c : s)
        c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
}

// 7)
void forbid_const_rvr_int(const int&&) = delete;

// 8) 
void forbid_const_rvr_string(const std::string&&) = delete;

// 9) 
void consume_int(int&& x) {
    ++x;
    cout << "consume_int: value now " << x << "\n";
}

// 10) 
void set_name_rvr(std::string&& s) { g_name = std::move(s); }

// 11) 
int count_value() { return 42; }

// 12) 
std::string greet() { return "hello"; }

// 13) 
struct C {
    int x_{7};
    const int& get() const { return x_; }
};

// 14) 
struct UserReadOnly {
    std::string name_{"Ali"};
    const std::string& name() const { return name_; }
};

// 15) 
struct Counter {
    int c_{0};
    int& value() { return c_; }
};

// 16) 
struct UserMutable {
    std::string name_{"Bob"};
    std::string& name() { return name_; }
};

// 17) 
const int&& bad_return_int_const_rvr() = delete;

// 18) 
const std::string&& bad_return_str_const_rvr() = delete;

// 19)
int&& bad_return_int_rvr() = delete;

// 20)
std::string&& bad_return_str_rvr() = delete;
