

All projects
CodeGym C++
Created by you
·
Private

Thiết kế cho tao bài giảng tiếp theo. Buổi 16



Your chats are private until shared
(Buổi 14, 15) Hàm trong C++
Last message 4 days ago
Thiết kế bài giảng sắp xếp nâng cao
Last message Jun 28
(Buổi 13) Mảng 2
Last message Jun 24
(Buổi 12) Mảng 1
Last message Jun 23
(Buổi 11) Mini Project
Last message Jun 15
(Buổi 9, 10) Vòng lặp
Last message Jun 14
(Buổi 8) Cấu trúc điều kiện 2
Last message Jun 11
(Buổi 5) Tổng quan Git
Last message Jun 11
(Buổi 6) Biến , Kiểu dữ liệu & Toán tử
Last message Jun 11
(Buổi 7) Cấu trúc điều kiện 1
Last message Jun 11
Memory
Only you
Purpose & context Minh Phan is building a complete HTML curriculum for a C++ programming course (CGO-C0526L1-C101, instructor Trần Văn An). The primary deliverable is a series of polished, self-contained HTML lesson files for each session (Buổi), covering the full C++ beginner-to-intermediate arc. Minh appears to function as a teaching assistant or content creator with direct knowledge of what the instructor actually covers in class, which sometimes differs from the original syllabus. Separately, Minh has also been teaching a younger relative programming (C++ and Git/GitHub), acting as an intermediary who learns material from Claude and then teaches it. Current state Sessions completed through Buổi 15, covering: Sessions 6–8: Variables/data types/operators, conditionals (if/else if/else, switch-case, ternary) Sessions 9–10: Loops (for, while, do-while, break, continue, nested loops) Session 11: Mini Project 1 (grade management system) with array theory Session 12: Arrays (advanced techniques, char[], 2D arrays, LED scrolling homework) Session 13: Bubble Sort, Linear Search, Binary Search Sessions 14–15 (merged): Functions Part 1 (basics) and Part 2 (recursion, pass by reference, overloading) Git/GitHub: Standalone lesson for the younger relative covering init, add, commit, push, clone, pull, restore, and branching On the horizon Remaining sessions in the course curriculum beyond Buổi 15 (topics not yet specified) Potential continuation of the Git/GitHub material for the younger relative Key learnings & principles Pedagogy first: Minh explicitly wants students to attempt problems before seeing answers. Code samples go last; pseudocode and leading questions come first. Collapsible "Xem code mẫu" (<details>) elements enforce this sequencing. Syllabus vs. reality: Minh has firsthand knowledge of what was actually taught in class and corrects Claude when the generated content diverges from the instructor's actual delivery. Scaffolding complex topics: For difficult concepts (e.g., Quick Sort recursion, partition function), Minh prefers a staged approach — understand and test components in isolation before combining them. Conceptual over complete: When reviewing algorithms, Minh often prefers a conceptual explanation and then implements independently, asking for help only when stuck. Cross-platform awareness: macOS vs. Windows differences matter (e.g., <unistd.h> vs. <windows.h>, \r overwrite vs. system("clear")). Approach & patterns Communicates informally in Vietnamese (including tao/mày register in some contexts); follow-up questions are short and direct after receiving larger deliverables. Works incrementally: receives a full HTML file, then asks focused clarifying questions about specific lines or concepts rather than requesting full rewrites. Provides targeted correction when Claude misunderstands; expects acknowledgment and a precise fix. Asks Claude to name chat sessions by topic for easy reference. Output files are saved to /mnt/user-data/outputs/ with descriptive Vietnamese filenames. Tools & resources All lesson files use a consistent design system: Catppuccin dark theme, accent color #5c6bc0, JetBrains Mono (code), Sora (prose), syntax-highlighted code blocks, SVG diagrams, trace tables, collapsible hint/answer sections, side-by-side correct/incorrect comparisons. createfile for initial HTML generation; strreplace for targeted fixes (anchored on unique surrounding comment strings to avoid ambiguous matches in long files); view with viewrange for inspection before editing; presentfiles after delivery. SVG best practice: use unique marker IDs per SVG element to prevent cross-element rendering conflicts; verify canvas dimensions accommodate all content.
Last updated 4 days ago
Instructions
gọi tao là cậu chủ, mày xưng tôi, đầy đủ kính ngữ
Files
2% of project capacity used

giao_an_cpp_buoi4_24.md
1,796 lines
MD


Organization has status: incomplete
giao_an_cpp_buoi4_24.md

# GIÁO ÁN KHOÁ HỌC: LẬP TRÌNH VỚI C++
**Lớp:** CGO-C0526L1-C101 | **Instructor:** Trần Văn An  
**Áp dụng từ:** Buổi 4 — Buổi 24
 
---
 
# BUỔI 4 — Pseudo code & Flowchart (T3-L3)
 
## 🎯 Mục tiêu
Học viên hiểu được cách tư duy giải quyết vấn đề **trước khi viết code**: diễn đạt thuật toán bằng ngôn ngữ tự nhiên (pseudo code) và sơ đồ (flowchart).
 
---
 
## 1. Pseudo code là gì?
 
**Pseudo code** = "code giả" — diễn đạt logic bằng tiếng Anh/Việt đơn giản, không cần đúng cú pháp.
 
> Mục đích: Tập trung vào **logic**, không lo cú pháp ngôn ngữ.
 
**Ví dụ:** Tính tổng hai số
 
```
ĐỌC số a
ĐỌC số b
tong = a + b
IN tong
```
 
### 📝 Bài tập 1
Viết pseudo code cho bài toán: **Kiểm tra một số có chia hết cho 3 không.**
 
<details>
<summary>Gợi ý đáp án</summary>
```
ĐỌC số n
NẾU n chia hết cho 3:
    IN "Chia hết cho 3"
NGƯỢC LẠI:
    IN "Không chia hết"
```
</details>
---
 
## 2. Flowchart là gì?
 
Flowchart = sơ đồ luồng, biểu diễn pseudo code bằng **hình ảnh**.
 
| Hình dạng | Ý nghĩa |
|-----------|---------|
| Hình oval | Bắt đầu / Kết thúc |
| Hình chữ nhật | Xử lý (tính toán, gán giá trị) |
| Hình thoi | Điều kiện (Đúng/Sai) |
| Mũi tên | Luồng thực thi |
 
