#include <stdio.h>

int main(void)
{
	/*
	10만 원 이상 구매하고, 회원이라면 ( 100,000 이상 구매로 사은품이 증정됩니다. 50,000 이상 구매 회원은 배송비도 무료입니다! )
	10만 원 이상 구매했지만 회원이 아니라면 ( 100,000 이상 구매로 사은품이 증정됩니다. 비회원은 배송비 5,000 원 부과됩니다. )

	5만원 이상 구매하고, 회원이라면 ( 회원 50,000 이상 구매 고객은 배송비 무료입니다. )
	5만원 이상 구매했지만 비회원이라면 ( 비회원은 배송비 5,000 원 부과됩니다. )

	구매금액이 5만원 미만이라면 ( 구매금액이 50,000 원 미만입니다. 배송비 5,000원 부과됩니다.)
	*/

	int memberCheck, purchaseAmount;

	printf("회원이라면 1을, 비회원이라면 0을 넣어주세요. ");
	scanf_s("%d", &memberCheck);

	printf("구매금액을 입력해주세요. ");
	scanf_s("%d", &purchaseAmount);

	if (purchaseAmount < 50000) {
		printf("구매금액이 50,000 원 미만입니다. 배송비 5,000 원 부과됩니다.");
	}
	else if (memberCheck == 1) {
		if (purchaseAmount >= 100000) {
			printf("100,000 원 이상 구매로 사은품이 증정됩니다. 50,000 원 이상 구매 회원은 배송비도 무료입니다!");
		}
		else {
			printf("회원 50,000 이상 구매 고객은 배송비 무료입니다.");
		}
	}
	else {
		if (purchaseAmount >= 100000) {
			printf("100,000 원 이상 구매로 사은품이 증정됩니다. 비회원은 배송비 5,000 원 부과됩니다.");
		}
		else {
			printf("비회원은 배송비 5,000 원 부과됩니다.");
		}
	}

	return 0;
}