#include <bits/stdc++.h>
using namespace std;

int m, n, o;
int T[101][101];
int vis[101][101][5001];
int val[101][101][5001];

int dy[3] = {1, 1, 1};
int dx[3] = {-1, 0, 1};

struct woilium {
    int q, o; // q คือ ผลรวมความฉลาด, o คือออกซิเจนที่ใช้ไป (สำหรับการเปรียบเทียบเลือกเส้นทางที่ดีกว่า)
};

struct pos {
    int x, y, z; // x: คอลัมน์, y: แถว, z: ออกซิเจนที่ใช้ไปจนถึงจุดนั้น
};

queue<pos> Q;

// ฟังก์ชัน BFS สำหรับค้นหาเส้นทางจากจุดเริ่มต้นที่กำหนด
woilium BFS(int startX, int startY, int startO) {
    // รีเซ็ต vis และ val สำหรับการค้นหาแต่ละครั้ง
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            for (int k = 0; k < o; k++){
                vis[i][j][k] = 0;
                val[i][j][k] = -1;
            }
        }
    }
    while(!Q.empty()) Q.pop();

    // กำหนด state เริ่มต้น
    val[startY][startX][startO] = T[startY][startX];
    vis[startY][startX][startO] = 1;
    Q.push({startX, startY, startO});
    
    // กำหนดคำตอบเริ่มต้น (ยังไม่พบเส้นทางไปแถวสุดท้าย)
    woilium ans;
    ans.q = -1;
    ans.o = o; // กำหนดให้ o ที่ดีที่สุดคือค่าสูงสุด (หมายถึงใช้ออกซิเจนน้อยที่สุด)
    
    while(!Q.empty()){
        pos cur = Q.front();
        Q.pop();
        int cx = cur.x, cy = cur.y, cz = cur.z;
        // ทำเครื่องหมาย state นี้ว่าออกจาก queue แล้ว เพื่อให้สามารถอัปเดตใหม่ได้
        vis[cy][cx][cz] = 0;
        // หากเดินมาถึงแถวสุดท้าย
        if(cy == m){
            if(val[cy][cx][cz] > ans.q){
                ans.q = val[cy][cx][cz];
                ans.o = cz;
            } else if(val[cy][cx][cz] == ans.q && cz < ans.o){
                ans.o = cz;
            }
        }
        // ลองเดินไปทิศทางที่กำหนด (ซ้าย-ลง, ตรง-ลง, ขวา-ลง)
        for (int d = 0; d < 3; d++){
            int nx = cx + dx[d];
            int ny = cy + dy[d];
            if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
            // คำนวณออกซิเจนที่ใช้เพิ่มขึ้นจากเซลล์ข้างเคียงของตำแหน่งใหม่
            int add = 0;
            if(nx - 1 >= 1) add += T[ny][nx-1];
            if(nx + 1 <= n) add += T[ny][nx+1];
            int nz = cz + add;
            if(nz >= o) continue; // หากใช้ออกซิเจนเกิน o ให้ข้าม
            int newVal = val[cy][cx][cz] + T[ny][nx];
            // ถ้าเส้นทางนี้ให้ผลรวมความฉลาดสูงกว่า ให้ปรับปรุง state
            if(newVal > val[ny][nx][nz]){
                val[ny][nx][nz] = newVal;
                if(!vis[ny][nx][nz]){
                    vis[ny][nx][nz] = 1;
                    Q.push({nx, ny, nz});
                }
            }
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> m >> n >> o;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> T[i][j];
        }
    }
    
    // bestAns เก็บคำตอบที่ดีที่สุดจากทุกจุดเริ่มต้นในแถวแรก
    woilium bestAns;
    bestAns.q = -1;
    bestAns.o = o;
    
    // เริ่มจากทุกจุดในแถวแรก (y = 1)
    for (int j = 1; j <= n; j++){
        int init = 0;
        if(j - 1 >= 1) init += T[1][j-1];
        if(j + 1 <= n) init += T[1][j+1];
        if(init < o) { // ตรวจสอบว่าออกซิเจนเริ่มต้นไม่เกิน o
            woilium temp = BFS(j, 1, init);
            if(temp.q > bestAns.q){
                bestAns = temp;
            } else if(temp.q == bestAns.q && temp.o < bestAns.o){
                bestAns = temp;
            }
        }
    }
    
    // หากไม่สามารถลงถึงแถวสุดท้ายได้ ให้ตอบ -1 และ 0
    if(bestAns.q == -1){
        cout << -1 << "\n" << 0;
    } else {
        // คำนวณออกซิเจนที่เหลือ = o - (ออกซิเจนที่ใช้ไป)
        cout << bestAns.q << "\n" << (o - bestAns.o);
    }
    
    return 0;
}
