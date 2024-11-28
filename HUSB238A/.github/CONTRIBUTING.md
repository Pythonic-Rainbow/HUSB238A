For registers with a single field [X:0]
    no need define getter, just need setter and fieldpos
    if read-only reg, nothing
For registers with a single field [X:!0]
    need define getter and setter and fieldpos
For registers with a single field [0:0]
    just need setter
For register with a single field [7:0]
    nothing

If uses FieldVal, always need getter and setter

TODO: For all from_x in Conversion, verify if argument data type is suitable e.g. used u8 instead of u16?
TODO: Check if Conversion.hpp methods can be simplified by merging