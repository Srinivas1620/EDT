// JavaScript for navigation bar
const createNav = () => {
    let nav = document.querySelector('.navbar');
    nav.innerHTML = `
        <div class="nav">
            <div class="brand">
                <span style="color: white;">DRIVE</span><span style="color: red;">SURE</span>
            </div>
            <div class="nav-items">
                <div class="search">
                    <input type="text" class="search-box" placeholder="Search brand, product">
                    <button class="search-btn">Search</button>
                </div>
                <a href="#"><img src="img/user.png" alt=""></a>
                <a href="#"><img src="img/cart.png" alt=""></a>
                <div class="dropdown">
                    <button class="dropbtn">Menu</button>
                    <div class="dropdown-content">
                        <a href="#home" onclick="showSection('home')">Home</a>
                        <a href="#products" onclick="showSection('products')">Products</a>
                        <a href="#product-detail" onclick="showSection('product-detail')">Product Detail</a>
                        <a href="#checkout" onclick="showSection('checkout')">Checkout</a>
                    </div>
                </div>
            </div>
        </div>
    `;
}

createNav();
