#ifndef USERCFG0_HPP
#define USERCFG0_HPP

namespace husb238a {
    class UserCfg0 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return USER_CFG0;
        }

        uint8_t tsnkdscnt() const {
            return get_bits(field::TSNKDSCNT);
        }

        void tsnkdscnt(const uint8_t value) {
            set_bits_n(field::TSNKDSCNT, value);
        }

        bool cc_dscnten() const {
            return get_bit(field::CC_DSCNTEN);
        }

        void cc_dscnten(const bool value) {
            set_bit_n(field::CC_DSCNTEN, value);
        }

        bool tfaul() const {
            return get_bit(field::TFAUL);
        }

        void tfaul(const bool value) {
            set_bit_n(field::TFAUL, value);
        }

        uint8_t tvbdsgtimeout() const {
            return get_bits(field::TVBDSGTIMEOUT);
        }

        void tvbdsgtimeout(const uint8_t value) {
            set_bits_n(field::TVBDSGTIMEOUT, value);
        }

        uint8_t tbc_level() const {
            return get_bits(field::TBC_LEVEL);
        }

        void tbc_level(const bool value) {
            set_bits_n(field::TBC_LEVEL, value);
        }
    };
} // husb238a

#endif //USERCFG0_HPP
