#include "register.hpp"

namespace HUSB238A {
    Register::Register(const uint8_t value, I2C* i2c, const RegisterAddress addr) : _val(value), _addr(addr), _i2c(i2c) { }

    int Register::reread() {
        const int read_result = _i2c->read_register(static_cast<uint8_t>(_addr));
        if (read_result == 0) {
            _val = read_result;
        }
        return read_result;
    }

    uint8_t Register::get_val() const { return _val; }

    bool Register::get_bit(const uint8_t mask) const {
        return _val & mask;
    }

    void Register::set_bits_0(const uint8_t mask) {
        _val &= ~mask;
    }

    void Register::set_bits_1(const uint8_t mask) {
        _val |= mask;
    }
}
