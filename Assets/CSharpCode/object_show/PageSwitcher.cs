using UnityEngine;

public class PageSwitcher : MonoBehaviour
{
    public GameObject page1; // 第一个页面
    public GameObject page2; // 第二个页面
    public GameObject page3; // 第三个页面
    public GameObject page4; // 第四个页面

    void Start()
    {
        // 确保开始时所有页面都是隐藏的
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // 显示第一个页面并隐藏其他页面
    public void ShowPage1()
    {
        page1.SetActive(true);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // 显示第二个页面并隐藏其他页面
    public void ShowPage2()
    {
        page1.SetActive(false);
        page2.SetActive(true);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // 显示第三个页面并隐藏其他页面
    public void ShowPage3()
    {
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(true);
        page4.SetActive(false);
    }

    // 显示第四个页面并隐藏其他页面
    public void ShowPage4()
    {
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(true);
    }
}