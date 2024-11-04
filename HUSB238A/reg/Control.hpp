#ifndef CONTROL_HPP
#define CONTROL_HPP

#include "WRegister.hpp"

namespace husb238a {
    class Control : public WRegister {
    public:
        explicit Control(const uint8_t value) : WRegister(value) {}

        RegisterAddress get_addr() override {
            return CONTROL;
        }

        bool get_int_mask() const {
            return _val;
        }

        void set_int_mask(const bool value) {
            _val = value;
        }
    };
} // HUSB238A

#endif //CONTROL_HPP
