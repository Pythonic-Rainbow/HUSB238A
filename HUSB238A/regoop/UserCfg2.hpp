#ifndef USERCFG2_HPP
#define USERCFG2_HPP

namespace husb238a {
    class UserCfg2 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return USER_CFG2;
        }

        bool en_out2() const {
            return get_bits(field::EN_OUT2);
        }

        void en_out2(const uint8_t value) {
            set_bits_n(field::EN_OUT2, value);
        }

        bool flg_polarity() const {
            return get_bit(field::FLG_POLARITY);
        }

        void flg_polarity(const bool value) {
            set_bit_n(field::FLG_POLARITY, value);
        }

        bool en_faultin() const {
            return get_bit(field::EN_FAULTIN);
        }

        void en_faultin(const bool value) {
            set_bit_n(field::EN_FAULTIN, value);
        }

        bool en_out1() const {
            return get_bit(field::EN_OUT1);
        }

        void en_out1(const bool value) {
            set_bit_n(field::EN_OUT1, value);
        }

        bool pd_prior() const {
            return get_bit(field::PD_PRIOR);
        }

        void pd_prior(const bool value) {
            set_bit_n(field::PD_PRIOR, value);
        }

        bool en_drs() const {
            return get_bit(field::EN_DRS);
        }

        void en_drs(const bool value) {
            set_bit_n(field::EN_DRS, value);
        }
    };
} // husb238a

#endif //USERCFG2_HPP
