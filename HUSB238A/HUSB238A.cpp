#include "HUSB238A.hpp"

namespace husb238a {
    HUSB238A::HUSB238A(const uint8_t addr): _i2c(I2C(addr)) { }

    HUSB238A::HUSB238A(const I2C i2c): _i2c(i2c) { }

    void HUSB238A::wait_until_reached(void(*callback)(int retry)) const {
        for (int i = 1; !_i2c.can_ack(); i++) {
            callback(i);
        }
    }

    int HUSB238A::read_register_byte(const RegisterAddress addr) const {
        return _i2c.read_register(addr);
    }

    int HUSB238A::write_register_byte(const RegisterAddress addr, const uint8_t value) const {
        return _i2c.write_register(addr, value);
    }

    int HUSB238A::write_register(WRegister* reg) const {
        return _i2c.write_register(reg->get_addr(), reg->get_val());
    }
}