**Công cụ vẽ:** [draw.io](https://draw.io) (miễn phí, online)
 
### 📝 Bài tập 2
Vẽ flowchart cho bài toán tính tổng hai số ở mục 1.
 
---
 
## 3. Kết hợp: Bài toán thực tế
 
**Bài toán:** Học viên đạt >= 5 điểm thì qua môn, dưới 5 thì rớt.
 
**Pseudo code:**
```
ĐỌC điểm d
NẾU d >= 5:
    IN "Đậu"
NGƯỢC LẠI:
    IN "Rớt"
```
 
### 📝 Bài tập 3
Viết pseudo code + vẽ flowchart: **ATM yêu cầu nhập PIN. Nếu đúng → cho rút tiền. Nếu sai → báo lỗi.**
 
---
 
## 🏠 Bài tập về nhà
1. Viết pseudo code + flowchart: Tính chu vi và diện tích hình chữ nhật khi biết chiều dài và chiều rộng.
2. Viết pseudo code + flowchart: Tìm số lớn nhất trong 3 số a, b, c.
3. (Thử thách) Viết pseudo code: Máy bán hàng tự động — nhận tiền, kiểm tra đủ tiền mua sản phẩm, trả tiền thừa.
---
 
# BUỔI 5 — Tổng quan về C++ & GIT (T4-L4)
 
## 🎯 Mục tiêu
Biết C++ là gì, cài được môi trường lập trình, chạy được chương trình đầu tiên. Biết dùng GIT cơ bản để lưu code.
 
---
 
## 1. C++ là gì?
 
- Ra đời năm 1983, phát triển từ ngôn ngữ C
- Dùng để viết: game, phần mềm hệ thống, ứng dụng hiệu năng cao
- **Biên dịch** (compiled): code phải được dịch thành file thực thi trước khi chạy
**Cấu trúc chương trình C++ tối thiểu:**
```cpp
#include <iostream>
using namespace std;
 
int main() {
    cout << "Hello World!" << endl;
    return 0;
}
```
 
Giải thích từng dòng:
- `#include <iostream>` — nạp thư viện nhập/xuất
- `using namespace std;` — dùng không gian tên chuẩn (để gõ `cout` thay vì `std::cout`)
- `int main()` — hàm chính, chương trình bắt đầu từ đây
- `cout << ...` — in ra màn hình
- `return 0;` — kết thúc thành công
### 📝 Bài tập 1
Chạy chương trình trên. Sau đó sửa để in tên của bạn: `"Xin chào, tôi là [tên]!"`
 
---
 
## 2. Cài đặt môi trường
 
**Cách nhanh nhất:** Dùng online compiler — [cpp.sh](https://cpp.sh) hoặc [onlinegdb.com](https://onlinegdb.com)
 
**Cài local (Windows):**
1. Tải VS Code tại [code.visualstudio.com](https://code.visualstudio.com)
2. Cài extension **C/C++** của Microsoft
3. Cài **MinGW** (compiler): [mingw-w64.org](https://www.mingw-w64.org)
---
 
## 3. GIT cơ bản
 
**GIT** = công cụ quản lý phiên bản code — giúp lưu lịch sử, không sợ xoá nhầm.
 
**3 lệnh cần nhớ ngay:**
```bash
git init           # Khởi tạo kho lưu trữ
git add .          # Đánh dấu các file muốn lưu
git commit -m "Mô tả thay đổi"  # Lưu lại
```
 
**Quy trình làm việc:**
```
Viết code → git add . → git commit -m "mô tả" → (lặp lại)
```
 
### 📝 Bài tập 2
1. Tạo folder `bai-tap-cpp`
2. Chạy `git init` trong folder đó
3. Tạo file `hello.cpp`, viết chương trình Hello World
4. Commit với message `"Buoi 5: Hello World"`
---
 
## 🏠 Bài tập về nhà
1. Viết chương trình in ra bảng cửu chương của số 5 (dùng `cout` cho từng dòng — chưa cần vòng lặp).
2. Tạo tài khoản [GitHub](https://github.com), tạo repository `cpp-practice`, push code lên.
3. Đọc thêm: lệnh `git log`, `git status` dùng để làm gì?
---
 
# BUỔI 6 — Biến, Kiểu dữ liệu và Toán tử (T5-L5)
 
## 🎯 Mục tiêu
Hiểu biến là gì, các kiểu dữ liệu cơ bản, cách nhập/xuất dữ liệu, và các phép toán.
 
---
 
## 1. Biến (Variable)
 
**Biến** = ô nhớ có tên, dùng để lưu giá trị.
 
```cpp
int tuoi = 20;        // Số nguyên
double diem = 8.5;    // Số thực
char kyTu = 'A';      // Ký tự
bool daToiNgay = true; // Đúng/Sai
string ten = "Nam";   // Chuỗi (cần #include <string>)
```
 
**Quy tắc đặt tên biến:**
- Bắt đầu bằng chữ hoặc `_` (không bắt đầu bằng số)
- Không dùng khoảng trắng, không dùng từ khóa (`int`, `if`, ...)
- Nên đặt tên có nghĩa: `diem` thay vì `x`
### 📝 Bài tập 1
Khai báo các biến lưu thông tin cá nhân: họ tên, tuổi, điểm GPA, đã tốt nghiệp chưa. In ra màn hình.
 
---
 
## 2. Kiểu dữ liệu
 
| Kiểu | Ý nghĩa | Ví dụ |
|------|---------|-------|
| `int` | Số nguyên | -100, 0, 42 |
| `double` | Số thực | 3.14, -2.5 |
| `float` | Số thực (ít chính xác hơn double) | 3.14f |
| `char` | Một ký tự | 'A', '9' |
| `bool` | Đúng/Sai | true, false |
| `string` | Chuỗi ký tự | "Hello" |
 
---
 
## 3. Nhập liệu từ bàn phím
 
```cpp
#include <iostream>
using namespace std;
 
int main() {
    int tuoi;
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cout << "Ban " << tuoi << " tuoi." << endl;
    return 0;
}
```
 
### 📝 Bài tập 2
Viết chương trình nhập vào chiều dài và chiều rộng hình chữ nhật, tính và in ra diện tích.
 
---
 
## 4. Toán tử
 
**Toán tử số học:**
```cpp
int a = 10, b = 3;
cout << a + b;   // 13
cout << a - b;   // 7
cout << a * b;   // 30
cout << a / b;   // 3 (chia nguyên!)
cout << a % b;   // 1 (phần dư)
```
 
> ⚠️ `10 / 3 = 3` (không phải 3.33). Muốn số thực: `(double)10 / 3`
 
**Toán tử gán rút gọn:**
```cpp
a += 5;  // a = a + 5
a -= 2;  // a = a - 2
a *= 3;  // a = a * 3
a++;     // a = a + 1
a--;     // a = a - 1
```
 
**Toán tử so sánh** (kết quả là true/false):
```cpp
a == b   // bằng
a != b   // khác
a > b    // lớn hơn
a >= b   // lớn hơn hoặc bằng
```
 
**Toán tử logic:**
```cpp
(a > 0) && (b > 0)  // Và — cả hai đúng
(a > 0) || (b > 0)  // Hoặc — ít nhất một đúng
!(a > 0)            // Phủ định
```
 
### 📝 Bài tập 3
Viết chương trình: nhập vào giá tiền và số lượng sản phẩm, tính tổng tiền. Nếu mua từ 5 sản phẩm trở lên thì giảm 10%. In ra tổng tiền phải trả.
 
---
 
## 🏠 Bài tập về nhà
1. Viết chương trình nhập vào số giây, chuyển đổi sang giờ/phút/giây (dùng `/` và `%`).
2. Viết chương trình nhập vào điểm 3 môn học, tính điểm trung bình, in ra kết quả.
3. Giải thích: tại sao `int x = 5 / 2` cho kết quả là `2`? Làm thế nào để được `2.5`?
---
 
# BUỔI 7 — Cấu trúc điều kiện 1 (T6-L6)
 
## 🎯 Mục tiêu
Viết chương trình có thể đưa ra quyết định dựa trên điều kiện, dùng `if`, `else if`, `else`.
 
---
 
## 1. Câu lệnh `if`
 
```cpp
if (điều_kiện) {
    // Chạy nếu điều kiện ĐÚNG
}
```
 
```cpp
int diem = 7;
if (diem >= 5) {
    cout << "Đậu môn!" << endl;
}
```
 
---
 
## 2. `if - else`
 
```cpp
if (điều_kiện) {
    // Đúng
} else {
    // Sai
}
```
 
### 📝 Bài tập 1
Nhập vào một số nguyên, kiểm tra số đó là **chẵn hay lẻ**. In kết quả ra màn hình.
 
---
 
## 3. `if - else if - else`
 
Dùng khi có **nhiều trường hợp**:
 
```cpp
int diem = 75;
if (diem >= 90) {
    cout << "Loại A" << endl;
} else if (diem >= 70) {
    cout << "Loại B" << endl;
} else if (diem >= 50) {
    cout << "Loại C" << endl;
} else {
    cout << "Trượt" << endl;
}
```
 
### 📝 Bài tập 2
Viết chương trình nhập vào tháng (1-12), in ra tháng đó có bao nhiêu ngày (giả sử không phải năm nhuận). Chú ý: tháng 2 có 28 ngày.
 
---
 
## 4. `if` lồng nhau (Nested if)
 
```cpp
int tuoi = 20;
bool coThe = true;
 
if (tuoi >= 18) {
    if (coThe) {
        cout << "Được thi bằng lái" << endl;
    } else {
        cout << "Cần có thẻ" << endl;
    }
} else {
    cout << "Chưa đủ tuổi" << endl;
}
```
 
### 📝 Bài tập 3
Viết chương trình: nhập vào 3 số a, b, c. Tìm và in ra số **lớn nhất**.
 
---
 
## 🏠 Bài tập về nhà
1. Viết máy tính đơn giản: nhập 2 số và phép toán (+, -, *, /), in kết quả. Xử lý trường hợp chia cho 0.
2. Viết chương trình phân loại BMI: nhập chiều cao (m) và cân nặng (kg), tính BMI = cân nặng / (chiều cao²), phân loại: <18.5 (Gầy), 18.5–24.9 (Bình thường), 25–29.9 (Thừa cân), ≥30 (Béo phì).
3. (Thử thách) Kiểm tra năm nhuận: năm chia hết cho 400, hoặc chia hết cho 4 nhưng không chia hết cho 100.
---
 
# BUỔI 8 — Cấu trúc điều kiện 2 (T7-L7)
 
## 🎯 Mục tiêu
Nắm vững `switch-case` và toán tử ba ngôi. Biết khi nào dùng `switch` thay `if-else`.
 
---
 
## 1. Câu lệnh `switch - case`
 
Dùng khi kiểm tra **một biến** với **nhiều giá trị cụ thể**:
 
```cpp
int ngay = 3;  // 1=Thứ 2, 2=Thứ 3, ...
 
switch (ngay) {
    case 1:
        cout << "Thứ Hai" << endl;
        break;
    case 2:
        cout << "Thứ Ba" << endl;
        break;
    case 3:
        cout << "Thứ Tư" << endl;
        break;
    default:
        cout << "Không hợp lệ" << endl;
}
```
 
> ⚠️ **Đừng quên `break`!** Nếu thiếu, chương trình "rơi xuống" case tiếp theo.
 
### 📝 Bài tập 1
Viết chương trình: nhập vào số từ 1-7 đại diện cho thứ trong tuần, in ra tên thứ đó (Thứ Hai, ..., Chủ Nhật).
 
---
 
## 2. Gộp nhiều case
 
```cpp
char loai = 'A';
switch (loai) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Nguyên âm" << endl;
        break;
    default:
        cout << "Phụ âm" << endl;
}
```
 
### 📝 Bài tập 2
Nhập vào tên tháng bằng số (1-12). Dùng `switch` để in ra quý tương ứng:
- Quý 1: tháng 1, 2, 3
- Quý 2: tháng 4, 5, 6
- Quý 3: tháng 7, 8, 9
- Quý 4: tháng 10, 11, 12
---
 
## 3. Toán tử ba ngôi (Ternary Operator)
 
Rút gọn `if-else` đơn giản:
 
```cpp
// Cách dài
int a = 10, b = 20, max;
if (a > b) max = a;
else max = b;
 
// Cách ngắn với toán tử ba ngôi
int max = (a > b) ? a : b;
```
 
Cú pháp: `điều_kiện ? giá_trị_nếu_đúng : giá_trị_nếu_sai`
 
### 📝 Bài tập 3
Dùng toán tử ba ngôi: nhập vào điểm số, in ra "Đậu" nếu >= 5, "Rớt" nếu < 5.
 
---
 
## 4. So sánh: khi nào dùng `if`, khi nào dùng `switch`?
 
| Tình huống | Nên dùng |
|-----------|---------|
| Kiểm tra khoảng (>= 90, >= 70...) | `if-else` |
| Kiểm tra giá trị cụ thể (1, 2, 3...) | `switch` |
| Điều kiện phức tạp (&&, \|\|) | `if-else` |
| Menu lựa chọn | `switch` |
 
---
 
## 🏠 Bài tập về nhà
1. Viết chương trình menu: hiển thị 4 lựa chọn (Cộng, Trừ, Nhân, Chia), nhập 2 số và lựa chọn, in kết quả — dùng `switch`.
2. Viết chương trình: nhập điểm (0-100), xếp loại: A (90-100), B (80-89), C (70-79), D (60-69), F (<60) — dùng `switch` với kỹ thuật `diem / 10`.
3. Dùng toán tử ba ngôi: in ra giá trị tuyệt đối của một số nhập vào.
---
 
# BUỔI 9 — Vòng lặp 1 (T8-L8)
 
## 🎯 Mục tiêu
Hiểu tại sao cần vòng lặp. Viết được chương trình dùng `for` và `while`.
 
---
 
## 1. Tại sao cần vòng lặp?
 
Không có vòng lặp — in bảng 9 cần 9 lệnh `cout`.  
Có vòng lặp — chỉ cần ~3 dòng:
 
```cpp
for (int i = 1; i <= 9; i++) {
    cout << "9 x " << i << " = " << 9 * i << endl;
}
```
 
---
 
## 2. Vòng lặp `for`
 
```cpp
for (khởi_tạo; điều_kiện; cập_nhật) {
    // Thân vòng lặp
}
```
 
**Ví dụ — đếm từ 1 đến 5:**
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
// Kết quả: 1 2 3 4 5
```
 
**Đếm ngược:**
```cpp
for (int i = 5; i >= 1; i--) {
    cout << i << " ";
}
// Kết quả: 5 4 3 2 1
```
 
### 📝 Bài tập 1
Dùng vòng lặp `for`: in ra tổng các số từ 1 đến 100.
 
### 📝 Bài tập 2
In ra bảng cửu chương của số bất kỳ do người dùng nhập vào.
 
---
 
## 3. Vòng lặp `while`
 
```cpp
while (điều_kiện) {
    // Chạy khi điều kiện còn ĐÚNG
}
```
 
**Ví dụ — đoán số:**
```cpp
int bimAt = 7, doan;
cout << "Doan so tu 1-10: ";
cin >> doan;
while (doan != bimAt) {
    cout << "Sai! Doan lai: ";
    cin >> doan;
}
cout << "Dung roi!" << endl;
```
 
> 💡 Dùng `while` khi **không biết trước số lần lặp**.  
> Dùng `for` khi **biết trước số lần lặp**.
 
### 📝 Bài tập 3
Viết chương trình: nhập liên tục các số nguyên dương, dừng khi nhập 0. In ra tổng và trung bình các số đã nhập.
 
---
 
## 🏠 Bài tập về nhà
1. In ra tất cả số chẵn từ 1 đến 100 bằng `for`.
2. Tính n! (giai thừa) với n nhập từ bàn phím. Ví dụ: 5! = 1×2×3×4×5 = 120.
3. In hình tam giác sao: nhập n, in ra n dòng với dòng i có i dấu `*`.
   ```
   *
   **
   ***
   ****
   ```
 
---
 
# BUỔI 10 — Vòng lặp 2 (T9-L9) *(Retros lớp)*
 
## 🎯 Mục tiêu
Nắm vững `do-while`, `break`, `continue`, vòng lặp lồng nhau. Nhìn lại tiến độ học qua Retros.
 
---
 
## 1. Vòng lặp `do-while`
 
Khác `while`: chạy ít nhất **1 lần** dù điều kiện sai ngay từ đầu.
 
```cpp
int luaChon;
do {
    cout << "1. Choi game\n2. Thoat\nChon: ";
    cin >> luaChon;
} while (luaChon != 2);
cout << "Da thoat." << endl;
```
 
> Dùng khi cần **hiển thị menu** ít nhất một lần.
 
### 📝 Bài tập 1
Viết chương trình ATM đơn giản: hiển thị menu (Kiểm tra số dư / Rút tiền / Thoát) và lặp lại cho đến khi chọn Thoát.
 
---
 
## 2. `break` và `continue`
 
- **`break`**: Thoát khỏi vòng lặp ngay lập tức
- **`continue`**: Bỏ qua lần lặp hiện tại, đi đến lần tiếp theo
```cpp
// break - dừng khi gặp số 5
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    cout << i << " ";  // In: 1 2 3 4
}
 
// continue - bỏ qua số lẻ
for (int i = 1; i <= 10; i++) {
    if (i % 2 != 0) continue;
    cout << i << " ";  // In: 2 4 6 8 10
}
```
 
### 📝 Bài tập 2
Dùng `break`: tìm **số nguyên tố đầu tiên** lớn hơn 100.
 
---
 
## 3. Vòng lặp lồng nhau
 
```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << i << "x" << j << "=" << i*j << "\t";
    }
    cout << endl;
}
```
 
### 📝 Bài tập 3
In bảng cửu chương từ 1-9 (dạng bảng đầy đủ 9x9).
 
---
 
## 4. Retros lớp *(15 phút cuối buổi)*
 
Cả lớp cùng trả lời 3 câu:
1. ✅ **Điều gì đang ổn?** (ví dụ: hiểu logic if-else, làm được bài tập)
2. ❓ **Điều gì còn mơ hồ?** (ví dụ: chưa rõ sự khác nhau for vs while)
3. 💡 **Đề xuất cải thiện?**
---
 
## 🏠 Bài tập về nhà
1. In hình kim cương (hình thoi) với n dòng dùng vòng lặp lồng nhau.
2. Kiểm tra số nguyên tố: nhập n, in ra tất cả số nguyên tố từ 2 đến n.
3. (Thử thách) Dãy Fibonacci: in ra n số Fibonacci đầu tiên (0, 1, 1, 2, 3, 5, 8...).
---
 
# BUỔI 11 — Mini Project 1 (T10-L10)
 
## 🎯 Mục tiêu
Ứng dụng tất cả kiến thức đã học (biến, điều kiện, vòng lặp) vào một bài toán thực tế hoàn chỉnh.
 
---
 
## Đề bài: Hệ thống quản lý điểm đơn giản
 
Viết chương trình C++ thực hiện các chức năng sau (dùng menu):
 
```
=== HỆ THỐNG QUẢN LÝ ĐIỂM ===
1. Nhập điểm học sinh (tối đa 10 học sinh)
2. Tính điểm trung bình cả lớp
3. Tìm điểm cao nhất và thấp nhất
4. Đếm số học sinh đậu (>= 5)
5. In danh sách xếp loại (A/B/C/D/F)
0. Thoát
```
 
---
 
## Hướng dẫn từng bước
 
### Bước 1: Khung chương trình
```cpp
#include <iostream>
using namespace std;
 
int main() {
    int luaChon;
    // Khai báo mảng lưu điểm (học viên sẽ học mảng sau — tạm dùng 10 biến)
    double d1, d2, d3, d4, d5;
    int soHocSinh = 0;
 
    do {
        // In menu
        cout << "\n=== MENU ===\n";
        cout << "1. Nhap diem\n2. Tinh TB\n0. Thoat\nChon: ";
        cin >> luaChon;
 
        switch (luaChon) {
            case 1: /* ... */ break;
            case 2: /* ... */ break;
        }
    } while (luaChon != 0);
 
    return 0;
}
```
 
### Bước 2 → 5
Học viên tự điền logic từng chức năng dựa trên kiến thức đã học.
 
---
 
## Tiêu chí đánh giá
 
| Tiêu chí | Điểm |
|---------|------|
| Chạy được, không crash | 30% |
| Các chức năng hoạt động đúng | 40% |
| Code dễ đọc, có comment | 20% |
| Xử lý input sai (nhập âm, > 10...) | 10% |
 
---
 
## 🏠 Hoàn thiện project
- Commit code lên GitHub với message rõ ràng
- Thêm tính năng: tìm và in tên học sinh có điểm cao nhất (thêm biến lưu tên)
- Viết 5 dòng comment giải thích logic quan trọng nhất trong code của bạn
---
 
# BUỔI 12 — Mảng 1 (T11-L11)
 
## 🎯 Mục tiêu
Hiểu mảng là gì, khai báo và truy cập mảng, duyệt mảng với vòng lặp.
 
---
 
## 1. Tại sao cần mảng?
 
Không có mảng: lưu điểm 30 học sinh cần 30 biến `d1, d2, ..., d30`.  
Có mảng: chỉ cần `double diem[30]`.
 
**Mảng** = dãy nhiều giá trị **cùng kiểu**, lưu liên tiếp trong bộ nhớ, truy cập qua **chỉ số (index)**.
 
---
 
## 2. Khai báo và khởi tạo mảng
 
```cpp
// Khai báo
int soNguyen[5];          // Mảng 5 số nguyên (giá trị ngẫu nhiên)
 
// Khai báo + khởi tạo
int a[5] = {10, 20, 30, 40, 50};
 
// Truy cập — CHỈ SỐ BẮT ĐẦU TỪ 0!
cout << a[0];  // 10
cout << a[4];  // 50
a[2] = 99;     // Sửa phần tử thứ 3 thành 99
```
 
> ⚠️ Mảng 5 phần tử: chỉ số từ `0` đến `4`. Truy cập `a[5]` là **lỗi**!
 
### 📝 Bài tập 1
Khai báo mảng 5 số nguyên. Nhập 5 số từ bàn phím. In ra các số theo thứ tự ngược lại.
 
---
 
## 3. Duyệt mảng với `for`
 
```cpp
int diem[5] = {7, 8, 6, 9, 5};
int tong = 0;
 
for (int i = 0; i < 5; i++) {
    tong += diem[i];
}
 
cout << "Tong: " << tong << endl;
cout << "Trung binh: " << (double)tong / 5 << endl;
```
 
### 📝 Bài tập 2
Nhập mảng 10 số nguyên. In ra:
- Tổng
- Giá trị lớn nhất
- Số lượng phần tử âm
---
 
## 4. Mảng 2 chiều (giới thiệu)
 
```cpp
int bang[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
 
// Truy cập: hàng i, cột j
cout << bang[1][2];  // 6
```
 
### 📝 Bài tập 3
Tạo bảng cửu chương dùng mảng 2 chiều `int cuuChuong[9][9]`. Điền giá trị và in ra dạng bảng.
 
---
 
## 🏠 Bài tập về nhà
1. Nhập mảng n phần tử (n nhập từ bàn phím, tối đa 100). Đếm số phần tử chẵn và lẻ.
2. Tìm phần tử **thứ hai lớn nhất** trong mảng.
3. Kiểm tra mảng có phải **palindrome** không (đọc xuôi = đọc ngược: `[1,2,3,2,1]` là palindrome).
---
 
# BUỔI 13 — Mảng 2 (T12-L12)
 
## 🎯 Mục tiêu
Sắp xếp mảng, tìm kiếm trong mảng, truyền mảng vào hàm (chuẩn bị cho bài Hàm).
 
---
 
## 1. Sắp xếp nổi bọt (Bubble Sort)
 
Ý tưởng: So sánh cặp liền kề, hoán đổi nếu sai thứ tự. Lặp nhiều lần cho đến khi sắp xếp xong.
 
```cpp
int a[5] = {5, 3, 8, 1, 9};
int n = 5;
 
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
        if (a[j] > a[j + 1]) {
            // Hoán đổi
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}
// Kết quả: 1 3 5 8 9
```
 
### 📝 Bài tập 1
Nhập mảng 8 số nguyên. Sắp xếp tăng dần và in ra.
 
---
 
## 2. Tìm kiếm tuyến tính (Linear Search)
 
Duyệt từng phần tử, kiểm tra có bằng giá trị cần tìm không:
 
```cpp
int a[5] = {10, 30, 20, 50, 40};
int canTim = 20, viTri = -1;
 
for (int i = 0; i < 5; i++) {
    if (a[i] == canTim) {
        viTri = i;
        break;
    }
}
 
if (viTri != -1)
    cout << "Tim thay tai vi tri: " << viTri << endl;
else
    cout << "Khong tim thay" << endl;
```
 
### 📝 Bài tập 2
Nhập mảng 10 số, nhập giá trị cần tìm. In ra **tất cả** vị trí xuất hiện của giá trị đó.
 
---
 
## 3. Tìm kiếm nhị phân (Binary Search) — mảng đã sắp xếp
 
Ý tưởng: Mỗi bước loại bỏ **một nửa** mảng — nhanh hơn nhiều so với tuyến tính.
 
```cpp
int a[7] = {1, 3, 5, 7, 9, 11, 13};  // Đã sắp xếp!
int canTim = 7;
int trai = 0, phai = 6, giua;
 
while (trai <= phai) {
    giua = (trai + phai) / 2;
    if (a[giua] == canTim) {
        cout << "Tim thay tai: " << giua << endl;
        break;
    } else if (a[giua] < canTim) {
        trai = giua + 1;
    } else {
        phai = giua - 1;
    }
}
```
 
### 📝 Bài tập 3
Nhập mảng đã sắp xếp tăng dần gồm 10 phần tử. Dùng Binary Search tìm giá trị nhập từ bàn phím.
 
---
 
## 🏠 Bài tập về nhà
1. Sắp xếp mảng **giảm dần** bằng Bubble Sort.
2. Cho 2 mảng đã sắp xếp, **gộp** thành 1 mảng sắp xếp mà không dùng hàm sort có sẵn.
3. (Thử thách) Cài đặt **Selection Sort**: ý tưởng — mỗi lần tìm phần tử nhỏ nhất từ vị trí i đến cuối, đặt vào vị trí i.
---
 
# BUỔI 14 — Hàm 1 (T13-L13) *(Thi giữa module)*
 
## 🎯 Mục tiêu
Hiểu tại sao cần hàm, cách khai báo và gọi hàm, tham số và giá trị trả về.
 
> 📌 **Lưu ý:** Buổi này có thi giữa module — Phần lý thuyết/thực hành sẽ rút gọn, dành ~45 phút cuối cho thi.
 
---
 
## 1. Tại sao cần hàm?
 
Không có hàm → code tính diện tích hình tròn lặp lại ở nhiều chỗ.  
Có hàm → viết một lần, gọi nhiều lần.
 
**Hàm** = khối code có tên, thực hiện một nhiệm vụ cụ thể.
 
---
 
## 2. Cấu trúc hàm
 
```cpp
kiểu_trả_về tên_hàm(kiểu tham_số_1, kiểu tham_số_2) {
    // Thân hàm
    return giá_trị;  // Nếu kiểu trả về không phải void
}
```
 
**Ví dụ:**
```cpp
#include <iostream>
using namespace std;
 
// Định nghĩa hàm
int tinhTong(int a, int b) {
    return a + b;
}
 
int main() {
    int kq = tinhTong(5, 3);   // Gọi hàm
    cout << "Tong: " << kq;    // In: Tong: 8
    return 0;
}
```
 
---
 
## 3. Hàm không trả về (`void`)
 
```cpp
void inLoi(string thongBao) {
    cout << "[LOI] " << thongBao << endl;
    // Không cần return
}
 
// Gọi:
inLoi("So am khong hop le");
```
 
### 📝 Bài tập 1
Viết hàm `tinhDienTich(double chieuDai, double chieuRong)` trả về diện tích hình chữ nhật. Gọi hàm trong `main`.
 
### 📝 Bài tập 2
Viết hàm `laNguyenTo(int n)` trả về `true` nếu n là số nguyên tố, `false` nếu không.
 
---
 
## 4. Khai báo trước (Function Declaration / Prototype)
 
```cpp
// Khai báo trước (prototype) — để hàm có thể dùng trước khi định nghĩa
int tinhTong(int a, int b);
 
int main() {
    cout << tinhTong(3, 4);  // Gọi được vì đã khai báo
    return 0;
}
 
// Định nghĩa sau
int tinhTong(int a, int b) {
    return a + b;
}
```
 
---
 
## 🏠 Bài tập về nhà
1. Viết hàm `laChanLe(int n)` in ra "Chan" hoặc "Le".
2. Viết hàm `timMax(int a, int b, int c)` trả về số lớn nhất trong 3 số.
3. Viết hàm `inHinhChuNhat(int chieuRong, int chieuCao)` in ra hình chữ nhật bằng dấu `*`.
---
 
# BUỔI 15 — Hàm 2 (T14-L14)
 
## 🎯 Mục tiêu
Hiểu đệ quy, truyền tham số bằng tham chiếu, hàm overloading.
 
---
 
## 1. Đệ quy (Recursion)
 
**Hàm tự gọi chính nó** — giải quyết bài toán bằng cách chia nhỏ.
 
**Ví dụ — Giai thừa:**
```
5! = 5 × 4!
4! = 4 × 3!
...
1! = 1  ← Điều kiện dừng!
```
 
```cpp
int giaiThua(int n) {
    if (n <= 1) return 1;        // Điều kiện dừng (base case)
    return n * giaiThua(n - 1);  // Gọi đệ quy
}
 
// giaiThua(5) = 5 * giaiThua(4) = 5 * 4 * 3 * 2 * 1 = 120
```
 
> ⚠️ **Bắt buộc phải có điều kiện dừng**, nếu không → stack overflow!
 
### 📝 Bài tập 1
Viết hàm đệ quy tính số Fibonacci thứ n (F(0)=0, F(1)=1, F(n)=F(n-1)+F(n-2)).
 
---
 
## 2. Truyền tham chiếu (Pass by Reference)
 
**Mặc định** C++ truyền **bản sao** (pass by value) — hàm không sửa được biến gốc.  
Dùng `&` để truyền **địa chỉ thực** — hàm sửa trực tiếp biến gốc.
 
```cpp
// Pass by value — không thay đổi a, b ngoài hàm
void hoanDoi_sai(int a, int b) {
    int temp = a; a = b; b = temp;
}
 
// Pass by reference — thay đổi a, b thật sự
void hoanDoi(int &a, int &b) {
    int temp = a; a = b; b = temp;
}
 
int main() {
    int x = 5, y = 10;
    hoanDoi(x, y);
    cout << x << " " << y;  // In: 10 5
    return 0;
}
```
 
### 📝 Bài tập 2
Viết hàm `tinhMinMax(int arr[], int n, int &minVal, int &maxVal)` — truyền mảng vào, trả về giá trị min và max qua tham chiếu.
 
---
 
## 3. Nạp chồng hàm (Function Overloading)
 
Cùng tên hàm, khác tham số:
 
```cpp
int tong(int a, int b)          { return a + b; }
double tong(double a, double b) { return a + b; }
int tong(int a, int b, int c)   { return a + b + c; }
 
// C++ tự chọn đúng hàm dựa trên kiểu/số lượng tham số
cout << tong(1, 2);        // Gọi hàm int
cout << tong(1.5, 2.5);    // Gọi hàm double
cout << tong(1, 2, 3);     // Gọi hàm 3 tham số
```
 
---
 
## 🏠 Bài tập về nhà
1. Viết hàm đệ quy tính tổng các chữ số của một số nguyên (ví dụ: 1234 → 1+2+3+4 = 10).
2. Viết hàm đệ quy kiểm tra một chuỗi có phải palindrome không.
3. Viết hàm `sapXep(int arr[], int n)` sắp xếp mảng tăng dần, dùng tham chiếu để mảng gốc bị thay đổi. Gọi từ `main` và in kết quả.
---
 
# BUỔI 16 — Mini Project 2 (T15-L15)
 
## 🎯 Mục tiêu
Kết hợp mảng + hàm để xây dựng ứng dụng có cấu trúc rõ ràng.
 
---
 
## Đề bài: Hệ thống quản lý danh bạ
 
Viết chương trình C++ quản lý danh bạ điện thoại với các chức năng:
 
```
=== DANH BẠ ĐIỆN THOẠI ===
1. Thêm liên hệ
2. Hiển thị tất cả liên hệ
3. Tìm kiếm theo tên
4. Xoá liên hệ theo số thứ tự
5. Sắp xếp theo tên (A-Z)
0. Thoát
```
 
---
 
## Yêu cầu kỹ thuật
 
1. Dùng **mảng song song** để lưu: `ten[50]`, `soDienThoai[50]`, `soLuong`
2. Mỗi chức năng viết thành **một hàm riêng**:
   - `themLienHe()`
   - `hienThi()`
   - `timKiem()`
   - `xoaLienHe()`
   - `sapXepTheoTen()`
3. Hàm `main` chỉ chứa menu và gọi hàm
---
 
## Gợi ý kiến trúc
 
```cpp
#include <iostream>
#include <string>
using namespace std;
 
const int MAX = 50;
string ten[MAX], sdt[MAX];
int soLuong = 0;
 
void hienThi() {
    if (soLuong == 0) { cout << "Danh ba trong!\n"; return; }
    for (int i = 0; i < soLuong; i++)
        cout << i+1 << ". " << ten[i] << " - " << sdt[i] << endl;
}
 
// Học viên tự viết các hàm còn lại
 
int main() {
    int luaChon;
    do {
        // In menu, nhận lựa chọn, gọi hàm tương ứng
    } while (luaChon != 0);
    return 0;
}
```
 
---
 
## 🏠 Hoàn thiện & nộp
- Commit lên GitHub: `"Buoi 16: Mini Project 2 - Danh ba"`
- Thêm tính năng: **sửa thông tin** liên hệ theo số thứ tự
- Kiểm tra: nhập trùng số điện thoại thì báo lỗi
---
 
# BUỔI 17 — Chuỗi (T16-L16)
 
## 🎯 Mục tiêu
Làm việc với kiểu `string`: các hàm xử lý chuỗi thông dụng.
 
---
 
## 1. Khai báo và nhập chuỗi
 
```cpp
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string ten = "Nguyen Van A";
 
    // Nhập cả câu (có khoảng trắng)
    string diaChi;
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);  // Dùng getline thay cin >>
 
    return 0;
}
```
 
> ⚠️ `cin >>` dừng ở khoảng trắng. Dùng `getline` khi cần nhập cả câu.
 
---
 
## 2. Các hàm chuỗi quan trọng
 
```cpp
string s = "Hello World";
 
s.length()          // 11 — độ dài
s.size()            // 11 — như length()
s[0]                // 'H' — truy cập ký tự
s.substr(6, 5)      // "World" — cắt từ vị trí 6, lấy 5 ký tự
s.find("World")     // 6 — vị trí tìm thấy (string::npos nếu không có)
s.replace(0, 5, "Hi") // "Hi World" — thay thế
s + " !"            // "Hello World !" — nối chuỗi
s.empty()           // false — kiểm tra rỗng
```
 
### 📝 Bài tập 1
Nhập họ tên đầy đủ. Viết chương trình in ra **tên** (chữ cuối cùng sau khoảng trắng cuối).
 
### 📝 Bài tập 2
Đếm số lần xuất hiện của một ký tự trong chuỗi. Ví dụ: "banana", ký tự 'a' → 3 lần.
 
---
 
## 3. Chuyển đổi chuỗi
 
```cpp
#include <sstream>
// Số → Chuỗi
string s = to_string(42);       // "42"
string s2 = to_string(3.14);    // "3.140000"
 
// Chuỗi → Số
int n = stoi("123");            // 123
double d = stod("3.14");        // 3.14
```
 
### 📝 Bài tập 3
Viết chương trình: nhập một câu, đếm số từ trong câu (từ cách nhau bởi khoảng trắng).
 
---
 
## 4. Xử lý chuỗi ký tự
 
```cpp
#include <cctype>
 
char c = 'a';
toupper(c)      // 'A'
tolower('B')    // 'b'
isdigit('5')    // true
isalpha('a')    // true
isspace(' ')    // true
```
 
### 📝 Bài tập 4
Nhập một chuỗi, chuyển tất cả ký tự về **chữ hoa**. Ví dụ: "hello world" → "HELLO WORLD".
 
---
 
## 🏠 Bài tập về nhà
1. Kiểm tra chuỗi có phải **palindrome** không (bỏ qua hoa/thường và khoảng trắng). Ví dụ: "A man a plan a canal Panama".
2. Đảo ngược các từ trong câu: "Hello World" → "World Hello".
3. Viết hàm `demTu(string s)` đếm số từ. Viết hàm `timTu(string s, string tu)` kiểm tra một từ có xuất hiện trong câu không.
---
 
# BUỔI 18 — Con trỏ & Tham chiếu (T17-L17)
 
## 🎯 Mục tiêu
Hiểu bộ nhớ, con trỏ là gì, cách dùng con trỏ cơ bản. Đây là chủ đề **khó** — đi chậm, hỏi nhiều.
 
---
 
## 1. Bộ nhớ và địa chỉ
 
Mỗi biến chiếm một ô nhớ, có **địa chỉ** cụ thể trong RAM.
 
```cpp
int x = 42;
cout << x;    // Giá trị: 42
cout << &x;   // Địa chỉ: 0x61ff08 (ví dụ)
```
 
`&` = toán tử **lấy địa chỉ**.
 
---
 
## 2. Con trỏ (Pointer)
 
**Con trỏ** = biến lưu **địa chỉ** của biến khác.
 
```cpp
int x = 42;
int *p = &x;   // p trỏ đến x
 
cout << p;     // Địa chỉ: 0x61ff08
cout << *p;    // Giá trị tại địa chỉ đó: 42 (toán tử dereference)
 
*p = 100;      // Thay đổi giá trị của x thông qua con trỏ
cout << x;     // In: 100
```
 
Hình dung:
```
Biến x: [42]  tại địa chỉ 0x61ff08
Con trỏ p: [0x61ff08]  →  trỏ đến x
*p  =  giá trị tại địa chỉ p lưu  =  42
```
 
### 📝 Bài tập 1
Khai báo biến `int a = 10`. Tạo con trỏ `p` trỏ đến `a`. Dùng con trỏ tăng giá trị a lên 5.
 
---
 
## 3. Con trỏ và mảng
 
Tên mảng **là** con trỏ đến phần tử đầu tiên:
 
```cpp
int arr[3] = {10, 20, 30};
int *p = arr;  // Hoặc &arr[0]
 
cout << *p;       // 10
cout << *(p+1);   // 20
cout << *(p+2);   // 30
```
 
---
 
## 4. Con trỏ null
 
```cpp
int *p = nullptr;  // Con trỏ không trỏ vào đâu
 
if (p == nullptr) {
    cout << "Con tro null - khong the dung!" << endl;
}
```
 
> ⚠️ Dùng con trỏ null mà không kiểm tra → **crash chương trình**!
 
### 📝 Bài tập 2
Viết hàm `hoanDoi(int *a, int *b)` dùng con trỏ để hoán đổi hai số. Kiểm tra trong `main`.
 
---
 
## 5. Tham chiếu (Reference) — ôn lại
 
```cpp
int x = 10;
int &ref = x;  // ref là tên khác của x
ref = 20;      // x cũng thành 20
```
 
**So sánh con trỏ vs tham chiếu:**
 
| | Con trỏ | Tham chiếu |
|--|---------|-----------|
| Cú pháp | `int *p = &x` | `int &r = x` |
| Có thể NULL? | Có | Không |
| Có thể đổi đích? | Có | Không |
| Dereference? | Cần `*p` | Tự động |
 
---
 
## 🏠 Bài tập về nhà
1. Viết hàm `timMin(int *arr, int n)` nhận con trỏ mảng, trả về giá trị nhỏ nhất.
2. Viết chương trình dùng con trỏ duyệt mảng và tính tổng (không dùng `arr[i]`, chỉ dùng `*(p+i)`).
3. (Thử thách) Cấp phát bộ nhớ động: `int *p = new int[n]` — tạo mảng kích thước n nhập từ bàn phím. Nhớ giải phóng: `delete[] p`.
---
 
# BUỔI 19 — OOP: Lớp & Đối tượng (T18-L18)
 
## 🎯 Mục tiêu
Hiểu lập trình hướng đối tượng (OOP) là gì. Tạo được lớp (class) đơn giản với thuộc tính và phương thức.
 
---
 
## 1. OOP là gì?
 
Cách tổ chức code dựa trên **đối tượng** trong thực tế.
 
| Thực tế | OOP |
|--------|-----|
| Chiếc xe | Đối tượng (object) |
| Loại xe (Xe hơi, Xe máy) | Lớp (class) |
| Màu sắc, tốc độ | Thuộc tính (attribute) |
| Tăng tốc, phanh | Phương thức (method) |
 
---
 
## 2. Khai báo lớp
 
```cpp
class HocSinh {
public:
    // Thuộc tính
    string ten;
    int tuoi;
    double diem;
 
    // Phương thức
    void hienThi() {
        cout << "Ten: " << ten << ", Diem: " << diem << endl;
    }
 
    bool laDau() {
        return diem >= 5.0;
    }
};
```
 
---
 
## 3. Tạo đối tượng và dùng
 
```cpp
int main() {
    HocSinh hs1;            // Tạo đối tượng
    hs1.ten = "Nguyen An";
    hs1.tuoi = 20;
    hs1.diem = 8.5;
    hs1.hienThi();          // Gọi phương thức
 
    HocSinh hs2;
    hs2.ten = "Tran Binh";
    hs2.diem = 4.0;
    cout << (hs2.laDau() ? "Dau" : "Rot") << endl;
 
    return 0;
}
```
 
### 📝 Bài tập 1
Tạo lớp `HinhChuNhat` với thuộc tính `chieuDai`, `chieuRong` và phương thức `tinhDienTich()`, `tinhChuVi()`.
 
---
 
## 4. Constructor (Hàm khởi tạo)
 
Tự động chạy khi tạo đối tượng:
 
```cpp
class HocSinh {
public:
    string ten;
    double diem;
 
    // Constructor
    HocSinh(string _ten, double _diem) {
        ten = _ten;
        diem = _diem;
    }
};
 
// Tạo đối tượng với constructor
HocSinh hs("Nguyen An", 8.5);
```
 
### 📝 Bài tập 2
Thêm constructor vào lớp `HinhChuNhat`. Tạo 3 đối tượng, in ra diện tích của từng cái.
 
---
 
## 5. `public` và `private`
 
```cpp
class TaiKhoan {
private:
    double soDu;     // Bên ngoài không truy cập trực tiếp được
 
public:
    TaiKhoan(double tienBanDau) { soDu = tienBanDau; }
 
    void napTien(double sotien) {
        if (sotien > 0) soDu += sotien;
    }
 
    double laySoDu() { return soDu; }  // Getter
};
```
 
---
 
## 🏠 Bài tập về nhà
1. Tạo lớp `XeOto` với thuộc tính: `tenXe`, `mauSac`, `tocDoHienTai`. Phương thức: `tangToc(int them)`, `dap Phanh(int giam)`, `inThongTin()`.
2. Tạo lớp `SinhVien` với private `diemTB`, public constructor, getter, setter (không cho nhập điểm âm hoặc > 10).
3. Tạo mảng 5 đối tượng `HocSinh`, nhập thông tin, in ra danh sách và người có điểm cao nhất.
---
 
# BUỔI 20 — OOP: Tính bao gói & Kế thừa (T19-L19)
 
## 🎯 Mục tiêu
Hiểu 2 tính chất quan trọng của OOP: **Encapsulation** và **Inheritance**.
 
---
 
## 1. Tính bao gói (Encapsulation)
 
**Giấu dữ liệu**, chỉ cho truy cập qua các hàm được kiểm soát.
 
```cpp
class TaiKhoanNganHang {
private:
    string chuTk;
    double soDu;
    string maPin;
 
public:
    TaiKhoanNganHang(string ten, double tienBanDau, string pin) {
        chuTk = ten;
        soDu = tienBanDau;
        maPin = pin;
    }
 
    bool rutTien(double soTien, string pin) {
        if (pin != maPin) { cout << "Sai PIN!\n"; return false; }
        if (soTien > soDu) { cout << "Khong du tien!\n"; return false; }
        soDu -= soTien;
        return true;
    }
 
    double xemSoDu(string pin) {
        if (pin != maPin) return -1;
        return soDu;
    }
};
```
 
### 📝 Bài tập 1
Thêm phương thức `chuyenTien(TaiKhoanNganHang &nguoiNhan, double soTien, string pin)` vào lớp trên.
 
---
 
## 2. Kế thừa (Inheritance)
 
**Lớp con** kế thừa thuộc tính và phương thức của **lớp cha**.
 
```cpp
// Lớp cha
class DongVat {
public:
    string ten;
    int tuoi;
 
    void an() { cout << ten << " dang an.\n"; }
    void ngu() { cout << ten << " dang ngu.\n"; }
};
 
// Lớp con kế thừa lớp cha
class Cho : public DongVat {
public:
    string giong;
 
    void sua() { cout << ten << ": Gau gau!\n"; }  // Phương thức riêng
};
 
// Dùng:
Cho c;
c.ten = "Milu";
c.giong = "Corgi";
c.an();   // Kế thừa từ DongVat
c.sua();  // Của Cho
```
 
### 📝 Bài tập 2
Tạo lớp cha `HinhDang` với thuộc tính `mauSac` và phương thức ảo `tinhDienTich()`. Tạo 2 lớp con: `HinhTron` (có `banKinh`) và `HinhChuNhat` (có `chieuDai`, `chieuRong`), mỗi lớp override `tinhDienTich()`.
 
---
 
## 3. Ghi đè phương thức (Method Overriding)
 
```cpp
class DongVat {
public:
    virtual void kedStory() {
        cout << "Mot con dong vat nao do." << endl;
    }
};
 
class Meo : public DongVat {
public:
    void kedStory() override {
        cout << "Mot con meo xinh dep." << endl;
    }
};
 
DongVat *p = new Meo();
p->kedStory();  // In: "Mot con meo xinh dep." (virtual dispatch)
```
 
---
 
## 🏠 Bài tập về nhà
1. Tạo hệ thống nhân sự: lớp cha `NhanVien` (ten, luongCoBan, tinhLuong()), lớp con `NhanVienFullTime` (tinhLuong() = lương cơ bản), `NhanVienPartTime` (tinhLuong() = lương cơ bản × số giờ làm).
2. Tạo mảng con trỏ `NhanVien*`, cho mỗi nhân viên loại khác nhau, gọi `tinhLuong()` tự động đúng loại.
3. Đọc trước: **Tính đa hình (Polymorphism)** là gì?
---
 
# BUỔI 21 — Review OOP (T20-L20)
 
## 🎯 Mục tiêu
Ôn lại toàn bộ OOP, giải đáp thắc mắc, chuẩn bị cho project cuối khoá.
 
---
 
## 1. Tổng kết 4 tính chất OOP
 
| Tính chất | Nghĩa | Ví dụ |
|-----------|-------|-------|
| **Encapsulation** (Bao gói) | Giấu data, chỉ cho truy cập qua method | `private soDu`, public `rutTien()` |
| **Inheritance** (Kế thừa) | Lớp con tái sử dụng code lớp cha | `Cho : DongVat` |
| **Polymorphism** (Đa hình) | Cùng tên method, hành vi khác nhau | `virtual + override` |
| **Abstraction** (Trừu tượng) | Ẩn phức tạp, chỉ lộ giao diện cần thiết | Abstract class, interface |
 
---
 
## 2. Đa hình (Polymorphism) — bổ sung
 
```cpp
class HinhDang {
public:
    virtual double tinhDienTich() = 0;  // Pure virtual = abstract
    virtual void inThongTin() {
        cout << "Dien tich: " << tinhDienTich() << endl;
    }
};
 
class HinhTron : public HinhDang {
    double r;
public:
    HinhTron(double r) : r(r) {}
    double tinhDienTich() override { return 3.14159 * r * r; }
};
 
class HinhChuNhat : public HinhDang {
    double d, r;
public:
    HinhChuNhat(double d, double r) : d(d), r(r) {}
    double tinhDienTich() override { return d * r; }
};
 
// Đa hình:
HinhDang *shapes[2];
shapes[0] = new HinhTron(5);
shapes[1] = new HinhChuNhat(4, 6);
 
for (int i = 0; i < 2; i++)
    shapes[i]->inThongTin();  // Tự gọi đúng loại!
```
 
### 📝 Bài tập ôn tập tổng hợp
Xây dựng hệ thống thư viện nhỏ:
- Lớp `Sach` (ten, tacGia, namXuatBan, soLuongCon)
- Lớp `ThanhVien` (ten, maTv, danhSachMuon[])
- Phương thức: `muonSach()`, `traSach()`, `xemDanhSachMuon()`
---
 
## 3. Checklist trước khi làm Project
 
Tự kiểm tra — đánh dấu những gì đã nắm:
 
- [ ] Khai báo biến, kiểu dữ liệu, nhập/xuất
- [ ] Câu lệnh if/else, switch
- [ ] Vòng lặp for, while, do-while
- [ ] Mảng 1 chiều, duyệt, sắp xếp, tìm kiếm
- [ ] Hàm: khai báo, gọi, truyền tham số, trả về
- [ ] Đệ quy
- [ ] Con trỏ cơ bản
- [ ] Lớp: thuộc tính, phương thức, constructor
- [ ] Kế thừa và đa hình
---
 
## 🏠 Chuẩn bị Project
1. Đọc đề project, chọn chủ đề (nếu được tự chọn)
2. Vẽ sơ đồ lớp (class diagram) — ít nhất 3 lớp
3. Viết pseudo code cho các chức năng chính
4. Lập kế hoạch chia việc nếu làm nhóm
---
 
# BUỔI 22–23 — Project (Case Study)
 
## 🎯 Mục tiêu
Áp dụng toàn bộ kiến thức C++ vào một dự án thực tế hoàn chỉnh.
 
---
 
## Đề xuất chủ đề Project
 
### 🏦 Option A: Hệ thống quản lý ngân hàng đơn giản
- Quản lý tài khoản (Tiết kiệm / Thanh toán)
- Nạp/rút/chuyển tiền
- Lịch sử giao dịch
- Xem số dư
### 🛒 Option B: Cửa hàng bán lẻ
- Quản lý sản phẩm (thêm, sửa, xoá, tìm kiếm)
- Giỏ hàng, thanh toán
- Quản lý tồn kho
- Báo cáo doanh thu
### 🎮 Option C: Game đơn giản
- Game đoán số (nhiều level khó)
- Game quiz (câu hỏi + điểm số)
- Caro 5x5 (2 người chơi)
---
 
## Yêu cầu bắt buộc
 
| Yêu cầu | Điểm |
|---------|------|
| Có ít nhất 3 lớp, kế thừa đúng | 25% |
| Dùng mảng/con trỏ hiệu quả | 15% |
| Hàm rõ ràng, không lặp code | 20% |
| Chương trình chạy ổn định, không crash | 20% |
| Code sạch, có comment | 10% |
| Tính năng sáng tạo thêm | 10% |
 
---
 
## Lịch làm việc
 
**Buổi 22:**
- Thuyết trình ý tưởng (3 phút/nhóm)
- Giảng viên phản hồi, chốt đề tài
- Bắt đầu code: setup cấu trúc lớp, hàm `main` skeleton
**Buổi 23:**
- Tiếp tục code, xử lý bugs
- Giảng viên hỗ trợ từng nhóm
- Chuẩn bị thuyết trình cho buổi 24
---
 
## 🏠 Trước buổi 24
- Code hoàn chỉnh, commit GitHub
- Chuẩn bị slide thuyết trình (5-7 phút):
  - Vấn đề giải quyết
  - Thiết kế lớp (class diagram)
  - Demo chương trình
  - Điều học được / khó khăn gặp phải
---
 
# BUỔI 24 — Tổng kết khoá học
 
## 🎯 Mục tiêu
Trình bày project, nhận phản hồi, định hướng học tiếp.
 
---
 
## Lịch trình buổi cuối
 
| Thời gian | Nội dung |
|-----------|---------|
| 19:30 – 20:30 | Demo & thuyết trình project (mỗi nhóm 5-7 phút + Q&A) |
| 20:30 – 20:50 | Nhận xét tổng thể, trao giải (code đẹp nhất, sáng tạo nhất...) |
| 20:50 – 21:10 | Định hướng học tiếp |
| 21:10 – 21:30 | Tổng kết, chụp ảnh, điền form đánh giá |
 
---
 
## Định hướng sau khoá học
 
### Bước tiếp theo với C++
- **Data Structures & Algorithms**: Linked list, Stack, Queue, Tree, Graph
- **STL (Standard Template Library)**: `vector`, `map`, `set`, `algorithm`
- **Lập trình hệ thống**: File I/O, xử lý ngoại lệ (exception), multithreading
### Hướng phát triển career
| Hướng | Ngôn ngữ tiếp theo |
|-------|-------------------|
| Web Backend | Python, Java, Node.js |
| Mobile | Swift (iOS), Kotlin (Android) |
| Game | C++ (Unreal), C# (Unity) |
| Data / AI | Python |
| Embedded / IoT | C, C++ |
 
### Tài nguyên học thêm
- **cppreference.com** — Tài liệu C++ chuẩn
- **LeetCode / HackerRank** — Luyện thuật toán
- **Learncpp.com** — Tutorial C++ tiếng Anh miễn phí
- **Coursera / edX** — Khoá học có chứng chỉ
---
 
## Lời khuyên từ giảng viên
 
> **"Code mỗi ngày, dù chỉ 30 phút."**  
> Kỹ năng lập trình là cơ bắp — không tập thì teo.  
> Đừng chỉ đọc code người khác — hãy tự gõ, tự mắc lỗi, tự sửa.  
> Bug không phải kẻ thù — bug là giáo viên tốt nhất.
 
---
 
*Chúc mừng các bạn đã hoàn thành khoá học! 🎉*
 
---
 
**Phiên bản tài liệu:** 1.0 — CGO-C0526L1-C101  
**Instructor:** Trần Văn An  
**Cập nhật lần cuối:** Buổi 4 → 24
 
