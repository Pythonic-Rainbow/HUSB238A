#ifndef HUSB238A_HPP
#define HUSB238A_HPP

#include <reg/RegisterAddresses.hpp>
#include <reg/WRegister.hpp>

#include "I2C.hpp"


#define HUSB238A_I2CADDR_GND 0x42  // Default I2C slave address of a HUSB238A when connected to GND
#define HUSB238A_I2CADDR_VDD 0x62  // Default I2C slave address of a HUSB238A when connected to VDD

namespace husb238a {
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

        template <typename T>
        T* read_register() const {
            static_assert(__is_base_of(Register, T), "T must be derived from Register");
            const int read_result = read_register_byte(T(0).get_addr());
            if (read_result == -1) {
                return nullptr;
            }
            return new T(read_result);
        }

        int write_register(WRegister* reg) const;

    private:
        I2C _i2c; // I2C device
    };
}


#endif //HUSB238A_HPP
