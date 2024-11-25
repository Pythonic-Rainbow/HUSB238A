#ifndef EPRAVSCURRENT_HPP
#define EPRAVSCURRENT_HPP

#include "common/AVSCurrent.hpp"

namespace husb238a {
    class EPRAVSCurrent final : public AVSCurrent {
        RegisterAddress get_addr() override {
            return EPR_AVS_CURRENT;
        }
    };
} // husb238a

#endif //EPRAVSCURRENT_HPP
