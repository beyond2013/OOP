let xPos = [];
let yPos =[];

let score = 0;

let startX = 0;
let startY = 250;

let fruitX = 400;
let fruitY = 400;

let diff = 10;
let direction = 'right';
let segments = 10;
let fps = 10;

function setup()
{
	createCanvas(500, 500);
	stroke(255);
	strokeWeight(10);
	for(i = 0;i < segments;i++)
	{
		xPos.push(startX + i * diff);
		yPos.push(startY);
	}	
}

function drawSnake()
{
	for(i = 0;i <  segments - 1 ;i++)
	{
		line(xPos[i],  yPos[i],  xPos[i+1] ,yPos[i+1]);
	}
}

function moveSnake()
{
	for(i = 0;i <  segments - 1 ;i++)
	{
		xPos[i] = xPos[i+1];
		yPos[i] = yPos[i+1];
	
		switch(direction)
		{
			case 'right':
				xPos[segments -1] = xPos[segments-2] + diff;
				yPos[segments -1] = yPos[segments-2];
			
			break;
			case 'left':
				xPos[segments -1] = xPos[segments-2] - diff;
				yPos[segments -1] = yPos[segments-2];			
			break;
			case 'up':
				xPos[segments -1] = xPos[segments-2];
				yPos[segments -1] = yPos[segments-2] - diff;			
			break;
			case 'down':
				xPos[segments -1] = xPos[segments-2];
				yPos[segments -1] = yPos[segments-2] + diff;			
			break;

		}		
	}
}

function draw()
{
	frameRate(fps);
	background(0);
	moveSnake();
	drawSnake();
	
	if(xPos[segments - 1] > width ||
	xPos[segments - 1]  < 0 ||
	yPos[segments - 1] > height ||
	yPos[segments - 1]  < 0
	)
	{
		noLoop();
	}
	
	if(xPos[xPos.length - 1] == fruitX && yPos[yPos.length - 1] == fruitY)
	{
	fps += 2;
		score++;
		segments++;
		fruitX = floor(random(10, width - 100) / 10) * 10;
		fruitY = floor(random(10, width - 100) / 10) * 10;	
	}
	
	point(fruitX, fruitY);
}


function keyPressed()
{
	switch(keyCode)
	{
		case 87:
		if(direction != 'down')
			direction = 'up';
		break;
		case 68:
		if(direction != 'left')
			direction = 'right';
		break;
		case 65:
		if(direction != 'right')
			direction = 'left';
		break;
		case 83:
		if(direction != 'up')
			direction = 'down';
		break;

	}
}
