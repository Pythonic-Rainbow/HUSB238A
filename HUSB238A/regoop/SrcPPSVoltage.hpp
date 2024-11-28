#ifndef SRCPPSVOLTAGE_HPP
#define SRCPPSVOLTAGE_HPP

namespace husb238a {

    class SrcPPSVoltage final : public Register {
    public:

        RegisterAddress get_addr() override {
            return SRC_PPS_VOLTAGE;
        }

        fval::PPSMaxVoltage::T pps1_max_voltage() const {
            return static_cast<fval::PPSMaxVoltage::T>(get_bits(field::PPS1_MAX_VOLTAGE));
        }

        fval::PPSMaxVoltage::T pps2_max_voltage() const {
            return static_cast<fval::PPSMaxVoltage::T>(get_bits(field::PPS2_MAX_VOLTAGE));
        }

        fval::PPSMaxVoltage::T pps3_max_voltage() const {
            return static_cast<fval::PPSMaxVoltage::T>(get_bits(field::PPS3_MAX_VOLTAGE));
        }

        fval::PPSMinVoltage::T pps_min_voltage() const {
            return static_cast<fval::PPSMinVoltage::T>(get_bits(field::PPS_MIN_VOLTAGE));
        }
    };
} // husb238a

#endif //SRCPPSVOLTAGE_HPP
