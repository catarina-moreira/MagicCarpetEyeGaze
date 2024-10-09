using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Button button1;
    public Button button2;
    public GameObject UI;
    public Image buttonImage1;
    public Image buttonImage2;
    public Transform controllerTransform;
    private bool joystick;
    private bool speedCircle;
    public GameObject speedCircleObject;
    private InputData _inputData;

    void Start()
    {
        // Add listeners to the buttons
        _inputData = GetComponent<InputData>();
    }

    void Update()
    {
        // Perform raycasting from the controller
        if (Physics.Raycast(controllerTransform.position, controllerTransform.forward, out RaycastHit hit, Mathf.Infinity))
        {
            // Check if the hit object has a Button component
            Button button = hit.collider.GetComponent<Button>();
            _inputData._rightController.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primaryButton, out bool pressed);
            if (button != null)
            {
                if(button == button1){
                    buttonImage1.color = Color.white;
                    if(pressed)
                    {
                        buttonImage1.color = Color.green;
                        OnButton1Click();
                        Destroy(UI);
                    }
                }
                else
                {
                    buttonImage1.color = Color.grey;
                }
                
                if(button == button2)
                {
                    buttonImage2.color = Color.white;
                    if(pressed)
                    {
                        buttonImage2.color = Color.green;
                        OnButton2Click();
                        Destroy(UI);
                    }
                }
                else
                {
                    buttonImage2.color = Color.grey;
                }
            }
        }
    }

    public void OnButton1Click()
    {
        setJoystick(false);
        setSpeedCircle(true);
        speedCircleObject.SetActive(true);
    }

    public void OnButton2Click()
    {
        setJoystick(true);
        setSpeedCircle(false);
        speedCircleObject.SetActive(false);
    }

    void setJoystick(bool jstck)
    {
        joystick = jstck;
    }

    void setSpeedCircle(bool sc)
    {
        speedCircle = sc;
    }

    public bool isJoystickActive()
    {
        return joystick;
    }

    public bool isSpeedCircleActive()
    {
        return speedCircle;
    }
}
