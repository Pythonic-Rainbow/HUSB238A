#ifndef SRCEPRAVS_HPP
#define SRCEPRAVS_HPP

namespace husb238a {

    class SrcEPRAVS final : public Register {
    public:

        RegisterAddress get_addr() override {
            return SRC_EPR_AVS;
        }

        bool epr_avs_detect() const {
            return get_bit(field::EPR_AVS_DETECT);
        }

        uint8_t epr_avs_max_voltage() const {
            return get_bits(field::EPR_AVS_MAX_VOLTAGE);
        }

        fval::AVSMinVoltage::T epr_avs_min_voltage() const {
            return static_cast<fval::AVSMinVoltage::T>(get_bits(field::EPR_AVS_MIN_VOLTAGE));
        }
    };
} // husb238a

#endif //SRCEPRAVS_HPP
