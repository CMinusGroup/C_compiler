; ModuleID = 'demo.cpp'
source_filename = "demo.cpp"

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 63, i32* %i, align 4
  ret i32 0
}
