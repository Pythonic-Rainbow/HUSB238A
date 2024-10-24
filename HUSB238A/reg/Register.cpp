#include "register.hpp"

namespace HUSB238A {
    Register::Register(const uint8_t val) : _val(val) {

    }

    uint8_t Register::get_val() const { return _val; }

    bool Register::get_bit(const uint8_t field) const {
        return _val & field;
    }
}
