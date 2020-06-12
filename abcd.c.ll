; ModuleID = 'abcd.c'
source_filename = "abcd.c"

@0 = private unnamed_addr constant [10 x i8] c"sddd = %f\00", align 1
@1 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

define i32 @main() {
entry:
  %i = alloca i32, align 4
  store i32 0, i32* %i, align 4
  %d = alloca double, align 8
  store double 1.200000e+00, double* %d, align 8
  br label %con

loop:                                             ; preds = %con
  %0 = load double, double* %d, align 8
  %call = call i32 (...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @0, i32 0, i32 0), double %0)
  %return = call i32 (...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0))
  %1 = load i32, i32* %i, align 4
  %2 = add i32 %1, 1
  store i32 %2, i32* %i, align 4
  %3 = load i32, i32* %i, align 4
  %4 = load double, double* %d, align 8
  %5 = load double, double* %d, align 8
  %6 = fmul double %4, %5
  store double %6, double* %d, align 8
  %7 = load double, double* %d, align 8
  br label %con

con:                                              ; preds = %loop, %entry
  %8 = load i32, i32* %i, align 4
  %less = icmp slt i32 %8, 10
  br i1 %less, label %loop, label %outer

outer:                                            ; preds = %con
  ret i32 0
}

declare i32 @printf(...)
