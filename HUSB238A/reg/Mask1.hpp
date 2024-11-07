#ifndef MASK1_HPP
#define MASK1_HPP

namespace husb238a {
    class Mask1 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return MASK1;
        }

        bool m_tsd() const {
            return get_bit(regdetail::M_TSD);
        }

        void m_tsd(const bool value) {
            set_bit_n(regdetail::M_TSD, value);
        }

        bool m_vbus_uv() const {
            return get_bit(regdetail::M_VBUS_UV);
        }

        void m_vbus_uv(const bool value) {
            set_bit_n(regdetail::M_VBUS_UV, value);
        }

        bool m_dr_role() const {
            return get_bit(regdetail::M_DR_ROLE);
        }

        void m_dr_role(const bool value) {
            set_bit_n(regdetail::M_DR_ROLE, value);
        }

        bool m_src_alert() const {
            return get_bit(regdetail::M_SRC_ALERT);
        }

        void m_src_alert(const bool value) {
            set_bit_n(regdetail::M_SRC_ALERT, value);
        }

        bool m_frc_fail() const {
            return get_bit(regdetail::M_FRC_FAIL);
        }

        void m_frc_fail(const bool value) {
            set_bit_n(regdetail::M_FRC_FAIL, value);
        }

        bool m_frc_succ() const {
            return get_bit(regdetail::M_FRC_SUCC);
        }

        void m_frc_succ(const bool value) {
            set_bit_n(regdetail::M_FRC_SUCC, value);
        }

        bool m_vdm_msg() const {
            return get_bit(regdetail::M_VDM_MSG);
        }

        void m_vdm_msg(const bool value) {
            set_bit_n(regdetail::M_VDM_MSG, value);
        }
    };
} // husb238a

#endif //MASK1_HPP
