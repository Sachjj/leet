let circle = document.querySelector('.circle');
let list = document.querySelector('.image-list');
let items = document.querySelectorAll('.image-list .image-item');
let count = items.length;
let active = 1;
let leftTransform = 0;
let width_item = items[active].offsetWidth;


//////////////////////////////////////////////////////////////////////
// Set Text on a Circle
let textCircle = circle.innerText.split('');
circle.innerText = '';
textCircle.forEach((value, key) => {
    let newSpan =  document.createElement("span");
    newSpan.innerText = value;
    let rotateThisSpan = (360 / textCircle.length) * (key + 1);
    newSpan.style.setProperty('--rotate', rotateThisSpan + 'deg');
    circle.appendChild(newSpan); 
});

const menu = document.querySelector('#mobile-menu')
const menuLinks = document.querySelector('.navbar_menu')

//dislplay mobile menu

const mobileMenuFunc = () => {
    menu.classList.toggle('is-active')
    menuLinks.classList.toggle('active')
}

menu.addEventListener('click', mobileMenuFunc)

const initSlider = () => {
    const slideButtons = document.querySelectorAll(".slider-wrapper .slide-button");
    const imageList = document.querySelector(".slider-wrapper .image-list");
    const sliderScrollbar = document.querySelector(".pic_container .slider-scrollbar");
    //const scrollbarThumb = sliderScrollbar.querySelector(".scrollbar-thumb");
    const maxScrollLeft = imageList.scrollWidth - imageList.clientWidth;


    slideButtons.forEach(button => {
        button.addEventListener("click", () => {
            const direction = button.id === "prev-slide" ? -1 : 1;
            const scrollAmount = imageList.clientWidth * direction;
            imageList.scrollBy({left:scrollAmount, behaviour: "smooth"});
        });
    });

    const handleSlideButtons = () => {
        slideButtons[0].style.color = imageList.scrollLeft <= 0 ? "grey" : "black"
        slideButtons[1].style.color = imageList.scrollLeft >= maxScrollLeft ? "grey" : ""
    }

    //const updateScrollThumbPosition = () => {
    //    const scrollPosition = imageList.scrollLeft;
    //    const thumbPosition = (scrollPosition/maxScrollLeft) * (sliderScrollbar.clientWidth - scrollbarThumb.offsetWidth);
    //    scrollbarThumb.style.left = `${thumbPosition}px`;
    //}

    imageList.addEventListener("scroll", () => {
        handleSlideButtons();
        //updateScrollThumbPosition();
    })
}

window.addEventListener("load", initSlider)