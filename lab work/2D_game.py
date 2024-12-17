import pygame
import random

# Initialize Pygame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("2D Game")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)

# Clock
clock = pygame.time.Clock()
FPS = 200
# Player settings
player_size = 50
player_x = WIDTH // 2
player_y = HEIGHT - player_size - 10
player_speed = 5

# Obstacle settings
obstacle_width = 50
obstacle_height = 50
obstacle_speed = 5
obstacle_list = []

# Score
score = 0
font = pygame.font.Font(None, 36)

# Function to create obstacles
def create_obstacle():
    x = random.randint(0, WIDTH - obstacle_width)
    y = -obstacle_height
    return [x, y]

# Function to move obstacles
def move_obstacles(obstacles):
    for obstacle in obstacles:
        obstacle[1] += obstacle_speed
    return [obs for obs in obstacles if obs[1] < HEIGHT]

# Function to detect collisions
def detect_collision(player_x, player_y, obstacles):
    for obs in obstacles:
        if (player_x < obs[0] + obstacle_width and
            player_x + player_size > obs[0] and
            player_y < obs[1] + obstacle_height and
            player_y + player_size > obs[1]):
            return True
    return False

# Game loop
running = True
while running:
    screen.fill(WHITE)
    
    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Player movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and player_x > 0:
        player_x -= player_speed
    if keys[pygame.K_RIGHT] and player_x < WIDTH - player_size:
        player_x += player_speed

    # Generate obstacles
    if random.randint(1, 20) == 1:
        obstacle_list.append(create_obstacle())
    obstacle_list = move_obstacles(obstacle_list)

    # Draw player
    pygame.draw.rect(screen, BLUE, (player_x, player_y, player_size, player_size))

    # Draw obstacles
    for obs in obstacle_list:
        pygame.draw.rect(screen, RED, (obs[0], obs[1], obstacle_width, obstacle_height))

    # Check for collisions
    if detect_collision(player_x, player_y, obstacle_list):
        running = False

    # Update score
    score += 1
    score_text = font.render(f"Score: {score}", True, BLACK)
    screen.blit(score_text, (10, 10))

    # Refresh screen
    pygame.display.flip()
    clock.tick(FPS)

# Game over 
screen.fill(WHITE)
game_over_text = font.render("Game Over!", True, RED)
final_score_text = font.render(f"Final Score: {score}", True, BLACK)
screen.blit(game_over_text, (WIDTH // 2 - 100, HEIGHT // 2 - 50))
screen.blit(final_score_text, (WIDTH // 2 - 100, HEIGHT // 2))
pygame.display.flip()
pygame.time.wait(3000)

# Quit Pygame
pygame.quit()
