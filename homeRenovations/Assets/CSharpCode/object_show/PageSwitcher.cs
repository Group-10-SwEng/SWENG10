using UnityEngine;

public class PageSwitcher : MonoBehaviour
{
    public GameObject page1; // First Page
    public GameObject page2; // 2nd Page
    public GameObject page3; // 3rd Page
    public GameObject page4; // 4th Page

    void Start()
    {
        // make sure when the program start running all the pages are hidding
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // show the first page and hidding three of them
    public void ShowPage1()
    {
        page1.SetActive(true);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // show the second page and hidding three of them
    public void ShowPage2()
    {
        page1.SetActive(false);
        page2.SetActive(true);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // show the third page and hidding three of them
    public void ShowPage3()
    {
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(true);
        page4.SetActive(false);
    }

    // show the fourth page and hidding three of them
    public void ShowPage4()
    {
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(true);
    }
}