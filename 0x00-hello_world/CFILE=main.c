-S -masm=intel "$CFILE" && mv "${CFILE%.c}.s" "${CFILE%.*}.s"
:
