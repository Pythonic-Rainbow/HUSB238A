#ifndef USERCFG0_HPP
#define USERCFG0_HPP

namespace husb238a {
    class UserCfg0 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return USER_CFG0;
        }

        uint8_t tsnkdscnt() const {
            return get_bits(regdetail::TSNKDSCNT);
        }

        void tsnkdscnt(const uint8_t value) {
            set_bits_n(regdetail::TSNKDSCNT, value);
        }

        bool cc_dscnten() const {
            return get_bit(regdetail::CC_DSCNTEN);
        }

        void cc_dscnten(const bool value) {
            set_bit_n(regdetail::CC_DSCNTEN, value);
        }

        bool tfaul() const {
            return get_bit(regdetail::TFAUL);
        }

        void tfaul(const bool value) {
            set_bit_n(regdetail::TFAUL, value);
        }

        uint8_t tvbdsgtimeout() const {
            return get_bits(regdetail::TVBDSGTIMEOUT);
        }

        void tvbdsgtimeout(const uint8_t value) {
            set_bits_n(regdetail::TVBDSGTIMEOUT, value);
        }

        uint8_t tbc_level() const {
            return get_bits(regdetail::TBC_LEVEL);
        }

        void tbc_level(const bool value) {
            set_bits_n(regdetail::TBC_LEVEL, value);
        }
    };
} // husb238a

#endif //USERCFG0_HPP
