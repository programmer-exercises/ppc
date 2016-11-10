#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int people;
	int consumption;
	struct node *next;
	struct node *prev;
}Node;

typedef struct list
{
	Node *head;
	Node *tail;
}List;


Node *init(int x, int y) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->people = x;
	node->consumption = y;
	node->next = node->prev = NULL;
	return node;
}

void insert(List *list, int x, int y) {
	Node *node = init(x,y);
	
	if(list->head == NULL) {
		list->head = list->tail = node;
	}else if(y < list->head->consumption) {
		node->next = list->head;
		list->head->prev = node;
		list->head = node; 
	}else if(y > list->tail->consumption){
		list->tail->next = node;
		node->prev = list->tail;
		list->tail = node;
	}else {
		Node *temp = list->head;

		while(temp) {
			if(y == temp->consumption){
				temp->people += x;
				break;
			}

			if(y > temp->consumption) {
				temp = temp->next;
			}else{
				node->prev = temp->prev;
				temp->prev->next = node; 
				node->next = temp;
				temp->prev = node;
				break;
			}
		}
	}
}

void print_result(List *list, float avarage, int n) {
	Node *print_list = list->head;

	// Não arredondar numeros floats
	int aux = avarage * 100;
	avarage = aux / 100.00;

	if(n!=1)
		puts("");

	printf("Cidade# %d\n", n);

	while(print_list) {
		printf("%d-%d ", print_list->people, print_list->consumption);
		print_list = print_list->next;
	}
	puts("");
	printf("Consumo medio: %.2lf m3.\n", avarage);
}

int main() {
	List *list = (List*)malloc(sizeof(List));
	list->head = list->tail = NULL;
	int p = 1;
	int x, y, i, n = 1;
	float total_x = 0;
	float total_y = 0;
	float avarage;
	int consumption_person;

	while(scanf("%d", &p)) {

		if(p < 1 || p > 1000000){
			return 0;
		}

		for(i = 0; i < p; i++) {
			scanf("%d %d", &x, &y);

			if(x < 1 || x > 10){
				break;
			}

			if(y < 1 || y > 200){
				break;
			}

			total_y += y;
			total_x += x;

			consumption_person = y / x;
			insert(list, x, consumption_person);
		}

		avarage = total_y / total_x*1.0;
		print_result(list, avarage, n);
		n++;
		total_x = total_y = 0;
		list->head = list->tail = NULL;
	}
	return 0;
}
