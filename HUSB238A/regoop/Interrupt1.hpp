#ifndef INTERRUPT1_HPP
#define INTERRUPT1_HPP

namespace husb238a {
    class Interrupt1 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return INTERRUPT1;
        }

        bool i_flgin() const {
            return get_bit(regdetail::I_FLGIN);
        }

        void i_flgin(const bool value) {
            set_bit_n(regdetail::I_FLGIN, value);
        }

        bool i_orient() const {
            return get_bit(regdetail::I_ORIENT);
        }

        void i_orient(const bool value) {
            set_bit_n(regdetail::I_ORIENT, value);
        }

        bool i_fault() const {
            return get_bit(regdetail::I_FAULT);
        }

        void i_fault(const bool value) {
            set_bit_n(regdetail::I_FAULT, value);
        }

        bool i_vbus_chg() const {
            return get_bit(regdetail::I_VBUS_CHG);
        }

        void i_vbus_chg(const bool value) {
            set_bit_n(regdetail::I_VBUS_CHG, value);
        }

        bool i_vbus_ov() const {
            return get_bit(regdetail::I_VBUS_OV);
        }

        void i_vbus_ov(const bool value) {
            set_bit_n(regdetail::I_VBUS_OV, value);
        }

        bool i_bc_lvl() const {
            return get_bit(regdetail::I_BC_LVL);
        }

        void i_bc_lvl(const bool value) {
            set_bit_n(regdetail::I_BC_LVL, value);
        }

        bool i_detach() const {
            return get_bit(regdetail::I_DETACH);
        }

        void i_detach(const bool value) {
            set_bit_n(regdetail::I_DETACH, value);
        }

        bool i_attach() const {
            return get_bit(regdetail::I_ATTACH);
        }

        void i_attach(const bool value) {
            set_bit_n(regdetail::I_ATTACH, value);
        }
    };
} // husb238a

#endif //INTERRUPT1_HPP
