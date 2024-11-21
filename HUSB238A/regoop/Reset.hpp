#ifndef RESET_HPP
#define RESET_HPP

namespace husb238a {
    class Reset final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return RESET;
        }

        void sw_res(const bool value) {
            _val = value;
        }
    };
} // husb238a

#endif //RESET_HPP
