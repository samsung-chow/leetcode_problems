/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    int mult = 1;
    int num1 = 0;
    int num2 = 0;
    int res = 0;

    while ((*l1).next){
        num1 += (*l1).val * mult;
        mult *= 10;
        l1 = (*l1).next;
    }
    num1 += (*l1).val * mult;
    mult = 1;

    while ((*l2).next){
        num2 += (*l2).val * mult;
        mult *= 10;
        l2 = (*l2).next;
    }
    num2 += (*l2).val * mult;

    res = num1 + num2;

    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    (*result).val = res % 10;
    res /= 10;

    struct ListNode* prev = result;

    while (res != 0){
        struct ListNode* next_num = (struct ListNode*)malloc(sizeof(struct ListNode));
        (*next_num).val = res % 10;
        res /= 10;

        (*prev).next = next_num;
        prev = next_num;
    }
    (*prev).next = NULL;

    return result;

}