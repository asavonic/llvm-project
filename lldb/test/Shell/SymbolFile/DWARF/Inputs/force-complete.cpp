//--- main.cpp
class USlateWidgetStyleContainerBase;
class UObject;
void link_fake();

void trigger(USlateWidgetStyleContainerBase *ctl, UObject *obj) {}

int main() {
  link_fake();
  char mem_ctl[1024 * 1024];
  USlateWidgetStyleContainerBase *ctl = (USlateWidgetStyleContainerBase *)&mem_ctl[0];
  char mem_obj[1024 * 1024];
  UObject *obj = (UObject *)&mem_obj[0];

  trigger(ctl, obj);
}
//--- coreuobject.cpp
class UObject {
public:
  virtual void print();
  int object;
};

void UObject::print() {}

void link_uobject() { UObject uo; }
//--- fake.cpp
class USlateWidgetStyleContainerBase {
  int dummy;
};

void link_uobject();

void link_fake() { link_uobject(); }
//--- fake.yaml
--- !ELF
FileHeader:
  Class:           ELFCLASS64
  Data:            ELFDATA2LSB
  Type:            ET_DYN
  Machine:         EM_X86_64
DWARF:
  debug_str:
    - ''
    - 'clang version 16.0.6 (github.com/llvm/llvm-project 7cbf1a2591520c2491aa35339f227775f4d3adf6)'
    - '../Intermediate/Build/Linux/x64/UnrealEditor/Development/SlateCore/Module.SlateCore.1.cpp'
    - '/mnt/horde/++UE5/Sync/Engine/Source'
    - FGenericPlatformTypes
    - uint64
    - unsigned int
    - char16_t
    - FUnixPlatformTypes
    - TCHAR
    - WIDECHAR
    - unsigned long long
    - EClassFlags
    - EClassCastFlags
    - '../Intermediate/Build/Linux/x64/UnrealEditor/Development/SlateCore/Module.SlateCore.3.cpp'
    - bool
    - int
    - __vtbl_ptr_type
    - UObject
    - UClass
    - FSlateWidgetStyle
    - UObjectBase
    - USlateWidgetStyleContainerBase
    - StaticClassFlags
    - _ZN30USlateWidgetStyleContainerBase51StaticRegisterNativesUSlateWidgetStyleContainerBaseEv
    - StaticRegisterNativesUSlateWidgetStyleContainerBase
    - _ZN30USlateWidgetStyleContainerBaseaSEOS_
    - 'operator='
    - _ZN30USlateWidgetStyleContainerBaseaSERKS_
    - _ZN30USlateWidgetStyleContainerBase21GetPrivateStaticClassEv
    - GetPrivateStaticClass
    - _ZN30USlateWidgetStyleContainerBase11StaticClassEv
    - StaticClass
    - _ZN30USlateWidgetStyleContainerBase13StaticPackageEv
    - StaticPackage
    - _ZN30USlateWidgetStyleContainerBase20StaticClassCastFlagsEv
    - StaticClassCastFlags
    - _ZN30USlateWidgetStyleContainerBasenwEm9EInternalP7UObject5FName12EObjectFlags
    - operator new
    - _ZN30USlateWidgetStyleContainerBasenwEmP9EInternal
    - _ZN30USlateWidgetStyleContainerBasedlEPv
    - operator delete
    - _ZNK30USlateWidgetStyleContainerBase11_getUObjectEv
    - _getUObject
    - _ZN30USlateWidgetStyleContainerBase18__VTableCtorCallerER13FVTableHelper
    - __VTableCtorCaller
    - _ZN30USlateWidgetStyleContainerBase20__DefaultConstructorERK18FObjectInitializer
    - __DefaultConstructor
    - '~USlateWidgetStyleContainerBase'
    - _ZNK30USlateWidgetStyleContainerBase8GetStyleEv
    - GetStyle
    - ISlateWidgetStyleContainerInterface
    - '_vptr$ISlateWidgetStyleContainerInterface'
    - '~ISlateWidgetStyleContainerInterface'
    - _ZNK35ISlateWidgetStyleContainerInterface11_getUObjectEv
    - _ZNK35ISlateWidgetStyleContainerInterface8GetStyleEv
    - _ZN30USlateWidgetStyleContainerBaseD2Ev
    - this
  debug_abbrev:
    - ID:              0
      Table:
        - Code:            0x1
          Tag:             DW_TAG_compile_unit
          Children:        DW_CHILDREN_yes
          Attributes:
            - Attribute:       DW_AT_producer
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_language
              Form:            DW_FORM_data2
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_stmt_list
              Form:            DW_FORM_sec_offset
            - Attribute:       DW_AT_comp_dir
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_GNU_pubnames
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_ranges
              Form:            DW_FORM_sec_offset
        - Code:            0x2
          Tag:             DW_TAG_structure_type
          Children:        DW_CHILDREN_yes
          Attributes:
            - Attribute:       DW_AT_calling_convention
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_byte_size
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
        - Code:            0x3
          Tag:             DW_TAG_typedef
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
        - Code:            0x4
          Tag:             DW_TAG_base_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_encoding
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_byte_size
              Form:            DW_FORM_data1
        - Code:            0x5
          Tag:             DW_TAG_typedef
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data2
        - Code:            0x6
          Tag:             DW_TAG_enumeration_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_byte_size
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
        - Code:            0x7
          Tag:             DW_TAG_enumeration_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_byte_size
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data2
        - Code:            0x8
          Tag:             DW_TAG_compile_unit
          Children:        DW_CHILDREN_yes
          Attributes:
            - Attribute:       DW_AT_producer
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_language
              Form:            DW_FORM_data2
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_stmt_list
              Form:            DW_FORM_sec_offset
            - Attribute:       DW_AT_comp_dir
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_GNU_pubnames
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_low_pc
              Form:            DW_FORM_addr
            - Attribute:       DW_AT_ranges
              Form:            DW_FORM_sec_offset
        - Code:            0x9
          Tag:             DW_TAG_pointer_type
          Children:        DW_CHILDREN_no
        - Code:            0xA
          Tag:             DW_TAG_pointer_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
        - Code:            0xB
          Tag:             DW_TAG_const_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
        - Code:            0xC
          Tag:             DW_TAG_pointer_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
        - Code:            0xD
          Tag:             DW_TAG_subroutine_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
        - Code:            0xE
          Tag:             DW_TAG_class_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
        - Code:            0xF
          Tag:             DW_TAG_structure_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_containing_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_calling_convention
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_byte_size
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
        - Code:            0x10
          Tag:             DW_TAG_class_type
          Children:        DW_CHILDREN_yes
          Attributes:
            - Attribute:       DW_AT_containing_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_calling_convention
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_byte_size
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
        - Code:            0x11
          Tag:             DW_TAG_inheritance
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_data_member_location
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
        - Code:            0x12
          Tag:             DW_TAG_member
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_const_value
              Form:            DW_FORM_udata
        - Code:            0x13
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_linkage_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
        - Code:            0x14
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_linkage_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
        - Code:            0x15
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_linkage_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
        - Code:            0x16
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_linkage_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
        - Code:            0x17
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_linkage_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_virtuality
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_vtable_elem_location
              Form:            DW_FORM_exprloc
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_containing_type
              Form:            DW_FORM_ref_addr
        - Code:            0x18
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
        - Code:            0x19
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
        - Code:            0x1A
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_virtuality
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_vtable_elem_location
              Form:            DW_FORM_exprloc
            - Attribute:       DW_AT_declaration
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_external
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_accessibility
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_containing_type
              Form:            DW_FORM_ref_addr
        - Code:            0x1B
          Tag:             DW_TAG_member
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_data_member_location
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_artificial
              Form:            DW_FORM_flag_present
        - Code:            0x1C
          Tag:             DW_TAG_reference_type
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
        - Code:            0x1D
          Tag:             DW_TAG_subprogram
          Children:        DW_CHILDREN_yes
          Attributes:
            - Attribute:       DW_AT_low_pc
              Form:            DW_FORM_addr
            - Attribute:       DW_AT_high_pc
              Form:            DW_FORM_data4
            - Attribute:       DW_AT_frame_base
              Form:            DW_FORM_exprloc
            - Attribute:       DW_AT_object_pointer
              Form:            DW_FORM_ref4
            - Attribute:       DW_AT_GNU_all_call_sites
              Form:            DW_FORM_flag_present
            - Attribute:       DW_AT_decl_file
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_decl_line
              Form:            DW_FORM_data1
            - Attribute:       DW_AT_linkage_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_specification
              Form:            DW_FORM_ref_addr
        - Code:            0x1E
          Tag:             DW_TAG_formal_parameter
          Children:        DW_CHILDREN_no
          Attributes:
            - Attribute:       DW_AT_location
              Form:            DW_FORM_exprloc
            - Attribute:       DW_AT_name
              Form:            DW_FORM_strp
            - Attribute:       DW_AT_type
              Form:            DW_FORM_ref_addr
            - Attribute:       DW_AT_artificial
              Form:            DW_FORM_flag_present
  debug_ranges:
    - Offset:          0x0
      AddrSize:        0x8
      Entries:         []
    - Offset:          0x10
      AddrSize:        0x8
      Entries:
        - LowOffset:       0x0
          HighOffset:      0x5
  debug_info:
    - Length:          0x9A
      Version:         4
      AbbrevTableID:   0
      AbbrOffset:      0x0
      AddrSize:        8
      Entries:
        - AbbrCode:        0x1
          Values:
            - Value:           0x1
            - Value:           0x21
            - Value:           0x5E
            - Value:           0x0
            - Value:           0xB8
            - Value:           0x1
            - Value:           0x0
        - AbbrCode:        0x2
          Values:
            - Value:           0x5
            - Value:           0xDC
            - Value:           0x1
            - Value:           0x1
            - Value:           0x20
        - AbbrCode:        0x3
          Values:
            - Value:           0x7D
            - Value:           0xF2
            - Value:           0x1
            - Value:           0x2E
        - AbbrCode:        0x0
        - AbbrCode:        0x4
          Values:
            - Value:           0xF9
            - Value:           0x7
            - Value:           0x4
        - AbbrCode:        0x4
          Values:
            - Value:           0x106
            - Value:           0x10
            - Value:           0x2
        - AbbrCode:        0x2
          Values:
            - Value:           0x5
            - Value:           0x10F
            - Value:           0x1
            - Value:           0x9
            - Value:           0x16
        - AbbrCode:        0x3
          Values:
            - Value:           0x59
            - Value:           0x122
            - Value:           0x9
            - Value:           0x1D
        - AbbrCode:        0x3
          Values:
            - Value:           0x3E
            - Value:           0x128
            - Value:           0x9
            - Value:           0x1C
        - AbbrCode:        0x0
        - AbbrCode:        0x5
          Values:
            - Value:           0x4E
            - Value:           0x122
            - Value:           0x2
            - Value:           0x3C3
        - AbbrCode:        0x5
          Values:
            - Value:           0x2B
            - Value:           0xF2
            - Value:           0x2
            - Value:           0x3B1
        - AbbrCode:        0x4
          Values:
            - Value:           0x131
            - Value:           0x7
            - Value:           0x8
        - AbbrCode:        0x6
          Values:
            - Value:           0x37
            - Value:           0x144
            - Value:           0x4
            - Value:           0x28
            - Value:           0xBA
        - AbbrCode:        0x7
          Values:
            - Value:           0x71
            - Value:           0x150
            - Value:           0x8
            - Value:           0x28
            - Value:           0x13D
        - AbbrCode:        0x0
    - Length:          0x253
      Version:         4
      AbbrevTableID:   0
      AbbrOffset:      0x0
      AddrSize:        8
      Entries:
        - AbbrCode:        0x8
          Values:
            - Value:           0x1
            - Value:           0x21
            - Value:           0x160
            - Value:           0x2024
            - Value:           0xB8
            - Value:           0x1
            - Value:           0x395E50
            - Value:           0x10
        - AbbrCode:        0x4
          Values:
            - Value:           0x1BA
            - Value:           0x2
            - Value:           0x1
        - AbbrCode:        0x4
          Values:
            - Value:           0x1BF
            - Value:           0x5
            - Value:           0x4
        - AbbrCode:        0x9
        - AbbrCode:        0xA
          Values:
            - Value:           0xDC
        - AbbrCode:        0xB
          Values:
            - Value:           0x65
        - AbbrCode:        0xA
          Values:
            - Value:           0xE6
        - AbbrCode:        0xC
          Values:
            - Value:           0xEF
            - Value:           0x1C3
        - AbbrCode:        0xD
          Values:
            - Value:           0xCF
        - AbbrCode:        0xA
          Values:
            - Value:           0xF9
        - AbbrCode:        0xE
          Values:
            - Value:           0x1D3
            - Value:           0x1
        - AbbrCode:        0xA
          Values:
            - Value:           0x103
        - AbbrCode:        0xE
          Values:
            - Value:           0x1DB
            - Value:           0x1
        - AbbrCode:        0xA
          Values:
            - Value:           0x10D
        - AbbrCode:        0xB
          Values:
            - Value:           0x112
        - AbbrCode:        0xF
          Values:
            - Value:           0x112
            - Value:           0x4
            - Value:           0x1E2
            - Value:           0x8
            - Value:           0x6D
            - Value:           0xF
        - AbbrCode:        0xB
          Values:
            - Value:           0x84
        - AbbrCode:        0xE
          Values:
            - Value:           0x1F4
            - Value:           0x1
        - AbbrCode:        0xA
          Values:
            - Value:           0x12E
        - AbbrCode:        0x10
          Values:
            - Value:           0x124
            - Value:           0x4
            - Value:           0x200
            - Value:           0x38
            - Value:           0x82
            - Value:           0x14
        - AbbrCode:        0x11
          Values:
            - Value:           0xF9
            - Value:           0x0
            - Value:           0x1
        - AbbrCode:        0x11
          Values:
            - Value:           0x269
            - Value:           0x30
            - Value:           0x1
        - AbbrCode:        0x12
          Values:
            - Value:           0x21F
            - Value:           0x11F
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
            - Value:           0x10000000
        - AbbrCode:        0x13
          Values:
            - Value:           0x230
            - Value:           0x28B
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x14
          Values:
            - Value:           0x2BF
            - Value:           0x2E9
            - Value:           0x82
            - Value:           0x16
            - Value:           0x2C6
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x14
          Values:
            - Value:           0x2F3
            - Value:           0x2E9
            - Value:           0x82
            - Value:           0x16
            - Value:           0x2C6
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x14
          Values:
            - Value:           0x31E
            - Value:           0x35B
            - Value:           0x82
            - Value:           0x16
            - Value:           0xFE
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x15
          Values:
            - Value:           0x371
            - Value:           0x3A4
            - Value:           0x82
            - Value:           0x16
            - Value:           0xFE
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x15
          Values:
            - Value:           0x3B0
            - Value:           0x3E5
            - Value:           0x82
            - Value:           0x16
            - Value:           0xD7
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x15
          Values:
            - Value:           0x3F3
            - Value:           0x42F
            - Value:           0x82
            - Value:           0x16
            - Value:           0x90
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x15
          Values:
            - Value:           0x444
            - Value:           0x493
            - Value:           0x82
            - Value:           0x16
            - Value:           0xD6
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x15
          Values:
            - Value:           0x4A0
            - Value:           0x493
            - Value:           0x82
            - Value:           0x16
            - Value:           0xD6
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x16
          Values:
            - Value:           0x4D3
            - Value:           0x4FC
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x17
          Values:
            - Value:           0x50C
            - Value:           0x540
            - Value:           0x82
            - Value:           0x16
            - Value:           0xF4
            - Value:           0x1
            - Value:           0x2
              BlockData:       [ 0x10, 0x79 ]
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
            - Value:           0x12E
        - AbbrCode:        0x18
          Values:
            - Value:           0x200
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x19
          Values:
            - Value:           0x200
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x19
          Values:
            - Value:           0x200
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x18
          Values:
            - Value:           0x200
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x15
          Values:
            - Value:           0x54C
            - Value:           0x595
            - Value:           0x82
            - Value:           0x16
            - Value:           0xF4
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x16
          Values:
            - Value:           0x5A8
            - Value:           0x5F9
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
        - AbbrCode:        0x1A
          Values:
            - Value:           0x60E
            - Value:           0x82
            - Value:           0x16
            - Value:           0x1
            - Value:           0x2
              BlockData:       [ 0x10, 0x0 ]
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
            - Value:           0x12E
        - AbbrCode:        0x17
          Values:
            - Value:           0x62E
            - Value:           0x65E
            - Value:           0x82
            - Value:           0x1A
            - Value:           0x2C1
            - Value:           0x1
            - Value:           0x2
              BlockData:       [ 0x10, 0x7A ]
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
            - Value:           0x12E
        - AbbrCode:        0x0
        - AbbrCode:        0x10
          Values:
            - Value:           0x269
            - Value:           0x4
            - Value:           0x667
            - Value:           0x8
            - Value:           0xF3
            - Value:           0x14
        - AbbrCode:        0x1B
          Values:
            - Value:           0x68B
            - Value:           0xE1
            - Value:           0x0
            - Value:           0x1
        - AbbrCode:        0x1A
          Values:
            - Value:           0x6B5
            - Value:           0xF3
            - Value:           0x16
            - Value:           0x1
            - Value:           0x2
              BlockData:       [ 0x10, 0x0 ]
            - Value:           0x1
            - Value:           0x1
            - Value:           0x2
            - Value:           0x269
        - AbbrCode:        0x17
          Values:
            - Value:           0x6DA
            - Value:           0x540
            - Value:           0xF3
            - Value:           0x16
            - Value:           0xF4
            - Value:           0x1
            - Value:           0x2
              BlockData:       [ 0x10, 0x2 ]
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
            - Value:           0x269
        - AbbrCode:        0x17
          Values:
            - Value:           0x713
            - Value:           0x65E
            - Value:           0xF3
            - Value:           0x1A
            - Value:           0x2C1
            - Value:           0x2
            - Value:           0x2
              BlockData:       [ 0x10, 0x3 ]
            - Value:           0x1
            - Value:           0x1
            - Value:           0x1
            - Value:           0x269
        - AbbrCode:        0x0
        - AbbrCode:        0xB
          Values:
            - Value:           0x108
        - AbbrCode:        0x1C
          Values:
            - Value:           0x12E
        - AbbrCode:        0x1D
          Values:
            - Value:           0x395E50
            - Value:           0x5
            - Value:           0x1
              BlockData:       [ 0x57 ]
            - Value:           0x24A
            - Value:           0x1
            - Value:           0x81
            - Value:           0x56
            - Value:           0x748
            - Value:           0x240
        - AbbrCode:        0x1E
          Values:
            - Value:           0x1
              BlockData:       [ 0x55 ]
            - Value:           0x770
            - Value:           0x129
            - Value:           0x1
        - AbbrCode:        0x0
        - AbbrCode:        0x0
...
