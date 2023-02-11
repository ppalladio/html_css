// console.log('hl');

const h1 = document.querySelector('.primary-heading');

const btnNav = document.querySelector('.btn-mobile-nav');

const headerEl = document.querySelector('.header');

btnNav.addEventListener('click', (_e) => {
    headerEl.classList.toggle('nav-open');
});
// Fixing flexbox gap property missing in some Safari versions
function checkFlexGap() {
    const flex = document.createElement('div');
    flex.style.display = 'flex';
    flex.style.flexDirection = 'column';
    flex.style.rowGap = '1px';

    flex.appendChild(document.createElement('div'));
    flex.appendChild(document.createElement('div'));

    document.body.appendChild(flex);
    var isSupported = flex.scrollHeight === 1;
    flex.parentNode.removeChild(flex);
    console.log(isSupported);

    if (!isSupported) document.body.classList.add('no-flexbox-gap');
}
checkFlexGap();
