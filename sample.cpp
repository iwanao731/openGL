#include <iostream>
#include <GLUT/glut.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void setColor(void)
{
    glClearColor(1.0, 0.0, 0.0, 1.0);
}

int main(int argc, char *argv[]){
    // 初期化
    glutInit(&argc, argv);
    // ウィンドウを開く
    glutCreateWindow("Hello OpenGL/GLUT world.");
    // ウィンドウへの描画関数の登録
    glutDisplayFunc(draw);
    
    setColor();
    
    // メインループ開始
    glutMainLoop();
    return 0;
}