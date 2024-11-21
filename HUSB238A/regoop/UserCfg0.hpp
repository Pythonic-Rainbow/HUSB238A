#ifndef USERCFG0_HPP
#define USERCFG0_HPP

namespace husb238a {
    class UserCfg0 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return USER_CFG0;
        }

        fval::TSNKDSCNT::T tsnkdscnt() const {
            return static_cast<fval::TSNKDSCNT::T>(get_bits(field::TSNKDSCNT));
        }

        void tsnkdscnt(const fval::TSNKDSCNT::T value) {
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

        fval::TVBDSGTIMEOUT::T tvbdsgtimeout() const {
            return static_cast<fval::TVBDSGTIMEOUT::T>(get_bits(field::TVBDSGTIMEOUT));
        }

        void tvbdsgtimeout(const fval::TVBDSGTIMEOUT::T value) {
            set_bits_n(field::TVBDSGTIMEOUT, value);
        }

        fval::TBCLevel::T tbc_level() const {
            return static_cast<fval::TBCLevel::T>(get_bits(field::TBC_LEVEL));
        }

        void tbc_level(const fval::TBCLevel::T value) {
            set_bits_n(field::TBC_LEVEL, value);
        }
    };
} // husb238a

#endif //USERCFG0_HPP
