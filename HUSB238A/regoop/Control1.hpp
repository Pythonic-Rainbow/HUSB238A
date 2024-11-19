#ifndef CONTROL1_HPP
#define CONTROL1_HPP

namespace husb238a {
    class Control1 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return CONTROL1;
        }

        bool en_dpm_hiz() const {
            return get_bit(regdetail::EN_DPM_HIZ);
        }

        void en_dpm_hiz(const bool value) {
            set_bit_n(regdetail::EN_DPM_HIZ, value);
        }

        bool vdm_respond() const {
            return get_bit(regdetail::VDM_RESPOND);
        }

        void vdm_respond(const bool value) {
            set_bit_n(regdetail::VDM_RESPOND, value);
        }

        bool enable() const {
            return get_bit(regdetail::ENABLE);
        }

        void enable(const bool value) {
            set_bit_n(regdetail::ENABLE, value);
        }

        uint8_t tccdeb() const {
            return _val & regdetail::TCCDEB;
        }

        void tccdeb(const uint8_t value) {
            set_bits_n(regdetail::TCCDEB, value);
        }
    };
} // husb238a

#endif //CONTROL1_HPP
