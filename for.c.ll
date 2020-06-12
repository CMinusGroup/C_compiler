; ModuleID = 'for.c'
source_filename = "for.c"

@0 = private unnamed_addr constant [7 x i8] c"i = %d\00", align 1
@1 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 -30, i32* %i, align 4
  br label %con

loop:                                             ; preds = %con
  %0 = load i32, i32* %i, align 4
  %call = call i32 (...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @0, i32 0, i32 0), i32 %0)
  %return = call i32 (...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0))
  %1 = load i32, i32* %i, align 4
  %2 = add i32 %1, 10
  store i32 %2, i32* %i, align 4
  %3 = load i32, i32* %i, align 4
  br label %con

con:                                              ; preds = %loop, %entry
  %4 = load i32, i32* %i, align 4
  %less = icmp slt i32 %4, 180
  br i1 %less, label %loop, label %outer

outer:                                            ; preds = %con
  ret i32 0
}

declare i32 @printf(...)
