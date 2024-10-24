#ifndef CHIP_HPP
#define CHIP_HPP

#include <reg/register.hpp>
#include <reg/RegisterDetails.hpp>

#include "I2C.hpp"


// Default I2C slave address of a HUSB238A
#define HUSB238A_I2CADDR_DEFAULT 0x62

namespace HUSB238A {

class Chip {
public:
    /**
     * Instantiate to access an instance of HUSB238A.
     * @param addr I2C address of the HUSB238A
     */
    explicit Chip(uint8_t addr = HUSB238A_I2CADDR_DEFAULT);

    /**
    * @brief Blocks and keep trying until the HUSB238A can be reached
    * When the HUSB238A is not reached, it calls `callback(retry)`,
    * where `retry` is the current number of retry.
    * @param callback Callback
    */
    void wait_until_reached(void (*callback)(int retry)) const;

    /* Debugging */
    Register* read_register(RegisterAddress addr) const;
    int write_register(RegisterAddress addr, Register value) const;



    I2C get_i2c() const;
private:
    I2C _i2c;  // I2C device
};

}


#endif //CHIP_HPP
