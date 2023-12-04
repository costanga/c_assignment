#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    printf("�ҽ� ���� ��ο� �̸��� �Է��ϼ���: ");
    scanf("%s", sourcePath);

    printf("��� ���� ��ο� �̸��� �Է��ϼ���: ");
    scanf("%s", destinationPath);

    sourceFile = fopen(sourcePath, "r");
    destinationFile = fopen(destinationPath, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("������ �� �� �����ϴ�. ���α׷��� �����մϴ�.");
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("������ ���������� ����Ǿ����ϴ�.");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
