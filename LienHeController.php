<?php

class LienHeController
{
    //Kết nối file moddel
    public $modelLienHe;

    public function __construct()
    {
        $this->modelLienHe = new LienHe();
    }
    //Hiển thị danh sách liên hệ 
    public function index(){
        //Lấy ra dữ liệu liên hệ
        $danhSachLienHe = $this -> modelLienHe -> getAllLienHe();
        // var_dump($lienHe);

        //Đưa dữ liệu ra view
        require_once './views/lienhe/listlienhe.php';
    }

    //Hàm hiển thị form thêm
    public function create(){
        require_once './views/lienhe/create_lien_he.php';
          

    }

    //Hàm xử lý thêm vào csdl
    public function store(){
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            // lấy ra dữ liệu
            $ten = $_POST['ten'];
            $email = $_POST['email'];
            $so_dien_thoai = $_POST['so_dien_thoai'];
            $ngay_tao = $_POST['ngay_tao'];
            // var_dump($email)

            // validate
            $errors = [];
       
            if(empty($ten)){
                $errors['ten'] = 'Bạn phải nhập tên liên hệ' ;
            }
            if (empty($email)) {
               $errors['email'] = 'Bạn phải nhập email';
            }
            if(empty($so_dien_thoai)){
                $errors['so_dien_thoai'] = 'Bạn phải nhập số điện thoại liên hệ' ;
            }
            if(empty($ngay_tao)){
                $errors['ngay_tao'] = 'Bạn phải nhập ngày tạo liên hệ' ;
            }
            if (empty($errors)) {
                # nếu không có lỗi thì thêm dữ liệu
                $this->modelLienHe->postData($ten, $email, $so_dien_thoai, $ngay_tao);
                unset($_SESSION['errors']);
                header('Location: ?act=lien-he');
                exit();
            }else{
                $_SESSION['errors'] = $errors;
                header('Location: ?act=form-add-lien-he');
                exit();
            }
        }


    }

    //Hàm hiển thị form sửa
    public function edit(){
        //lấy id
        $id = $_GET['lien_he_id'];
        // lấy thông tin chi tiết của danh mục
        $lienHe = $this -> modelLienHe->getDeltailData($id);
        require_once './views/lienhe/edit_lien_he.php';
        // var_dump($lienHe);



    }

    //Hàm xử lý cập nhật dữ liệu vào csdl
    public function update(){
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            // lấy ra dữ liệu
            $id = $_POST['id'];
            $ten = $_POST['ten'];
            $email = $_POST['email'];
            $so_dien_thoai = $_POST['so_dien_thoai'];
            $ngay_tao = $_POST['ngay_tao'];
            // var_dump($email)

            // validate
            $errors = [];
       
            if(empty($ten)){
                $errors['ten'] = 'Bạn phải nhập tên liên hệ' ;
            }
            if (empty($email)) {
               $errors['email'] = 'Bạn phải nhập email';
            }
            if(empty($so_dien_thoai)){
                $errors['so_dien_thoai'] = 'Bạn phải nhập số điện thoại liên hệ' ;
            }
            if(empty($ngay_tao)){
                $errors['ngay_tao'] = 'Bạn phải nhập ngày tạo liên hệ' ;
            }
            if (empty($errors)) {
                # nếu không có lỗi thì thêm dữ liệu
                $this->modelLienHe->updateData($id, $ten, $email, $so_dien_thoai, $ngay_tao);
                unset($_SESSION['errors']);
                header('Location: ?act=lien-he');
                exit();
            }else{
                $_SESSION['errors'] = $errors;
                header('Location: ?act=form-update-lien-he');
                exit();
            }
        }

    }

    //Hàm xử lý xóa dữ liệu vào csdl
    public function destroy(){
        if($_SERVER['REQUEST_METHOD'] == 'POST'){
            $id = $_POST['lien_he_id'];

            //xóa danh mục
          $this->modelLienHe->deleteData($id);
            header('Location: ?act=lien-he');
            exit();
    }

}
}