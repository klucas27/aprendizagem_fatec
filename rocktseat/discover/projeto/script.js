// Rolagem suave para âncoras no menu
document.querySelectorAll('nav ul li a').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
        e.preventDefault(); // Previne o comportamento padrão do link

        const targetId = this.getAttribute('href');
        const targetElement = document.querySelector(targetId);
        
        // Rolagem suave
        targetElement.scrollIntoView({
            behavior: 'smooth'
        });
    });
});
