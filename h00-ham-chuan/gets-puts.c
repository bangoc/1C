/*
  @bangoc 2021
  Tệp tiêu đề: stdio.h
  Nguyên mẫu:
    char *gets (char *__s);
    int puts (const char *__s);

  * Lưu ý: gets bắt đầu bị lược bỏ khỏi thư viện tiêu chuẩn từ C11
*/
#include <stdio.h>

int main() {
  char s[100];

  // Đọc một dòng cho tới dấu xuống dòng, bỏ qua dấu xuống dòng
  gets(s);

  // Xuất chuỗi s và thêm dấu xuống dòng
  puts(s);

  // khác với puts, printf không tự động thêm dấu xuống dòng
  printf("%s", s);
  printf("Mot chuoi khac\n");  // Bị dính vào chuỗi s
  return 0;
}