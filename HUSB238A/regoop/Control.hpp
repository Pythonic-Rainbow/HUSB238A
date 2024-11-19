#ifndef CONTROL_HPP
#define CONTROL_HPP

namespace husb238a {
    class Control final : public WRegister {
    public:

        RegisterAddress get_addr() override {
            return CONTROL;
        }

        bool int_mask() const {
            return _val;
        }

        void int_mask(const bool value) {
            _val = value;
        }
    };
} // HUSB238A

#endif //CONTROL_HPP
