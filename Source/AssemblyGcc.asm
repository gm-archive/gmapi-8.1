.globl _gmpaiAsmHookFunction
.globl _gmapiAsmGetShared
.globl _gmapiAsmHookReturn

_gmpaiAsmHookFunction:
push %eax
push %ecx
push %edx

push %eax
push %edx
call (_gmapiAsmGetShared)
pop %edx
movl %edx, (8)(%eax)
pop %edx
movl %edx, (4)(%eax)


pop %edx
pop %ecx
pop %eax

push %ebp
movl %esp, %ebp
add $0xFFFFFE64, %esp
jmp (_gmapiAsmHookReturn)
