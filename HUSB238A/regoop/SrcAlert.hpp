#ifndef SRCALERT_HPP
#define SRCALERT_HPP

namespace husb238a {

    class SrcAlert final : public Register {
    public:

        RegisterAddress get_addr() override {
            return SRC_ALERT;
        }

        bool extended() const {
            return get_bit(field::EXTENDED);
        }

        bool ovp_event() const {
            return get_bit(field::OVP_EVENT);
        }

        bool src_input() const {
            return get_bit(field::SRC_INPUT);
        }

        bool op_change() const {
            return get_bit(field::OP_CHANGE);
        }

        bool otp_event() const {
            return get_bit(field::OTP_EVENT);
        }

        bool ocp_event() const {
            return get_bit(field::OCP_EVENT);
        }

        bool battery_status() const {
            return get_bit(field::BATTERY_STATUS);
        }
    };
} // husb238a

#endif //VDMHEADER_HPP
