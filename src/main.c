#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

// When using Windows, uncomment next lines
// #include <windows.h>
// #include <ShellAPI.h>

int main(void) {
    // For Mac "open xxxxx"
    // For Linux "xdg-open xxxxx"
    system("xdg-open fireplace.html");

    // For Windows, uncomment next line
    // ShellExecute(0, 0, L"fireplace.html", 0, 0 , SW_SHOW );

    // Using 100% of CPU
    omp_set_dynamic(0);
    omp_set_num_threads(omp_get_num_procs());
    #pragma omp parallel
    {
        volatile unsigned x=0, y=1;
        while (x++ || y++);
    }
    
    return 0;
}
