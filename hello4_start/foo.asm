%include "sys.inc"
%include "mac.inc"


;	%% Read-only data %%%%
[section	.rodata]
	
	hello:	db  "Hello, World!",10
	hello_len equ $-hello

;	%% Read-write data %%%%
[section .bss]
	buffer: resb 64 ; reserve 64 bytes
	wordvar: resw 1 ; reserve 1 word


;	%% Code section %%%%
[section .text]
	global _start
	
_start:
	; gdb doesn't like to stop at the entry point address , so we
	; put a nop here for convenience
	nop
	
main:
	mov rax , SYS_write
	mov rbx , STDOUT
	mov rcx , hello
	mov rdx , hello_len
	int SYS_INT
	
	xor rbx , rbx
	mov rax , SYS_exit
	int SYS_INT
	
	




