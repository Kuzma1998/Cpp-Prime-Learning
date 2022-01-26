template<typename T>
Blob<T>::Blob() try:
data(std::make_shared<vector<T>()>){

}catch(const std::bad_alloc& e){    
    handle_out_of_momory(e);
}

template<typename T>
BlobPtr<T>::BlobPtr() try: curr(0){
}catch(std:: bad_alloc& e){
    handle_out_of_memory(e);
}

