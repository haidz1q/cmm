var images = ["https://laptopaz.vn/media/banner/09_Aprbf39387e3328ce72a13425ff5155f294.jpg", "https://laptopaz.vn/media/banner/27_Feb3f0f2afd60ebd23638c40e604c4f2897.jpg",
    "https://laptopaz.vn/media/banner/13_Marebcfec48f483f123a3559f099e10e6e8.jpg", "https://laptopaz.vn/media/banner/22_Marf1a391c8c48fca0c805c17e2c743086c.jpg"];
var index = 0;

function updateIndex() {
    var dots = document.getElementsByClassName("dot");
    for (var i = 0; i < dots.length; i++) {
        dots[i].className = dots[i].className.replace(" active", "");
    }
    dots[index].className += " active";
}

function next() {
    if(index < images.length - 1) {
        index++;
    } else {
        index = 0;
    }
    document.getElementById("slideshow").src = images[index];
    updateIndex();
}

function prev() {
    if(index > 0) {
        index--;
    } else {
        index = images.length - 1; 
    }
    document.getElementById("slideshow").src = images[index];
    updateIndex();
}

updateIndex();

// Tự động chạy slideshow sau mỗi 1 giây
setInterval(next, 1000);

var products = [
    {img: "https://laptopaz.vn/media/product/250_2928_2912_q410va.jpg", text: "Asus Zenbook 14X OLED", price: "15.190.000VND"},
    {img: "https://laptopaz.vn/media/product/250_2928_2912_q410va.jpg", text: "Asus Zenbook 14X OLED", price: "15.190.000VND"},
    {img: "https://laptopaz.vn/media/product/250_2928_2912_q410va.jpg", text: "Asus Zenbook 14X OLED", price: "15.190.000VND"},
    {img: "https://laptopaz.vn/media/product/250_2928_2912_q410va.jpg", text: "Asus Zenbook 14X OLED", price: "15.190.000VND"},
    {img: "https://laptopaz.vn/media/product/250_2935_", text: "DELL Vostro 5630", price: "27.430.000 VND"},
    {img: "https://laptopaz.vn/media/product/250_2935_", text: "DELL Vostro 5630", price: "27.430.000 VND"},
    {img: "https://laptopaz.vn/media/product/250_2935_", text: "DELL Vostro 5630", price: "27.430.000 VND"},
    {img: "https://laptopaz.vn/media/product/250_2935_", text: "DELL Vostro 5630", price: "27.430.000 VND"}
];

var container = document.getElementById("product-container");

for (var i = 0; i < products.length; i++) {
    var productDiv = document.createElement("div");
    productDiv.className = "product";

    productDiv.onmouseover = function() {
        this.style.backgroundColor = "#f8f8f8";
    };
    productDiv.onmouseout = function() {
        this.style.backgroundColor = "red";
    };

    var img = document.createElement("img");
    img.src = products[i].img;

    var p = document.createElement("p");
    p.textContent = products[i].text;

    var price = document.createElement("p");
    price.textContent = products[i].price;
    price.className = "price";

    var buyNow = document.createElement("div");
    buyNow.textContent = "MUA NGAY";
    buyNow.className = "buy-now";
    buyNow.onclick = function() {
        var name = prompt("Nhập Họ tên:");
        var email = prompt("Nhập Email:");
        var phone = prompt("Nhập Số Điện Thoại:");
        var address = prompt("Nhập Địa Chỉ:");

        if (!name || !email || !phone || !address) {
            console.log("Vui lòng không để trống thông tin.");
            return;
        }

        if (!email.includes("@") || !email.includes(".")) {
            console.log("Email không hợp lệ.");
            return;
        }

        if (!phone.startsWith("0") || phone.length != 10) {
            console.log("Số Điện Thoại không hợp lệ.");
            return;
        }

        alert("Đặt hàng thành công!");
    };

    productDiv.appendChild(img);
    productDiv.appendChild(p);
    productDiv.appendChild(price);
    productDiv.appendChild(buyNow);

    container.appendChild(productDiv);
}

