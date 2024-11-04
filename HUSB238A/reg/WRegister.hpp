#ifndef WREGISTER_HPP
#define WREGISTER_HPP

#include <ByteUtil.h>

#include "Register.hpp"

namespace husb238a {
    class WRegister : public Register {
    protected:
        explicit WRegister() {
        }

        void set_bits_1(const uint8_t mask) {
            _val |= mask;
        }

        void set_bit_n(const uint8_t mask, const bool value) {
            _val = husb238a::set_bit_n(_val, mask, value);
        }
    };
} // HUSB238A

#endif //WREGISTER_HPP
