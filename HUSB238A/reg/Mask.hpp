#ifndef MASK_HPP
#define MASK_HPP

namespace husb238a {
    class Mask : public WRegister {
    public:
        explicit Mask(const uint8_t value) : WRegister(value) {}

        RegisterAddress get_addr() override {
            return MANUAL;
        }

        bool get_m_flgin() const {
            return get_bit(regdetail::M_FLGIN);
        }

        void set_m_flgin(bool value) {
            set_bit_n(regdetail::M_FLGIN, value);
        }

        bool get_m_orient() const {
            return get_bit(regdetail::M_ORIENT);
        }

        void set_m_orient(bool value) {
            set_bit_n(regdetail::M_ORIENT, value);
        }

        bool get_m_fault() const {
            return get_bit(regdetail::M_FAULT);
        }

        void set_m_fault(bool value) {
            set_bit_n(regdetail::M_FAULT, value);
        }

        bool get_m_vbus_chg() const {
            return get_bit(regdetail::M_VBUS_CHG);
        }

        void set_m_vbus_chg(bool value) {
            set_bit_n(regdetail::M_VBUS_CHG, value);
        }

        bool get_m_vbus_ov() const {
            return get_bit(regdetail::M_VBUS_OV);
        }

        void set_m_vbus_ov(bool value) {
            set_bit_n(regdetail::M_VBUS_OV, value);
        }

        bool get_m_bc_lvl() const {
            return get_bit(regdetail::M_BC_LVL);
        }

        void set_m_bc_lvl(bool value) {
            set_bit_n(regdetail::M_BC_LVL, value);
        }

        bool get_m_detach() const {
            return get_bit(regdetail::M_DETACH);
        }

        void set_m_detach(bool value) {
            set_bit_n(regdetail::M_DETACH, value);
        }

        bool get_m_attach() const {
            return get_bit(regdetail::M_ATTACH);
        }

        void set_m_attach(bool value) {
            set_bit_n(regdetail::M_ATTACH, value);
        }
    };
} // husb238a

#endif //MASK_HPP
