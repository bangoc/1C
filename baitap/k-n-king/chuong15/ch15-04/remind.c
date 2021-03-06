/* In danh sách nhắc nhở trong một tháng */
#include <stdio.h>
#include <string.h>

#include "readline.h"

#define MAX_REMIND 50  // Số nhắc nhở tối đa
#define MSG_LEN 60  // Độ dài tối đa của thông điệp nhắc nhở

int main() {
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char day_str[3], msg_str[MSG_LEN + 1];
  int day, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- Hết chỗ để lưu --\n");
      break;
    }
    printf("Nhập ngày và nhập nhắc nhở: ");
    scanf("%2d", &day);
    if (day == 0) {
      break;
    }
    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; ++i) {
      if (strcmp(day_str, reminders[i]) < 0) {
        break;
      }
    }
    for (j = num_remind; j > i; --j) {
      strcpy(reminders[j], reminders[j - 1]);
    }
    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);
    ++num_remind;
  }

  printf("\nNgày ngắc nhở\n");
  for (i = 0; i < num_remind; ++i) {
    printf(" %s\n", reminders[i]);
  }
  return 0;
}
