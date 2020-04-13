#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vis[3002];

int main()
{
  int n, a, b, ok, t, m;
  while(scanf("%d", &n) != EOF){
    scanf("%d", &a);
    m = n; ok = 1;
    memset(vis, 0, sizeof(vis));
    while(--n){
      scanf("%d", &b);

      if(ok == 0) continue;
      if((t = abs(a - b)) == 0 || t >= m || vis[t])
	ok = 0;

      a = b; vis[t] = 1;
    }
    printf(ok ? "Jolly\n" : "Not jolly\n");
  }
  return 0;
}
