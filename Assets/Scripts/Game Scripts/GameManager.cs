using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public Text scoreText; // The UI text object that displays the score
    public int score; // The current score
    public float timeLimit; // The time limit for the game
    private float timeLeft; // The time left in the game
    public GameObject gameOverPanel; // The UI panel that displays the game over message

    void Start()
    {
        /// Set the initial score and time left
        score = 0;
        timeLeft = timeLimit;

        // Update the score text
        UpdateScoreText();
    }

    void Update()
    {
        // Decrease the time left every second
        timeLeft -= Time.deltaTime;

        // Update the time left text
        UpdateTimeLeftText();

        // Check if the time has run out or the player has reached the goal
        if (timeLeft <= 0/* || add code to check if the player has reached the goal */)
        {
            // End the game
            GameOver();
        }
    }

    void UpdateScoreText()
    {
        // Update the score text with the current score
        scoreText.text = "Score: " + score.ToString();
    }

    void UpdateTimeLeftText()
    {
        // Update the time left text with the current time left
        /* add code to update the time left text */
    }

    public void AddScore(int points)
    {
        // Add points to the score and update the score text
        score += points;
        UpdateScoreText();
    }

    void GameOver()
    {
        // Show the game over panel and stop the game
        gameOverPanel.SetActive(true);
        Time.timeScale = 0;
    }
}
