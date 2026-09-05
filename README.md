# cpp

I like code c++ 0 to 1

# docs

```anscii

myproject/
├── CMakeLists.txt
├── CMakePresets.json
├── cmake/              # 自定义 Find 模块、警告/sanitizer
├── include/myproject/  # 对外公开头文件（会安装）
├── src/                # .cpp 和私有头
├── apps/               # 带 main 的可执行程序
├── tests/
├── docs/
└── extern/             # 第三方（submodule）

```

# Commit messages

```bash
ci: 所有与测试相关的更改，以及对 GitHub 工作流等的修改
dev: 开发相关更改，包括对 cursor 或 claude 规则的更新
fix(模块): 修复缺陷/BUG
feat(模块): 新增功能
enh(模块): 功能增强或优化
docs: 文档相关修改
ref(模块): 代码重构
chore: 其他例行维护工作（如 pre-commit 钩子、导包整理等）
```

Generally, the description should focus on the intent of the changes, not the implementation details.

# workflow

```bash
gh pr create --base main --head dev --title "feat: 初始化 CMake 工程并加入 hello world" --body "XXX"
```

