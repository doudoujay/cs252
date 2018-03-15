void checkWildCard(char* arg);
void wildcard(char* pre, char* arg);

char** result;
int argLeng = 64;
int argNum = 0;

void checkWildCard(char* arg){
  result = (char **) malloc (argLeng);
  if (strchr(arg, '?') || strchr(arg, '*')){
    // has wild card
    wildcard(NULL, arg);
    //sort here
    for (int i = 0; i < argNum; i++) Command::_currentSimpleCommand->insertArgument(result[i]);

  }
  else {
		Command::_currentSimpleCommand->insertArgument(arg);
	}
  return;
}
void wildcard(char* pre, char* arg){

}
int compare(){

}
