import os

name = input("생성할 폴더와 파일의 이름을 입력하세요: ").strip();

folder_path = os.path.join(os.getcwd(), name)
file_path = os.path.join(folder_path, f"{name}.cpp")

os.makedirs(folder_path, exist_ok=True)

if not os.path.exists(file_path):
    with open(file_path, "w", encoding="utf-8") as f:
        f.write("#include <bits/stdc++.h>\nusing namespace std;\n\nint main(){\n\tcin.tie(0);\n\tios::sync_with_stdio(0);\n}")
        print(f"'{folder_path}' 폴더와 '{file_path}' 파일이 생성되었습니다.")
else:
    print(f"파일 '{file_path}' 이미 존재합니다.")