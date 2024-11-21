#ifndef USERCFG1_HPP
#define USERCFG1_HPP

namespace husb238a {
    class UserCfg1 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return USER_CFG1;
        }

        bool en_hvdcp() const {
            return get_bits(field::EN_HVDCP);
        }

        void en_hvdcp(const uint8_t value) {
            set_bits_n(field::EN_HVDCP, value);
        }

        bool en_vb_uv() const {
            return get_bit(field::EN_VB_UV);
        }

        void en_vb_uv(const bool value) {
            set_bit_n(field::EN_VB_UV, value);
        }

        bool en_svid3() const {
            return get_bit(field::EN_SVID3);
        }

        void en_svid3(const bool value) {
            set_bit_n(field::EN_SVID3, value);
        }

        uint8_t out2_sel() const {
            return get_bits(field::OUT2_SEL);
        }

        void out2_sel(const uint8_t value) {
            set_bits_n(field::OUT2_SEL, value);
        }
    };
} // husb238a

#endif //USERCFG1_HPP
