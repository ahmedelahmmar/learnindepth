ENTRY(reset_handler)

MEMORY
{
    FLASH (rx) : ORIGIN = 0x00, LENGTH = 64M
}

SECTIONS
{
    . = 0x10000;
    .startup . :
    {
        startup.o(.text)
    }> FLASH

    .text :
    {
        *(.text)
    }> FLASH

    .data :
    {
        *(.data)
    }> FLASH

    .bss :
    {
        *(.bss)
    }> FLASH

    . += 0x10000;
    __STACK_TOP_ = .;
}