-- 比较两数大小
function max(num1, num2)
   if (num1 > num2) then
      result = num1;
   else
      result = num2;
   end
   return result;
end
-- 调用函数
print("两值比较最大值为 ",max(10,4))
print("两值比较最大值为 ",max(5,6))



-- 将函数作为参数传递给另一个函数
myprint = function(param)     -- 定义格式化打印函数
   print("这是打印函数 -   ##",param,"##")
end

function add(num1,num2,functionPrint)
   result = num1 + num2       -- 定义加法运算
   -- 调用传递的函数参数
   functionPrint(result)
end

myprint(10)                   -- 直接调用打印函数
-- myprint 函数作为参数传递
add(2,5,myprint)              -- 将打印函数作为加法函数的一个参数
