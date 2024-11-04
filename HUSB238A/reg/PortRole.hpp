#ifndef PORTROLE_HPP
#define PORTROLE_HPP

#include "Register.hpp"
#include "RegisterDetails.hpp"

namespace husb238a {
    class PortRole : public Register {
    public:
        explicit PortRole(const uint8_t value) : Register(value) {}

        RegisterAddress get_addr() override {
            return PORTROLE;
        }

        bool is_sink_only() const {
            return get_bit(regdetail::PortRole::SINK_ONLY) == 0;
        }
    };
} // HUSB238A

#endif //PORTROLE_HPP
