// JavaScript to show and hide sections
const showSection = (id) => {
    const sections = document.querySelectorAll('section');
    sections.forEach(section => {
        section.classList.remove('active');
    });
    document.getElementById(id).classList.add('active');
}

// Show the home section by default
document.addEventListener('DOMContentLoaded', () => {
    showSection('home');
});
