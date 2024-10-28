#ifndef REGISTER_HPP
#define REGISTER_HPP

#include <GlobalImport.h>
#include <I2C.hpp>

#include "RegisterDetails.hpp"


namespace HUSB238A {

class Register {
public:
    explicit Register(uint8_t value, I2C* i2c, RegisterAddress addr);

    int reread();

    uint8_t get_val() const;

    /**
    * Gets a single bit
    * @param mask bit mask for the single bit. You should use the enums defined in RegisterDetails.hpp
     */
    bool get_bit(uint8_t mask) const;

    /**
     * Set a range of bits to 0
     * @param mask The bit mask to set
    */
    void set_bits_0(uint8_t mask);

    /**
     * Set a range of bits to 1
     * @param mask The bit mask to set
    */
    void set_bits_1(uint8_t mask);

private:
    uint8_t _val; // Value of the register. Note: This is not guaranteed to be up to date!
    RegisterAddress _addr; // Address of this register
    I2C* _i2c;
};

}

#endif //REGISTER_HPP
