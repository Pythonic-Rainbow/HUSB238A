#ifndef SRCPDO_HPP
#define SRCPDO_HPP

namespace husb238a {
    class SrcPDO final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return SRC_PDO;
        }

        fval::PDOSelect::T pdo_select() const {
            return static_cast<fval::PDOSelect::T>(get_bits(field::PDO_SELECT));
        }

        void pdo_select(const fval::PDOSelect::T value) {
            set_bits_n(field::PDO_SELECT, value);
        }

        uint8_t snk_pps_vol_m() const {
            return get_bits(field::SNK_PPS_VOL_M);
        }

        void snk_pps_vol_m(const uint8_t value) {
            set_bits_n(field::SNK_PPS_VOL_M, value);
        }
    };
} // husb238a

#endif //SRCPDO_HPP
