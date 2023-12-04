#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

void spider1(sf::RenderWindow& window, sf::Font& font);
void spider2(sf::RenderWindow& window, sf::Font& font);
void spider3(sf::RenderWindow& window, sf::Font& font);

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    sf::RenderWindow window(sf::VideoMode(800, 600), "Math Game");

    std::string fontPath = "/Library/Fonts/Arial Unicode.ttf";

    sf::Font font;
    if (!font.loadFromFile(fontPath)) {
        std::cerr << "Error loading font\n";
        return -1;
    }

    sf::Text questionText("", font, 30);
    questionText.setPosition(50, 50);
    questionText.setFillColor(sf::Color::White);

    sf::Text scoreText("Score: 0", font, 20);
    scoreText.setPosition(50, 20);
    scoreText.setFillColor(sf::Color::White);

    sf::Text livesText("Lives: 3", font, 20);
    livesText.setPosition(650, 20);
    livesText.setFillColor(sf::Color::White);

    sf::Text answerBox("", font, 20);
    answerBox.setPosition(50, 500);
    answerBox.setFillColor(sf::Color::White);
    std::ostringstream answerStr;

    int num1, num2, answer, correctAnswer;
    int score = 0;
    int lives = 3;
    std::ostringstream question, scoreStr, livesStr;

    bool answerSelected = false;

    while (window.isOpen()) {
        if (!answerSelected) {
            num1 = std::rand() % 10 + 1;
            num2 = std::rand() % 10 + 1;

            // Ensure that for division, the numerator is greater than the denominator
            while (num1 <= num2) {
                num1 = std::rand() % 10 + 1;
                num2 = std::rand() % 10 + 1;
            }

            int operation = std::rand() % 4 + 1;

            switch (operation) {
                case 1:
                    answer = num1 + num2;
                    question.str("");
                    question << num1 << " + " << num2 << " = ?";
                    break;
                case 2:
                    answer = num1 - num2;
                    question.str("");
                    question << num1 << " - " << num2 << " = ?";
                    break;
                case 3:
                    answer = num1 * num2;
                    question.str("");
                    question << num1 << " * " << num2 << " = ?";
                    break;
                case 4:
                    // For division, ensure that the result is a whole number
                    answer = num1 / num2;
                    question.str("");
                    question << num1 << " / " << num2 << " = ?";
                    break;
            }

            questionText.setString(question.str());
            correctAnswer = answer;
            answerSelected = true;
        }

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::TextEntered) {
                if (event.text.unicode < 128) {
                    char enteredChar = static_cast<char>(event.text.unicode);
                    if (enteredChar == '\b' && !answerStr.str().empty()) {
                        answerStr.str(answerStr.str().substr(0, answerStr.str().length() - 1));
                    } else if (enteredChar == '\r' || enteredChar == '\n') {
                        int userAnswer;
                        try {
                            userAnswer = std::stoi(answerStr.str());
                            // Check if the answer is a whole number for division
                            if (question.str().find("/") != std::string::npos && userAnswer * num2 != num1) {
                                throw std::invalid_argument("Invalid answer format");
                            }
                        } catch (...) {
                            userAnswer = std::numeric_limits<int>::quiet_NaN();
                        }
                        if (userAnswer == correctAnswer) {
                            score++;
                            scoreStr.str("");
                            scoreStr << "Score: " << score;
                            scoreText.setString(scoreStr.str());
                            answerSelected = false;
                            answerStr.str("");
                            // Check if the player's score is a multiple of 5 to display spiders
                            if (score % 5 == 0) {
                                if (score % 15 == 0) {
                                    spider3(window, font);
                                } else if (score % 10 == 0) {
                                    spider2(window, font);
                                } else {
                                    spider1(window, font);
                                }
                            }
                        } else {
                            lives--;
                            livesStr.str("");
                            livesStr << "Lives: " << lives;
                            livesText.setString(livesStr.str());
                            if (lives == 0) {
                                sf::Text finalScoreText("Game Over! Final Score: " + std::to_string(score), font, 30);
                                finalScoreText.setPosition(250, 250);
                                finalScoreText.setFillColor(sf::Color::White);
                                window.clear();
                                window.draw(finalScoreText);
                                window.display();
                                sf::sleep(sf::seconds(3));
                                window.close();
                            }
                            answerSelected = true;
                        }
                    } else if ((enteredChar >= '0' && enteredChar <= '9') || (enteredChar == '-' && answerStr.tellp() == 0)) {
                        // Allow numeric and negative sign input
                        answerStr << enteredChar;
                    }
                }
            }
        }

        window.clear();
        window.draw(questionText);
        window.draw(scoreText);
        window.draw(livesText);
        answerBox.setString(answerStr.str());
        window.draw(answerBox);
        window.display();
    }

    return 0;
}

void spider1(sf::RenderWindow& window, sf::Font& font) {
    // Create spider1 graphic
    sf::Text spiderText("Spider 1", font, 20);
    spiderText.setPosition(500, 200);
    spiderText.setFillColor(sf::Color::White);

    // Draw spider1 on the window
    window.draw(spiderText);
}

void spider2(sf::RenderWindow& window, sf::Font& font) {
    // Create spider2 graphic
    sf::Text spiderText("Spider 2", font, 20);
    spiderText.setPosition(500, 250);
    spiderText.setFillColor(sf::Color::White);

    // Draw spider2 on the window
    window.draw(spiderText);
}

void spider3(sf::RenderWindow& window, sf::Font& font) {
    // Create spider3 graphic
    sf::Text spiderText("Spider 3", font, 20);
    spiderText.setPosition(500, 300);
    spiderText.setFillColor(sf::Color::White);

    // Draw spider3 on the window
    window.draw(spiderText);
}
