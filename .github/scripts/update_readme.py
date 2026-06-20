import os
import re

# Directories to scan and their human-readable names
OJ_DIRS = {
    "300baicodethieunhi": "300 Bài Code Thiếu Nhi",
    "codeforces": "Codeforces",
    "codingbat": "CodingBat",
    "cses": "CSES",
    "leetcode": "LeetCode",
    "lqdoj": "LQDOJ",
    "luogu.com.cn": "Luogu",
    "luyencode": "LuyenCode",
    "marisaoj": "Marisa OJ",
    "uteoj": "UTE OJ",
    "vnoi": "VNOI",
}

# Supported programming language extensions for solutions
EXTENSIONS = {
    ".cpp", ".cc", ".cxx", ".c", ".py", ".java", ".sql", ".sh", ".pas", ".go", ".rs", ".js", ".ts", ".kt"
}

def count_solutions(directory):
    count = 0
    if not os.path.exists(directory):
        return 0
    for root, dirs, files in os.walk(directory):
        # Exclude hidden directories starting with '.' (like .cph, .git, etc.)
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        for file in files:
            if file.startswith('.'):
                continue
            ext = os.path.splitext(file)[1].lower()
            if ext in EXTENSIONS:
                count += 1
    return count

def generate_stats_markdown():
    stats = []
    total = 0
    for key, name in OJ_DIRS.items():
        count = count_solutions(key)
        if count > 0 or os.path.exists(key): # Include if directory exists
            stats.append((name, count))
            total += count
            
    # Sort by solved count descending
    stats.sort(key=lambda x: x[1], reverse=True)
    
    lines = [
        "| Platform | Solved |",
        "| :--- | :---: |"
    ]
    for name, count in stats:
        lines.append(f"| {name} | {count} |")
    lines.append(f"| **Total** | **{total}** |")
    
    return "\n".join(lines)

def main():
    readme_path = "README.md"
    if not os.path.exists(readme_path):
        with open(readme_path, "w", encoding="utf-8") as f:
            f.write("# Solutions\n\n<!-- STATS_START -->\n<!-- STATS_END -->\n")
            
    with open(readme_path, "r", encoding="utf-8") as f:
        content = f.read()
        
    stats_md = generate_stats_markdown()
    
    # Replace content between STATS_START and STATS_END
    pattern = r"(<!-- STATS_START -->).*?(<!-- STATS_END -->)"
    replacement = f"\\1\n{stats_md}\n\\2"
    
    new_content, count = re.subn(pattern, replacement, content, flags=re.DOTALL)
    
    if count == 0:
        # If placeholders are not found, append them
        new_content = content + f"\n\n<!-- STATS_START -->\n{stats_md}\n<!-- STATS_END -->\n"
        
    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(new_content)
        
    print("README.md updated successfully with stats!")

if __name__ == "__main__":
    main()
