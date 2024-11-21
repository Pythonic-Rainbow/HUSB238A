#ifndef USERCFG3_HPP
#define USERCFG3_HPP

namespace husb238a {
    class UserCfg3 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return USER_CFG3;
        }

        bool pps_cap_snk() const {
            return get_bits(field::PPS_CAP_SNK);
        }

        void pps_cap_snk(const uint8_t value) {
            set_bits_n(field::PPS_CAP_SNK, value);
        }

        bool avs_cap_snk() const {
            return get_bit(field::AVS_CAP_SNK);
        }

        void avs_cap_snk(const bool value) {
            set_bit_n(field::AVS_CAP_SNK, value);
        }

        bool modal_operation() const {
            return get_bit(field::MODAL_OPERATION);
        }

        void modal_operation(const bool value) {
            set_bit_n(field::MODAL_OPERATION, value);
        }

        bool epr_avs_cap_snk() const {
            return get_bit(field::EPR_AVS_CAP_SNK);
        }

        void epr_avs_cap_snk(const bool value) {
            set_bit_n(field::EPR_AVS_CAP_SNK, value);
        }

        bool snk_cap_min_voltage() const {
            return get_bit(field::SNK_CAP_MIN_VOLTAGE);
        }

        void snk_cap_min_voltage(const bool value) {
            set_bit_n(field::SNK_CAP_MIN_VOLTAGE, value);
        }

        fval::SnkPDO1Current::T snk_pdo1_current() const {
            return static_cast<fval::SnkPDO1Current::T>(get_bits(field::SNK_PDO1_CURRENT));
        }

        void snk_pdo1_current(const fval::SnkPDO1Current::T value) {
            set_bits_n(field::SNK_PDO1_CURRENT, value);
        }
    };
} // husb238a

#endif //USERCFG3_HPP
