#ifndef HUSB238A_HPP
#define HUSB238A_HPP

#include <reg/RegisterAddresses.hpp>
#include "regoop/common/WRegister.hpp"

#include "I2C.hpp"

namespace husb238a {
    enum DefaultI2CAddress : uint8_t {
        GND = 0x42,  // Default I2C slave address of a HUSB238A when connected to GND
        VDD = 0x62  // Default I2C slave address of a HUSB238A when connected to VDD
    };


    class HUSB238A {
    public:
        /**
         * Instantiate to access an instance of HUSB238A.
         * @param addr I2C address of the HUSB238A
         */
        explicit HUSB238A(uint8_t addr);

        explicit HUSB238A(I2C i2c);

        /**
        * @brief Blocks and keep trying until the HUSB238A can be reached
        * When the HUSB238A is not reached, it calls `callback(retry)`,
        * where `retry` is the current number of retry.
        * @param callback Callback
        */
        void wait_until_reached(void (*callback)(int retry)) const;

        /* General purpose access for any registers */
        int read_register_byte(RegisterAddress addr) const;
        int write_register_byte(RegisterAddress addr, uint8_t value) const;

        bool read_register(Register* reg) const;
        int write_register(WRegister* reg) const;

    private:
        I2C _i2c; // I2C device
    };
}


#endif //HUSB238A_HPP
