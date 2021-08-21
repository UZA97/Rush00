# Pygame-Chim

import pygame
from random import*

#from pygame import display

# 레벨에 맞게 설정
def setup(level):
    global display_time
    # 얼마동안 숫자를 보여줄것인가?
    display_time = 5 -(level // 3)
    display_time = max(display_time,1) # 1초 미만이면 1초로 처리

    #얼마나 많은 숫자를 보여줄 것인가?
    number_count = (level//2)+5
    number_count = min(number_count,25) # 만약 20을 초과하면 20으로 처리

    # 실제 화면에 grid 형태로 숫자를 랜덤으로 배치
    shuffle_grid(number_count)

# *Shuffle*
def shuffle_grid(number_count):
    rows = 5
    columns = 9

    cell_size = 130 # 각 Grid cell 별 가로, 세로 크기
    button_size = 110 # 각 Grid cell 내에 실제로 그려질 버튼 크기
    screen_left_margin = 55 # 전체 스크린 왼쪽 여백
    screen_top_margin = 20 # 전체 스크린 위쪽 여백

    # [[0,0,0,0,0,0,0,0,0],
    # [0,0,0,0,0,0,0,0,0],
    # [0,0,0,0,0,0,0,0,0],
    # [0,0,0,0,0,0,0,0,0],
    # [0,0,0,0,0,0,0,0,0]]
    grid = [[0 for col in range(columns)] for row in range(rows)]

    number = 1 # start number 1 to number_count

    while number <= number_count:
        row_idx = randrange(0,rows) # 0,1,2,3,4,중에서 랜덤으로 뽑기
        col_idx = randrange(0,columns) # 0~8 중에서 랜덤으로 뽑기

        if grid[row_idx][col_idx] == 0:
            grid[row_idx][col_idx] = number # 숫자 지정
            number += 1

            # 현재 gird cell 위치 기준으로 x,y위치를 구함
            center_x = screen_left_margin + (col_idx * cell_size) +(cell_size / 2)
            center_y = screen_top_margin + (row_idx * cell_size) +(cell_size/ 2)

            # 숫자버튼 그리기
            button = pygame.Rect(0,0,button_size,button_size)
            button.center=(center_x,center_y)

            number_buttons.append(button)

    # 배치된 랜덤숫자 확인
    print(grid)

def display_start_screen():
    pygame.draw.circle(screen,WHITE,start_button.center,60,5)
    # 흰색으로 동그라미를 그리는데 중심좌표는 start_button의 중심좌표를 따라가고,
    # 반지름은 60, 선 두께는 5

# 게임 화면 보여주기
def display_game_screen():
    global hidden, start_ticks

    if not hidden:
        elapsed_time = (pygame.time.get_ticks() - start_ticks) / 1000 # ms -> sec
        if elapsed_time > display_time:
            hidden = True

    for idx, rect in enumerate(number_buttons,start=1):
        if hidden: # 숨김 처리
            #버튼 사각형 그리기
            pygame.draw.rect(screen,GRAY,rect)
        else:
            # 실제 숫자 텍스트
            cell_text = game_font.render(str(idx),True,WHITE)
            text_rect = cell_text.get_rect(center=rect.center)
            screen.blit(cell_text,text_rect)

# pos에 해당하는 버튼 확인
def check_buttons(pos):
    global start, start_ticks

    if start : # 게임이 시작했으면?
        check_number_buttons(pos)
    elif start_button.collidepoint(pos):
        start = True
        start_ticks = pygame.time.get_ticks() # 타이머 시작 (현재 시간을 저장)

def check_number_buttons(pos):
    global hidden,start,curr_level

    for button in number_buttons:
        if button.collidepoint(pos):
            if button == number_buttons[0]: # 올바른 숫자 클릭
                print("Correct")
                del number_buttons[0]
                if not hidden:
                    hidden = True # 숫자 숨김 처리
            else: # 잘못된 숫자 클릭
                game_over()
            break

    # 모든 숫자를 다 맞추었다면 레벨Up -> 다시 시작 화면으로
    if len(number_buttons) ==0:
        start = False
        hidden = False
        curr_level +=1
        setup(curr_level)

# 게임 종료 처리. 메시지도 보여줌
def game_over():
    global running
    running = False
    msg = game_font.render(f"Your level is {curr_level}",True,WHITE)
    msg_rect = msg.get_rect(center=(screen_width/2, screen_height/2))
    
    screen.fill(BLACK)
    screen.blit(msg,msg_rect)

#초기화
pygame.init()
screen_width = 1280 # 가로
screen_height = 720 # 세로
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Memory Game")
game_font=pygame.font.Font(None,120) # 폰트 정의

# Start button
start_button = pygame.Rect(0,0,120,120)
start_button.center = (120,screen_height - 120)

# Color
BLACK = (0,0,0)
WHITE = (255,255,255)
GRAY = (50,50,50)

number_buttons =[] # 플레이어가 눌러야 하는 버튼들
curr_level = 1 # 현재 레벨
display_time = None # 숫자를 보여주는 시간
start_ticks = None # 시간 계산 (현재 시간 정보를 저장)

# 게임 시작 여부
start = False
# 숫자 숨김 여부 (사용자가 1을 클릭했거나, 보여주는 시간 초과헀을 때)
hidden = False

# 게임 시작전 레벨 설정
setup(curr_level)

#게임 루프
running = True # 게임이 실행중인가?
while running:
    click_pos = None


    #event loop
    for event in pygame.event.get(): # 어떤 이벤트가 발생하였는가?
        if event.type == pygame.QUIT: # 창이 닫히는 event
            running = False          # Game Over.
        elif event.type == pygame.MOUSEBUTTONUP: # 클릭했을때
            click_pos = pygame.mouse.get_pos()
            print(click_pos)

    # 화면 전체를 까맣게 칠함
    screen.fill(BLACK)

    if start: 
        display_game_screen() # 게임화면 표시
    else:  
        display_start_screen() # Start Screen

    # 사용자가 클릭한 좌표값이 있다면(어딘가 클릭했다면)
    if click_pos:
        check_buttons(click_pos)

    # Screen Update
    pygame.display.update()

# 5초 정도 delay
pygame.time.delay(5000)

#Game Over
pygame.quit()