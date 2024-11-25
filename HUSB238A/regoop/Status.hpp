#ifndef STATUS_HPP
#define STATUS_HPP

namespace husb238a {
    class Status final : public Register {
        RegisterAddress get_addr() override {
            return STATUS;
        }

        bool ams_process() const {
            return get_bit(field::AMS_PROCESS);
        }

        bool pd_epr_snk() const {
            return get_bit(field::PD_EPR_SNK);
        }

        bool tsd() const {
            return get_bit(field::TSD);
        }

        uint8_t bc_lvl() const {
            return get_bits(field::BC_LVL);
        }

        bool attach() const {
            return get_bit(field::ATTACH);
        }
    };
}

#endif //STATUS_HPP
