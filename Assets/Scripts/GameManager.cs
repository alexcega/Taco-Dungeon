using UnityEngine;
using UnityEngine.SceneManagement;
public class GameManager : MonoBehaviour
{
    bool GameHasEnded = false;
    public float TimeWait = 1f;
    public float deadTime = 0.1f;
    public float ya = 0.5f;
    public static bool GameIsPaused = false; //Guarda el estado del juego para saber si hay pausa o no
    public GameObject PauseMenuUI;
    public GameObject letrero;
    [SerializeField] private string newLevel;
   


    public void EndGame()
    {   
        if(GameHasEnded == false)
        {
            GameHasEnded = true;
            Debug.Log("Game over");
            Pause();
            
        }
    }
	
	public void WinGame()
	{
		
		if(GameHasEnded == false)
        {
            GameHasEnded = true;
            Debug.Log("Game win");
            win();
            
        }
		
	}


	void win()
    {
        letrero.SetActive(true);
        //Time.timeScale = ya;
        //Invoke("goBack", TimeWait);
        GameIsPaused = true;
    }
    void Pause()
    {
        PauseMenuUI.SetActive(true);
        Time.timeScale = deadTime;
        Invoke("Restart", TimeWait);
        GameIsPaused = true;
    }
    void Restart()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
   

    void goBack(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            SceneManager.LoadScene(newLevel);
        }
    }
}
