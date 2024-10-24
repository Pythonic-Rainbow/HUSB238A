#ifndef REGISTER_HPP
#define REGISTER_HPP

#include <GlobalImport.h>


namespace HUSB238A {

class Register {
public:
    explicit Register(uint8_t val);

    uint8_t get_val() const;

    bool get_bit(uint8_t field) const;

private:
    uint8_t _val; // Value of the register. Note: This is not guaranteed to be up to date!
};

}

#endif //REGISTER_HPP
