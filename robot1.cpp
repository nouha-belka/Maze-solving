#include <iostream>
#include <string>

int main() {
    bool allreplaced = false;
    std::string inputString = "LBLBSLBS";
    std::string searchString;
    std::string replaceString;
    

     while (!allreplaced){
        size_t pos = inputString.find("LBS");
        if(pos != std::string::npos){
            replaceString = "LBS";
            inputString.replace(pos, replaceString.length(), "R");
        }else{
            size_t pos = inputString.find("LBR");
            if(pos != std::string::npos){
                replaceString = "LBR";
                inputString.replace(pos, replaceString.length(), "B");
            }else{
                size_t pos = inputString.find("RBL");
                if(pos != std::string::npos){
                    replaceString = "RBL";
                    inputString.replace(pos, replaceString.length(), "B");
                }else{
                    size_t pos = inputString.find("SBL");
                    if(pos != std::string::npos){
                        replaceString = "SBL";
                        inputString.replace(pos, replaceString.length(), "R");
                    }else{
                        size_t pos = inputString.find("SBS");
                        if(pos != std::string::npos){
                            replaceString = "SBS";
                            inputString.replace(pos, replaceString.length(), "B");
                        }else{
                            size_t pos = inputString.find("LBL");
                            if(pos != std::string::npos){
                                replaceString = "LBL";
                                inputString.replace(pos, replaceString.length(), "S");
                            }else{
                                allreplaced = true;
                            }
                        }
                    }
            
                }
            }
        }
     }
    std::cout << "Modified string: " << inputString << std::endl;

    return 0;

}