# включити  < iostream >
# включити <ctime> _ _

використання  простору імен  std ;
int  main () {
  int counter=- 1 , N= 100 ;
  int array[N];

  srand ( час ( NULL ));
  for ( int i= 0 ;i<N;i++){
    array[i] = rand ()% 100 ;
  }
  cout << " Вхідний масив: " << endl;
  for ( int i= 0 ;i<N;i++){
    if (i==N- 1 ){
      cout << array[i] << endl;
    } ще {
      cout << array[i] << " , " ;
    }
  }
  for ( int i= 0 ;i<N;i++){
    if (array[i]== 0 ){
      лічильник = i;
      розрив ;
    }
  }
  якщо (лічильник==- 1 ){
    cout << " У даному масиві нульові елементи відсутні " ;
  } ще {
    cout << " Перший нульовий елемент знаходиться на позиції: " << counter+ 1 ;
  }
}
