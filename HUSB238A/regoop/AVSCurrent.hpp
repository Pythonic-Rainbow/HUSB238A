#ifndef AVSCURRENT_HPP
#define AVSCURRENT_HPP

namespace husb238a {

    class AVSCurrent final : public WRegister {
        RegisterAddress addr;

    public:
        enum Addresses : uint8_t {
            SNK = SNK_AVS_CURRENT,
            EPR = EPR_AVS_CURRENT
        };

        explicit AVSCurrent(const Addresses addr) : addr(static_cast<RegisterAddress>(addr)) {}

        RegisterAddress get_addr() override {
            return addr;
        }

        bool avs_vol_m() const {
            return get_bit(field::AVS_VOL_M);
        }

        void avs_vol_m(const bool value) {
            set_bit_n(field::AVS_VOL_M, value);
        }

        uint8_t avs_current() const {
            return get_bits(field::AVS_CURRENT);
        }

        void avs_current(const uint8_t value) {
            set_bits_n(field::AVS_CURRENT, value);
        }
    };
} // husb238a

#endif //AVSCURRENT_HPP
