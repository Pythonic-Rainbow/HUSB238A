#ifndef SNKAVSCURRENT_HPP
#define SNKAVSCURRENT_HPP

#include "common/AVSCurrent.hpp"

namespace husb238a {
    class SnkAVSCurrent final : public AVSCurrent {
        RegisterAddress get_addr() override {
            return SNK_AVS_CURRENT;
        }
    };
} // husb238a

#endif //SNKAVSCURRENT_HPP
