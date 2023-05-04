using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridRenderer : MonoBehaviour
{
    public int numCells = 10; // number of cells in each direction
    public float cellSpacing = 1f; // spacing between cells
    public Material cellMaterial; // material to use for the cells

    private void Start()
    {
        // create the grid cells
        for (int x = 0; x < numCells; x++)
        {
            for (int y = 0; y < numCells; y++)
            {
                GameObject cell = GameObject.CreatePrimitive(PrimitiveType.Quad);
                cell.transform.SetParent(transform);
                cell.transform.localScale = new Vector3(cellSpacing, cellSpacing, 1f);
                cell.transform.localPosition = new Vector3((x * cellSpacing) + (cellSpacing / 2f), (y * cellSpacing) + (cellSpacing / 2f), 0f);
                cell.GetComponent<Renderer>().material = cellMaterial;
            }
        }
    }
}

