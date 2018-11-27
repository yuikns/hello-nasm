%macro writefile 2-3+ 

  %ifstr %2 
        jmp     %%endstr 
    %if %0 = 3 
      %%str:    db      %2,%3 
    %else 
      %%str:    db      %2 
    %endif 
      %%endstr: mov     dx,%%str 
                mov     cx,%%endstr-%%str 
  %else 
                mov     dx,%2 
                mov     cx,%3 
  %endif 
                mov     bx,%1 
                mov     ah,0x40 
                int     0x21 

%endmacro



