from pathlib import Path
import re

count = len(list(Path(".").rglob("*.cpp")))

with open("README.md", "r", encoding="utf-8") as f:
    text = f.read()

text = re.sub(
    r"Problems Solved: \*\*\d+\*\*",
    f"Problems Solved: **{count}**",
    text
)

with open("README.md", "w", encoding="utf-8") as f:
    f.write(text)