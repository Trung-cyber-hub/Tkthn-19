/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
int i = 0;
int A = 0;
int B = 0;
int T = 0;
int mangba[5][5][5] = {0};
void hienthi(int a[5][5][5],int);
void dich74hc595(int);
void mo74hc595();
void reset();
void tangz_on();
void tangz_off();
void plane(char, int);
int N = 0;
int Bodem = 0;
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */



/*  HAL_Delay(500);

  for (int s   = 0; s  < 5; ++s ) {
	for (int t  = 0; t < 5; ++t) {
		mangba[s][t][0] = 0;
	}
}
  for (int s   = 1; s  < 5; ++s ) {
	for (int t  = 1; t < 5; ++t) {
		mangba[s][t][0] = 1;
		t++;
	}
	s++;
}
  hienthi(mangba,7);*/

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	 HAL_GPIO_WritePin(Led_BL_GPIO_Port, Led_BL_Pin, 1);
	  /* code cho 3 trang thai cua ledcube*/
	  /* moi~ trang thai duoc dat trong if
	   * xac' dinh trang thai bang bien' dem' N
	   */
	  /*~~bat dau hieu ung 1~~bat dau hieu ung 1~~bat dau hieu ung 1~~bat dau hieu ung 1~~bat dau hieu ung 1~~*/
if(N == 0 || N == 4)
{
	N++;
	for (int z = 0; z < 5; ++z) {
		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 5; ++y) {
				mangba[x][y][z] = 0;
			}
		}
	}/* reset gia tri trong mang? ve' 0 */
	for (int z = 0; z < 5; ++z) {
		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 5; ++y) {
				if(x != 2 && y !=2)
				{
				mangba[x][y][z] = 1;
				}
				y++;
			}
			x++;
		}
	}/* nap gia tri vao mang?*/
	hienthi(mangba, 1);/* chuong trinh con dua gia tri trong mang? ra led*/
	if(N == 5)
	{
		N = 1;
	}
}
if(N == 1 || N == 3)
{
	N++;
	for (int z = 0; z < 5; ++z) {
		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 5; ++y) {
				mangba[x][y][z] = 0;
			}
		}
	}
	for (int z = 0; z < 5; ++z) {
		for (int x = 1; x < 5; ++x) {
			for (int y = 1; y < 5; ++y) {
				mangba[x][y][z] = 1;
				y++;
			}
			x++;
		}
	}
	hienthi(mangba,1 );
}
if(N == 2 )
{
	N++;
	Bodem++;
	for (int z = 0; z < 5; ++z) {
		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 5; ++y) {
				mangba[x][y][z] = 0;
			}
		}
	}

	mangba[2][2][2] = 1;
	hienthi(mangba,1 );
	if(Bodem == 2)
	{
		N = 6;
	}
}/*~~ket thuc hieu ung 1~~ket thuc hieu ung 1~~ket thuc hieu ung 1~~ket thuc hieu ung 1~~ket thuc hieu ung 1~~*/
/*~~bat dau hieu ung 2~~bat dau hieu ung 2~~bat dau hieu ung 2~~bat dau hieu ung 2~~bat dau hieu ung 2~~*/
	if(N == 6)
	{
		Bodem++;
		for (int z = 0; z < 5; ++z) {
			for (int x = 0; x < 5; ++x) {
				for (int y = 0; y < 5; ++y) {
					mangba[x][y][z] = 0;
				}
			}
		}
		hienthi(mangba, 1);
		for (int z = 0; z < 5; ++z) {
			for (int x = 0; x < 5; ++x) {
				for (int y = 0; y < 5; ++y) {
					mangba[x][y][z] = 1;
				}
			}
		}
		hienthi(mangba, 1);
		if(Bodem == 4)
		{
			N = 7;
		}
	}
	/*~~ket thuc hieu ung 2~~ket thuc hieu ung 2~~ket thuc hieu ung 2~~ket thuc hieu ung 2~~ket thuc hieu ung 2~~*/
	/*~~bat dau hieu ung 3~~bat dau hieu ung 3~~bat dau hieu ung 3~~bat dau hieu ung 3~~bat dau hieu ung 3~~*/
