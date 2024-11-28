#ifndef MANUAL_HPP
#define MANUAL_HPP

namespace husb238a {
    class Manual final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return MANUAL;
        }

        bool force_dpm_hiz() const {
            return get_bit(field::FORCE_DPM_HIZ);
        }

        void force_dpm_hiz(const bool value) {
            set_bit_n(field::FORCE_DPM_HIZ, value);
        }

        bool unatt_snk() const {
            return get_bit(field::UNATT_SNK);
        }

        void unatt_snk(const bool value) {
            set_bit_n(field::UNATT_SNK, value);
        }

        bool disabled() const {
            return get_bit(field::DISABLED);
        }

        void disabled(const bool value) {
            set_bit_n(field::DISABLED, value);
        }

        bool error_rec() const {
            return get_bit(field::ERROR_REC);
        }

        void error_rec(const bool value) {
            set_bit_n(field::ERROR_REC, value);
        }
    };
} // husb238a

#endif //MANUAL_HPP
