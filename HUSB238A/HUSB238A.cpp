#include "HUSB238A.hpp"

namespace HUSB238A {
    Chip::Chip(const uint8_t addr): _i2c(addr) { }

    void Chip::wait_until_reached(void(*callback)(int retry)) const {
        for (int i = 1; !_i2c.can_ack(); i++) {
            callback(i);
        }
    }

    Register* Chip::read_register(RegisterAddress addr) const {
        const int read_result = _i2c.read_register(addr);
        if (read_result == -1) {
            return nullptr;
        }
        return new Register(read_result);
    }

    int Chip::write_register(const RegisterAddress addr, const Register value) const {
        return _i2c.write_register(addr, value.get_val());
    }

    I2C Chip::get_i2c() const {
        return _i2c;
    }

}
