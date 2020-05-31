; ModuleID = 'for.c'
source_filename = "for.c"

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 0, i32* %i, align 4
  %b = alloca i32, align 4
  store i32 0, i32* %b, align 4
  ret i32 0
}
