#include <iostream>
using namespace std;
class GuessWord;
class Action {
public:
    virtual void run(GuessWord* guess_word) = 0;
static:
    static count = 0;
    if(count == 10)
    {
        cout << "You are dead!";
    }
};

class GuessWord {
    std::string word;
    std::string hidden_word;
public:
    GuessWord(const std::string& word);
    void guess_char(char chr);
    bool have_won();
    void reveal_letter(int index);
    void set_word(const std::string& word);
    void show_hidden_word();
};
GuessWord::GuessWord(const std::string& word) {
    set_word(word);
}
void GuessWord::guess_char(char chr) {
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == chr && hidden_word[i] == '*') {
        reveal_letter(i);
        }
    }
}
bool GuessWord::have_won() {
    return word == hidden_word;
}
void GuessWord::reveal_letter(int index) {
    if (index >= 0 && index < word.size()) {
    hidden_word[index] = word[index];
    }
}
void GuessWord::set_word(const string& word) {
    this->word = word;
    this->hidden_word.clear();
    for (int i = 0; i < word.size(); i++)
    hidden_word.push_back('*');
}
void GuessWord::show_hidden_word() {
    cout << "WORD: " << hidden_word << endl;
}
int main(int argc, char** argv) {
// Programuojate jus
    cout << "You can use command GuessLetter to guess the letter of the word" << endl;
    cout << "You can use command GuessWord to guess the word" << endl;
    cout << "You can use command RevealLetter to reveal one of the letters (you can use it only twice)" << endl;
    cout << "You can use command RevealRandom to reveal the random letter of the word (you can use it only twice)" << endl;
    cout << "If you miss 10 times, you gonna lose the game" << endl;

}
