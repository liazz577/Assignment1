#include<stdio.h>
void nhapdstensv(char arr[],int n){
	printf("Nhap danh sach ten sinh vien:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void showStudent(SV a[], int n) {
    printLine(100);
    cout <<"\n\STT\tID\tHo va ten\tGioi tinh\tTuoi\tToan\tLy\tHoa\tDiem TB\tHoc luc";
    for(int i = 0; i < n; i++) {
        // in sinh vien thu i ra man hinh
        printf("\n %d", i + 1);
        printf("\t%d", a[i].id);
        printf("\t%s", a[i].ten);
        printf("\t\t%s", a[i].gioiTinh);
        printf("\t\t%d", a[i].tuoi);
        printf("\t%.2f\t%.2f\t%.2f", a[i].diemToan, a[i].diemLy, a[i].diemHoa);
        printf("\t%.2f", a[i].diemTB);
        printf("\t%s", a[i].hocluc);
    }
    printLine(100);
}

void sapXepTheoTen(SV a[], int n) {
    //Sap xep sinh vien theo ten theo thu tu alphabet
    SV tmp;
    char tenSV1[30];
    char tenSV2[30];
    for(int i = 0;i < n; i++) {
        strcpy(tenSV1, a[i].ten);
        for(int j = i+1; j < n; j++) {
            strcpy(tenSV2, a[j].ten);
            if(strcmp(strupr(tenSV1), strupr(tenSV2)) > 0) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
