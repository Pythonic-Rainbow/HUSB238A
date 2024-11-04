#ifndef CONTROL1_HPP
#define CONTROL1_HPP

namespace husb238a {

class Control1 : public WRegister {
public:
    explicit Control1(const uint8_t value) : WRegister(value) {}

    RegisterAddress get_addr() override {
        return CONTROL1;
    }

    bool get_en_dpm_hiz() const {
        return get_bit(regdetail::EN_DPM_HIZ);
    }

    void set_en_dpm_hiz(bool value) {
        set_bit_n(regdetail::EN_DPM_HIZ, value);
    }

    bool get_vdm_respond() const {
        return get_bit(regdetail::VDM_RESPOND);
    }

    void set_vdm_respond(bool value) {
        set_bit_n(regdetail::VDM_RESPOND, value);
    }

    bool get_enable() const {
        return get_bit(regdetail::ENABLE);
    }

    void set_enable(bool value) {
        set_bit_n(regdetail::ENABLE, value);
    }

    uint8_t get_tccdeb() const {
        return _val & regdetail::TCCDEB;
    }

    void set_tccdeb(uint8_t value) {
        set_bits_n(regdetail::TCCDEB, value);
    }
};

} // husb238a

#endif //CONTROL1_HPP
