#ifndef CONTROL1_HPP
#define CONTROL1_HPP

namespace husb238a {
    class Control1 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return CONTROL1;
        }

        bool en_dpm_hiz() const {
            return get_bit(field::EN_DPM_HIZ);
        }

        void en_dpm_hiz(const bool value) {
            set_bit_n(field::EN_DPM_HIZ, value);
        }

        bool vdm_respond() const {
            return get_bit(field::VDM_RESPOND);
        }

        void vdm_respond(const bool value) {
            set_bit_n(field::VDM_RESPOND, value);
        }

        bool enable() const {
            return get_bit(field::ENABLE);
        }

        void enable(const bool value) {
            set_bit_n(field::ENABLE, value);
        }

        uint8_t tccdeb() const {
            return get_bits(_val & field::TCCDEB);
        }

        void tccdeb(const uint8_t value) {
            set_bits_n(field::TCCDEB, value);
        }
    };
} // husb238a

#endif //CONTROL1_HPP
