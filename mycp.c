#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    printf("소스 파일 경로와 이름을 입력하세요: ");
    scanf("%s", sourcePath);

    printf("대상 파일 경로와 이름을 입력하세요: ");
    scanf("%s", destinationPath);

    sourceFile = fopen(sourcePath, "r");
    destinationFile = fopen(destinationPath, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("파일을 열 수 없습니다. 프로그램을 종료합니다.");
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("파일이 성공적으로 복사되었습니다.");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
