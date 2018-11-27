[section .data]
strHello db "Hello, world!",0AH
strLen equ $-strHello
sdd db "                                                          "
sddl equ $-sdd


[section .code]
global _start ; 导出 _start 入口，让链接器识别
_start :
	;mov eax,strHello
	;mov ds,eax
	mov ecx , 3
hwloop:
	;mov eax , sdd
	;mov ss , eax
	push cx
	mov edx , strLen
	mov ecx , strHello
	mov ebx , 1
	mov eax , 4 ; sys_write
	int 80H ; 
	pop cx
	and ecx,0FFFFH
	loop hwloop	
	mov ebx , 0
	mov eax , 1 ; sys_exit
	int 0x80 ;


