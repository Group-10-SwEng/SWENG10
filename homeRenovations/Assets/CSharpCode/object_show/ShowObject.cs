using UnityEngine;

public class ShowObject : MonoBehaviour
{
    public GameObject objectToShow;

    
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
            Vector3 tr = objectToShow.transform.position;
            GameObject clone = GameObject.Instantiate(objectToShow, new Vector3(tr.x + 1, tr.y, tr.z), objectToShow.transform.rotation);            //active state of the object
            clone.SetActive(true);
            objectToShow = clone;
        }
    }
}