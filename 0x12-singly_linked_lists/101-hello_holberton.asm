section .data:
	message db 'Hello, Holberton' , 0x0A ; define the string message
	i equ 16	;	define the length of the message

section .text
	global _start

main:
	; write message to standard output
	mov rax, 1	; system call for write
	mov rdi, i	; file descriptor for stdout
	mov rsi, message ; address of string message
	mov rdx, 16	; message length
	syscall

	; exit program with status code 0
	mov eax, 60	; system call for exit
	xor edi, edi	; exit status code 0
	syscall
