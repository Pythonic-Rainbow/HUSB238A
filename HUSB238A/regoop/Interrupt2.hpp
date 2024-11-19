#ifndef INTERRUPT2_HPP
#define INTERRUPT2_HPP

namespace husb238a {
    class Interrupt2 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return INTERRUPT2;
        }

        bool i_tsd() const {
            return get_bit(regdetail::I_TSD);
        }

        void i_tsd(const bool value) {
            set_bit_n(regdetail::I_TSD, value);
        }

        bool i_vbus_uv() const {
            return get_bit(regdetail::I_VBUS_UV);
        }

        void i_vbus_uv(const bool value) {
            set_bit_n(regdetail::I_VBUS_UV, value);
        }

        bool i_dr_role() const {
            return get_bit(regdetail::I_DR_ROLE);
        }

        void i_dr_role(const bool value) {
            set_bit_n(regdetail::I_DR_ROLE, value);
        }

        bool i_src_alert() const {
            return get_bit(regdetail::I_SRC_ALERT);
        }

        void i_src_alert(const bool value) {
            set_bit_n(regdetail::I_SRC_ALERT, value);
        }

        bool i_frc_fail() const {
            return get_bit(regdetail::I_FRC_FAIL);
        }

        void i_frc_fail(const bool value) {
            set_bit_n(regdetail::I_FRC_FAIL, value);
        }

        bool i_frc_succ() const {
            return get_bit(regdetail::I_FRC_SUCC);
        }

        void i_frc_succ(const bool value) {
            set_bit_n(regdetail::I_FRC_SUCC, value);
        }

        bool i_vdm_msg() const {
            return get_bit(regdetail::I_VDM_MSG);
        }

        void i_vdm_msg(const bool value) {
            set_bit_n(regdetail::I_VDM_MSG, value);
        }
    };
} // husb238a

#endif //INTERRUPT2_HPP
