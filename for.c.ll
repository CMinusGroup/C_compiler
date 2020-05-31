; ModuleID = 'for.c'
source_filename = "for.c"

@0 = private unnamed_addr constant [9 x i8] c"hello,%d\00", align 1
@1 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 0, i32* %i, align 4
  %b = alloca i32, align 4
  store i32 0, i32* %b, align 4
  %0 = load i32, i32* %i, align 4
  %1 = load i32, i32* %b, align 4
  %2 = add i32 %0, %1
  %call = call i32 (...) @printf(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @0, i32 0, i32 0), i32 %2)
  %return = call i32 (...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0))
  ret i32 0
}

declare i32 @printf(...)
