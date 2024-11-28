#ifndef VDMHEADER_HPP
#define VDMHEADER_HPP

namespace husb238a {

    class VDMHeader final : public Register {
    public:

        RegisterAddress get_addr() override {
            return VDM_HEADER;
        }

        uint8_t object_position() const {
            return get_bits(field::OBJECT_POSITION);
        }

        fval::CommandType::T command_type() const {
            return static_cast<fval::CommandType::T>(get_bits(field::COMMAND_TYPE));
        }

        fval::VDMType::T vdm_type() const {
            return static_cast<fval::VDMType::T>(get_bits(field::VDM_TYPE));
        }
    };
} // husb238a

#endif //VDMHEADER_HPP
