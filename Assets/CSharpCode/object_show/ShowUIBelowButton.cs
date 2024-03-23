using UnityEngine;

public class ShowUIInBackplate : MonoBehaviour
{
    public GameObject newUIPanel;

    void Start()
    {
        newUIPanel.SetActive(false);
    }

    public void ToggleNewUIPanel()
    {
        newUIPanel.SetActive(!newUIPanel.activeSelf);
    }
}