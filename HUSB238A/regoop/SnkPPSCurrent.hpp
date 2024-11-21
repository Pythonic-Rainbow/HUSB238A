#ifndef SNKPPSCURRENT_HPP
#define SNKPPSCURRENT_HPP

namespace husb238a {
    class SnkPPSCurrent final : public WRegister {
        RegisterAddress get_addr() override {
            return SNK_PPS_CURRENT;
        }

        void snk_pps_current(const uint8_t value) {
            set_bits_n(field::SNK_PPS_CURRENT, value);
        }
    };
} // husb238a

#endif //SNKPPSCURRENT_HPP
