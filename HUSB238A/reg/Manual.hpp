#ifndef MANUAL_HPP
#define MANUAL_HPP

namespace husb238a {

class Manual : public WRegister {
public:
    explicit Manual(const uint8_t value) : WRegister(value) {}

    RegisterAddress get_addr() override {
        return MANUAL;
    }

    bool get_force_dpm_hiz() const {
        return get_bit(regdetail::FORCE_DPM_HIZ);
    }

    void set_force_dpm_hiz(bool value) {
        set_bit_n(regdetail::FORCE_DPM_HIZ, value);
    }

    bool get_unatt_snk() const {
        return get_bit(regdetail::UNATT_SNK);
    }

    void set_unatt_snk(bool value) {
        set_bit_n(regdetail::UNATT_SNK, value);
    }

    bool get_disabled() const {
        return get_bit(regdetail::DISABLED);
    }

    void set_disabled(bool value) {
        set_bit_n(regdetail::DISABLED, value);
    }

    bool get_error_rec() const {
        return _val;
    }

    void set_error_rec(bool value) {
        set_bit_n(regdetail::ERROR_REC, value);
    }
};

} // husb238a

#endif //MANUAL_HPP
