# Arduino LM35 Temperature Monitor

## 1. Mô tả

Dự án sử dụng cảm biến nhiệt độ LM35 để đo nhiệt độ và gửi dữ liệu qua Serial. Hệ thống hỗ trợ đọc nhiều kênh (A0, A1, A2) và xuất dữ liệu dưới dạng JSON.

---

## 2. Tính năng

* Đọc nhiệt độ từ 3 cảm biến LM35 (A0, A1, A2)
* Chuyển đổi giá trị ADC sang nhiệt độ (°C)
* Gửi dữ liệu qua Serial
* Định dạng dữ liệu dạng JSON (dễ tích hợp với ứng dụng khác)

---

## 3. Phần cứng

| Thiết bị      | Số lượng |
| ------------- | -------- |
| Arduino Uno   | 1        |
| Cảm biến LM35 | 3        |
| Dây nối       | Nhiều    |
| Breadboard    | 1        |

---

## 4. Hướng dẫn sử dụng

### 4.1 Kết nối phần cứng

* LM35 #1 → A0
* LM35 #2 → A1
* LM35 #3 → A2

### 4.2 Nạp code

* Mở Arduino IDE
* Chọn đúng board và cổng COM
* Upload file `.ino`

### 4.3 Xem dữ liệu

* Mở Serial Monitor
* Baudrate: 9600
* Dữ liệu hiển thị dạng:

```json
{"A0":25,"A1":26,"A2":27}
```

---

## 5. Cấu trúc thư mục

```
Arduino_LM35_TempMonitor/
├── docs/           # Tài liệu
├── firmware/       # Code Arduino
├── libs/           # Thư viện
├── pc_app/         # Ứng dụng PC
├── simulation/     # Mô phỏng
└── .gitignore
```

---

## 6. Thành viên nhóm

| Họ tên          | Vai trò             |
| --------------- | ------------------- |
| Bùi Văn Đồng    | SV A (Owner)        |
| (Tài khoản phụ) | SV B (Collaborator) |

---

## 7. Ghi chú
## 👤 Tác giả

**Bùi Văn Đồng**  
🔗 GitHub: https://github.com/mrcucusi  
🌐 Website: https://mrcucusi.github.io

* Dữ liệu JSON giúp dễ dàng tích hợp với web/app
* Có thể mở rộng thêm nhiều cảm biến khác
