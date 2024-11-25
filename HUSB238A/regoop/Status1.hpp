#ifndef STATUS1_HPP
#define STATUS1_HPP

namespace husb238a {
    class Status1 final : public Register {
        RegisterAddress get_addr() override {
            return STATUS1;
        }

        bool flgin() const {
            return get_bit(field::FLGIN);
        }

        bool pd_hv() const {
            return get_bit(field::PD_HV);
        }

        bool pd_comm() const {
            return get_bit(field::PD_COMM);
        }

        bool src_alert() const {
            return get_bit(field::SRC_ALERT);
        }

        bool ams_succ() const {
            return get_bit(field::AMS_SUCC);
        }

        bool fault() const {
            return get_bit(field::FAULT);
        }

        bool data_role() const {
            return get_bit(field::DATA_ROLE);
        }
    };
}

#endif //STATUS1_HPP
