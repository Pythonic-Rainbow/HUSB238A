#ifndef SRCPDOAVS_HPP
#define SRCPDOAVS_HPP

namespace husb238a {

    class SrcPDOAVS final : public Register {
    public:

        RegisterAddress get_addr() override {
            return SRC_PDO_AVS;
        }

        bool src_avs_detect() const {
            return get_bit(field::SRC_AVS_DETECT);
        }

        uint8_t avs_max_voltage() const {
            return get_bits(field::AVS_MAX_VOLTAGE);
        }

        fval::AVSMinVoltage::T avs_min_voltage() const {
            return static_cast<fval::AVSMinVoltage::T>(get_bits(field::AVS_MIN_VOLTAGE));
        }
    };
} // husb238a

#endif //SRCPDOAVS_HPP
