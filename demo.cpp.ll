; ModuleID = 'demo.cpp'
source_filename = "demo.cpp"

define i32 @main() {
  %sum = alloca i32, align 4
  store i32 550, i32* %sum, align 4
  %n = alloca i32, align 4
  store i32 12, i32* %n, align 4
  %1 = load i32, i32* %sum, align 4
  %2 = load i32, i32* %n, align 4
  %3 = add i32 %1, %2
  store i32 %3, i32* %sum, align 4
  br label %con

loop:                                             ; preds = %con
  %4 = load i32, i32* %n, align 4
  %5 = sub i32* %n, i32 1
  %6 = load i32, i32* %5, align 4
  store i32* %5, i32* %n, align 8
  br label %outer
  %7 = load i32, i32* %sum, align 4
  %8 = add i32* %sum, %n
  %9 = load i32, i32* %8, align 4
  store i32* %8, i32* %sum, align 8
  br label %con

con:                                              ; preds = %loop, %0
  %10 = load i32, i32* %n, align 4
  %LE = fcmp ole i32 %10, 0
  br i1 %LE, label %loop, label %outer

outer:                                            ; preds = %loop, %con
  %11 = load i32, i32* %sum, align 4
  %12 = load i32, i32* %n, align 4
  %13 = sub i32 %11, %12
  store i32 %13, i32* %sum, align 4
  ret i32 0
}
