#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

bool ReadLine(std::string& str);

unsigned StringToTokensWS(std::vector<std::string>& tokens);

void AnalyzeTokens(const std::vector<std::string>& tokens);

#endif