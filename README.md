# practice_c

C 语言练习代码仓库，使用 Visual Studio 工程组织，按练习主题逐个添加源文件。

## 环境要求

- Visual Studio 2026（平台工具集 `v145`）
- Windows SDK `10.0`
- 工程同时提供 `Win32` / `x64` 两种平台，`Debug` / `Release` 两种配置

## 目录结构

```text
practice_c/
├── 1_while循环_练习.c          # while 循环练习
├── 2jkdsfj.c                   # 练习文件
├── practice_c.slnx             # 解决方案（新版 slnx 格式）
├── practice_c.vcxproj          # 项目文件
├── practice_c.vcxproj.filters  # 筛选器
└── .gitignore
```

## 构建与运行

在 Visual Studio 中双击 `practice_c.slnx` 打开解决方案，选择配置（如 `Debug | x64`）后按 `Ctrl + F5` 编译并运行。

命令行构建：

```bash
msbuild practice_c.slnx /p:Configuration=Debug /p:Platform=x64
```

单独编译某个源文件：

```bash
cl /W3 /Fe:main.exe 1_while循环_练习.c
```

或使用 GCC / Clang：

```bash
gcc -Wall -Wextra -o main.exe 1_while循环_练习.c
```

## 新增练习

1. 在仓库根目录创建新的 `.c` 文件，建议以练习主题命名，例如 `3_for循环_练习.c`。
2. 在 Visual Studio 中右键项目 → 添加 → 现有项，把新文件加入项目（未加入项目的文件不会参与编译）。
3. 编译运行验证后再提交。

## 提交代码

```bash
git add .
git commit -m "feat: 添加 for 循环练习"
git push
```

构建产物（`.vs/`、`x64/`、`Debug/`、`*.exe`、`*.obj` 等）已由 `.gitignore` 忽略，不会提交到仓库。
