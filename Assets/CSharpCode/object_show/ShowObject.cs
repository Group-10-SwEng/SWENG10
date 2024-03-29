using UnityEngine;

public class ShowObject : MonoBehaviour
{
    public GameObject objectToShow;
    public Canvas parentCanvas;

    
    void Start()
    {
       
        if (objectToShow != null)
        {
            objectToShow.SetActive(false);
        }
    }


    public void ToggleVisibility()     // Toggle the game object when button is clicked
    {

        if (objectToShow != null)
        {
            GameObject clone = GameObject.Instantiate(objectToShow, parentCanvas.transform, true);            //active state of the object
            clone.transform.localScale = parentCanvas.transform.localScale;
            clone.transform.localScale *= 100000;
            Vector3 newPosition = new Vector3(1, 2, -1); 
            clone.transform.position = newPosition;
            clone.SetActive(true);
            //objectToShow = clone;
        }
    }
}