if(N == 7)
{
	plane('X',1);
}

  }

  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(Led_BL_GPIO_Port, Led_BL_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, Clock_Pin|Latch_Pin|DS_Pin|BJT1_Pin
                          |BJT2_Pin|BJT3_Pin|BJT4_Pin|BJT5_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : Led_BL_Pin */
  GPIO_InitStruct.Pin = Led_BL_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(Led_BL_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : Clock_Pin DS_Pin */
  GPIO_InitStruct.Pin = Clock_Pin|DS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : Latch_Pin BJT1_Pin BJT2_Pin BJT3_Pin
                           BJT4_Pin BJT5_Pin */
  GPIO_InitStruct.Pin = Latch_Pin|BJT1_Pin|BJT2_Pin|BJT3_Pin
                          |BJT4_Pin|BJT5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void hienthi(int mangba[5][5][5], int Solan){/* Solan la' thoi sang cua mot lan' hien thi*/
	for(int t = 0; t < Solan; t++ )
	{
        for (int z=0; z<5; z++) {
          for (int x=0; x<5; x++) {
            for (int y=0; y<5; y++) {
              dich74hc595(mangba[x][y][z]);
            }
          }
          mo74hc595();
          tangz_on(z);
          HAL_Delay(30); /* thoi gian sang cua moi~ tang' */
          tangz_off(z);
          reset();
      }
	}
}
void dich74hc595(int a)
{
    if (a==0) {
    	HAL_GPIO_WritePin(DS_GPIO_Port, DS_Pin, 0);
    	HAL_GPIO_WritePin(Clock_GPIO_Port, Clock_Pin,0);
    	HAL_GPIO_WritePin(Clock_GPIO_Port, Clock_Pin,1);

    } else if(a==1) {
    	HAL_GPIO_WritePin(DS_GPIO_Port, DS_Pin, 1);
    	HAL_GPIO_WritePin(Clock_GPIO_Port, Clock_Pin,0);
    	HAL_GPIO_WritePin(Clock_GPIO_Port, Clock_Pin,1);
    }
}
void mo74hc595()
{
	  HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, GPIO_PIN_RESET);
}
void reset() {
    for (int t=0; t<25; t++) {
        dich74hc595(0);
    }
    mo74hc595();
}
void tangz_on(int z)
{
	switch (z) {
		case 0:
			HAL_GPIO_WritePin(BJT1_GPIO_Port, BJT1_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(BJT2_GPIO_Port, BJT2_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(BJT3_GPIO_Port, BJT3_Pin, 1);
			break;
		case 3:
			HAL_GPIO_WritePin(BJT4_GPIO_Port, BJT4_Pin, 1);
			break;
		case 4:
			HAL_GPIO_WritePin(BJT5_GPIO_Port, BJT5_Pin, 1);
			break;
		default:
			break;
	}
}
void tangz_off(int z)
{
	switch (z) {
		case 0:
			HAL_GPIO_WritePin(BJT1_GPIO_Port, BJT1_Pin, 0);
			break;
		case 1:
			HAL_GPIO_WritePin(BJT2_GPIO_Port, BJT2_Pin, 0);
			break;
		case 2:
			HAL_GPIO_WritePin(BJT3_GPIO_Port, BJT3_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(BJT4_GPIO_Port, BJT4_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(BJT5_GPIO_Port, BJT5_Pin, 0);
			break;
		default:
			break;
	}
}
void plane(char truc, int Solan)
{
    int mangba[5][5][5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int z = 0; z < 5; z++)
        {
            for (int x = 0; x < 5; x++)
            {
                for (int y = 0; y < 5; y++)
                {
                    mangba[x][y][z] = 0;
                    if (truc == 'X')
                    {
                        mangba[i][y][z] = 1;
                    }
                    if (truc == 'Y')
                    {
                        mangba[x][i][z] = 1;
                    }
                    if (truc == 'Z')
                    {
                        mangba[x][y][i] = 1;
                    }
                }
            }
        }
        hienthi(mangba, Solan);
    }
    for (int i = 3; i >= 0; i--)
    {
        for (int z = 0; z < 5; z++)
        {
            for (int x = 0; x < 5; x++)
            {
                for (int y = 0; y < 5; y++)
                {
                    mangba[4 - x][4 - y][4 - z] = 0;
                    if (truc == 'X')
                    {
                        mangba[i][4 - y][4 - z] = 1;
                    }
                    if (truc == 'Y')
                    {
                        mangba[4 - x][i][4 - z] = 1;
                    }
                    if (truc == 'Z')
                    {
                        mangba[4 - x][4 - y][i] = 1;
                    }
                }
            }
        }
        hienthi(mangba, Solan);
    }
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
