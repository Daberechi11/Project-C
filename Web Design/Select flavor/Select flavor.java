const flavorSelect = document.getElementById('flavorSelect');
const body = document.body;
const flavorImage = document.getElementById('flavorImage');

flavorSelect.addEventListener('change', function() {
  const flavor = flavorSelect.value;

  // Reset styles
  body.className = '';
  flavorImage.style.display = 'none';
  flavorImage.style.opacity = '0';

  let imageUrl = '';

  if (flavor === 'chocolate') {
    body.classList.add('chocolate');
    imageUrl = 'https://upload.wikimedia.org/wikipedia/commons/7/70/Chocolate_%28blue_background%29.jpg';
  } else if (flavor === 'strawberry') {
    body.classList.add('strawberry');
    imageUrl = 'https://upload.wikimedia.org/wikipedia/commons/2/29/PerfectStrawberry.jpg';
  } else if (flavor === 'vanilla') {
    body.classList.add('vanilla');
    imageUrl = 'https://t3.ftcdn.net/jpg/01/80/90/22/360_F_180902273_r1Bcjr4PJ7q3pS2aPjKuYH5Lh5Peiw8Q.jpg';
  }

  if (imageUrl) {
    flavorImage.src = imageUrl;
    flavorImage.style.display = 'block';
    setTimeout(() => (flavorImage.style.opacity = '1'), 50);
  }
});
