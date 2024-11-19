#ifndef MANUAL_HPP
#define MANUAL_HPP

namespace husb238a {
    class Manual final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return MANUAL;
        }

        bool force_dpm_hiz() const {
            return get_bit(regdetail::FORCE_DPM_HIZ);
        }

        void force_dpm_hiz(const bool value) {
            set_bit_n(regdetail::FORCE_DPM_HIZ, value);
        }

        bool unatt_snk() const {
            return get_bit(regdetail::UNATT_SNK);
        }

        void unatt_snk(const bool value) {
            set_bit_n(regdetail::UNATT_SNK, value);
        }

        bool disabled() const {
            return get_bit(regdetail::DISABLED);
        }

        void disabled(const bool value) {
            set_bit_n(regdetail::DISABLED, value);
        }

        bool error_rec() const {
            return _val;
        }

        void error_rec(const bool value) {
            set_bit_n(regdetail::ERROR_REC, value);
        }
    };
} // husb238a

#endif //MANUAL_HPP
