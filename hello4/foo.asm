%include "sys.inc"
%include "mac.inc"

;	%% Read-only data %%%%
[section	.rodata]
	
	hello:	db  "Hello, World!",10
	hello_len equ $-hello
	;%strlen hello_len hello
	

;	%% Read-write data %%%%
[section .bss]
	buffer: resb 64 ; reserve 64 bytes
	wordvar: resw 1 ; reserve 1 word

;	%% Code section %%%%
[section .text]
	;global _start
	global main

;_start :
;	nop

main:
	push rbp
	mov rbp,rsp
	push rbx
	
	
	
	mov rax , SYS_write
	mov rbx , STDOUT
	;mov ecx , hello
	mov edx , hello_len
	int SYS_INT
	
	;writefile [file], strpointer, length
	;writefile [file], "hello", 13, 10
	
	
	; return 
	pop rbx
	mov rsp , rbp
	pop rbp
	ret
	
	;mov rax , SYS_exit
	;mov rbx , 0
	;int SYS_INT
	
	




