int main() {
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("formam um triangulo");
    else
        printf("n formam um trinagulo");
}
