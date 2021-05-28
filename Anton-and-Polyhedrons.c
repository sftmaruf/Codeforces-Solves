#include <stdio.h>
#include <string.h>

int main()
{
    int nOfPolyhedron, count = 0;
    scanf("%d", &nOfPolyhedron);
    char polyhedronName[nOfPolyhedron][13];

    for (int i = 0; i < nOfPolyhedron; i++)
    {
        scanf("%s", &polyhedronName[i][0]);
    }

    for (int i = 0; i < nOfPolyhedron; i++)
    {
        if (strcmp(polyhedronName[i], "Tetrahedron") == 0)
        {
            count += 4;
        }

        if (strcmp(polyhedronName[i], "Cube") == 0)
        {
            count += 6;
        }

        if (strcmp(polyhedronName[i], "Octahedron") == 0)
        {
            count += 8;
        }

        if (strcmp(polyhedronName[i], "Dodecahedron") == 0)
        {
            count += 12;
        }

        if (strcmp(polyhedronName[i], "Icosahedron") == 0)
        {
            count += 20;
        }
    }

    printf("%d", count);
    return 0;
}

//time-complexity -> O(n)