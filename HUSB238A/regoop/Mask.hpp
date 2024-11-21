#ifndef MASK_HPP
#define MASK_HPP

namespace husb238a {
    class Mask final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return MASK;
        }

        bool m_flgin() const {
            return get_bit(field::M_FLGIN);
        }

        void m_flgin(const bool value) {
            set_bit_n(field::M_FLGIN, value);
        }

        bool m_orient() const {
            return get_bit(field::M_ORIENT);
        }

        void m_orient(const bool value) {
            set_bit_n(field::M_ORIENT, value);
        }

        bool m_fault() const {
            return get_bit(field::M_FAULT);
        }

        void m_fault(const bool value) {
            set_bit_n(field::M_FAULT, value);
        }

        bool m_vbus_chg() const {
            return get_bit(field::M_VBUS_CHG);
        }

        void m_vbus_chg(const bool value) {
            set_bit_n(field::M_VBUS_CHG, value);
        }

        bool m_vbus_ov() const {
            return get_bit(field::M_VBUS_OV);
        }

        void m_vbus_ov(const bool value) {
            set_bit_n(field::M_VBUS_OV, value);
        }

        bool m_bc_lvl() const {
            return get_bit(field::M_BC_LVL);
        }

        void m_bc_lvl(const bool value) {
            set_bit_n(field::M_BC_LVL, value);
        }

        bool m_detach() const {
            return get_bit(field::M_DETACH);
        }

        void m_detach(const bool value) {
            set_bit_n(field::M_DETACH, value);
        }

        bool m_attach() const {
            return get_bit(field::M_ATTACH);
        }

        void m_attach(const bool value) {
            set_bit_n(field::M_ATTACH, value);
        }
    };
} // husb238a

#endif //MASK_HPP
