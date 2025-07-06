.global reset_handler

reset_handler:
    ldr sp, =__STACK_TOP_
    bl main

loop: b loop
