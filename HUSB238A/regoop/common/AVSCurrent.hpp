#ifndef AVSCURRENT_HPP
#define AVSCURRENT_HPP

namespace husb238a {
    class AVSCurrent : public WRegister {

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
    protected:
        AVSCurrent() = default;
        ~AVSCurrent() = default;
    };
} // husb238a

#endif //AVSCURRENT_HPP
