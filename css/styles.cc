/* Common styles for all pages */
body {
    background-color: #000000;
    color: #ffffff;
    font-family: 'Roboto', sans-serif;
    margin: 0;
}

.navbar {
    position: sticky;
    top: 0;
    left: 0;
    width: 100%;
    background: #141414;
    z-index: 9;
}

.nav {
    padding: 10px 10vw;
    display: flex;
    justify-content: space-between;
    align-items: center;
}

.brand {
    color: white;
    font-weight: bold;
    font-size: 24px;
}

.nav-items {
    display: flex;
    align-items: center;
}

.search {
    width: 500px;
    display: flex;
}

.search-box {
    width: 80%;
    height: 40px;
    padding: 10px;
    border-radius: 10px 0 0 10px;
    border: 1px solid #d1d1d1;
    background: #222;
    color: #a9a9a9;
    outline: none;
}

.search-btn {
    width: 20%;
    margin-right:20px; 
    height: 61px;
    border: none;
    background: #e50914;
    color: #fff;
    font-size: 15px;
    border-radius: 0 10px 10px 0;
    cursor: pointer;
}

.hero-section {
    width: 100%;
    min-height: calc(100vh - 120px);
    background-image: url('img/goldenengine.jpg');
    background-size: cover;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
}

.hero-section .logo {
    height: 150px;
}

.hero-section .sub-heading {
    margin-top: 10px;
    text-align: center;
    font-size: 35px;
    font-weight: 300;
}

.mega-card {
    width: 100%;
    background-color: #333;
    padding: 20px;
    text-align: center;
    margin: 20px 0;
    border-radius: 10px;
}

.product-container {
    display: flex;
    justify-content: center;
    flex-wrap: wrap;
    margin: 20px;
}

.product-card {
    width: 200px;
    margin: 15px;
    border-color: #b20710;
    border-width:20px;
    border-radius: 5px;
    background-color: #333;
    border-radius: 10px;
    overflow: hidden;
}

.product-image {
    position: relative;
}

.product-thumb {
    width: 100%;
    height: 200px;
    object-fit: cover;
}

.card-btn, .buy-btn {
    padding: 10px;
    width: 90%;
    text-transform: capitalize;
    border: none;
    margin-left: 10px;
    background: #e50914;
    border-radius: 5px;
    transition: 0.3s;
    color:#ffffff;
    cursor: pointer;
}

.card-btn:hover, .buy-btn:hover {
    background: #b20710;
    
}

.product-info {
    padding: 10px;
}

.product-brand {
    text-transform: uppercase;
}

.product-short-des {
    opacity: 0.5;
}

.price {
    font-weight: 900;
    font-size: 20px;
}

.actual-price {
    margin-left: 10px;
    opacity: 0.5;
    text-decoration: line-through;
}

.back-btn {
    margin: 10px;
    padding: 10px;
    background: #e50914;
    color: #fff;
    border: none;
    cursor: pointer;
    border-radius: 5px;
}

.back-btn:hover {
    background: #b20710;
}

.pre-btn, .nxt-btn {
    border: none;
    width: 10vw;
    height: 100%;
    position: absolute;
    top: 0;
    display: flex;
    justify-content: center;
    align-items: center;
    background: linear-gradient(90deg, rgba(20, 20, 20, 0) 0%, #141414 100%);
    cursor: pointer;
    z-index: 8;
}

.pre-btn {
    left: 0;
    transform: rotate(180deg);
}

.nxt-btn {
    right: 0;
}

/* Hide all sections by default */
section {
    display: none;
    padding: 20px;
}

/* Show the active section */
section.active {
    display: block;
}
