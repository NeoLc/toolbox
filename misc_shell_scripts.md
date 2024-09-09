### 统计代码行数
```sh
#!/bin/bash

# 初始化计数器
total_lines=0

# 定义要统计的文件类型
file_types=("*.h" "*.hpp" "*.py" "*.java" "*.c" "*.cc" "*.cpp" "*.js" "*.html" "*.css")

# 遍历所有定义的文件类型
for file_type in "${file_types[@]}"; do
  # 获取当前文件类型的文件列表
  files=$(find . -type f -name "$file_type")

  # 初始化当前文件类型的行数计数器
  type_lines=0

  # 统计当前文件类型的总行数
  for file in $files; do
    lines=$(wc -l < "$file")
    type_lines=$((type_lines + lines))
  done

  # 输出当前文件类型的总行数
  if [ "$type_lines" -ne 0 ]; then
    echo "$file_type: $type_lines"
  fi

  # 更新总行数计数器
  total_lines=$((total_lines + type_lines))
done

# 输出所有文件的总行数
echo "Total: $total_lines"
```
