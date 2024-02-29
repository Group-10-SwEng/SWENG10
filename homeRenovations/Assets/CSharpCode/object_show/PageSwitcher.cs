using UnityEngine;

public class PageSwitcher : MonoBehaviour
{
    public GameObject page1; // ��һ��ҳ��
    public GameObject page2; // �ڶ���ҳ��
    public GameObject page3; // ������ҳ��
    public GameObject page4; // ���ĸ�ҳ��

    void Start()
    {
        // ȷ����ʼʱ����ҳ�涼�����ص�
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // ��ʾ��һ��ҳ�沢��������ҳ��
    public void ShowPage1()
    {
        page1.SetActive(true);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // ��ʾ�ڶ���ҳ�沢��������ҳ��
    public void ShowPage2()
    {
        page1.SetActive(false);
        page2.SetActive(true);
        page3.SetActive(false);
        page4.SetActive(false);
    }

    // ��ʾ������ҳ�沢��������ҳ��
    public void ShowPage3()
    {
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(true);
        page4.SetActive(false);
    }

    // ��ʾ���ĸ�ҳ�沢��������ҳ��
    public void ShowPage4()
    {
        page1.SetActive(false);
        page2.SetActive(false);
        page3.SetActive(false);
        page4.SetActive(true);
    }
}