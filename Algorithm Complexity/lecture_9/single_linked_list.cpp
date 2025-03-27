#include <iostream>
using namespace std;

struct SingleNode {
    int value;
    SingleNode* next;
};

struct SingleLinkedList {
    SingleNode* head;
    int size;
};

//initialize list
SingleLinkedList* initialize_single_linked_list() {
    SingleLinkedList* single_linked_list = new SingleLinkedList{};
    single_linked_list->head = nullptr;
    single_linked_list->size = 0;
    return single_linked_list;
}

//insert element    
void insert_element_in_single_linked_list_FRONT(SingleLinkedList* single_linked_list, int value_of_element_to_be_inserted) {
    SingleNode* node_with_element_to_be_inserted = new SingleNode{};
    node_with_element_to_be_inserted->value = value_of_element_to_be_inserted;
    node_with_element_to_be_inserted->next = single_linked_list->head;

    single_linked_list->head = node_with_element_to_be_inserted;
    single_linked_list->size++; //got bigger
}

void insert_element_in_single_linked_list_END(SingleLinkedList* single_linked_list, int value_of_element_to_be_inserted) {
    if(single_linked_list->head == nullptr) {
        insert_element_in_single_linked_list_FRONT(single_linked_list, value_of_element_to_be_inserted); //same shit
    } else {
        SingleNode* node_with_element_to_be_inserted = new SingleNode{};
        node_with_element_to_be_inserted->value = value_of_element_to_be_inserted;
        node_with_element_to_be_inserted->next = nullptr;

        SingleNode* temporary_node = single_linked_list->head;
        while(temporary_node->next != nullptr) {
            temporary_node = temporary_node->next; //looks for "1 position" after the very last one
        }
        temporary_node->next = node_with_element_to_be_inserted; //inserts it after the last one
        single_linked_list->size++; //got bigger
    }
}

//remove elements
void remove_element_from_single_linked_list_FRONT(SingleLinkedList* single_linked_list) {
    if(single_linked_list->head == nullptr) {
        return; //nothing to be removed
    } else {
        single_linked_list->head = single_linked_list->head->next;
        single_linked_list->size--; //got smaller
    }
}

void remove_element_from_single_linked_list_END(SingleLinkedList* single_linked_list) {
    if(single_linked_list->head == nullptr) {
        return; //nothing to be removed
    } else {
        SingleNode* temporary_node = new SingleNode{};
        temporary_node = single_linked_list->head;
        while(temporary_node->next != nullptr) {
            temporary_node = temporary_node->next;
        }
        delete temporary_node;
        single_linked_list->size--;
    }
}

    //search for some shit
    bool search_for_element_in_single_linked_list(SingleLinkedList* single_linked_list , int value_of_element_being_searched) {
        if(single_linked_list->head == nullptr) {
            return false; //nothing in the list
        } else {
            SingleNode* temporary_node = new SingleNode{};
            temporary_node = single_linked_list->head;

            while(temporary_node->next != nullptr) {
                if (temporary_node->value == value_of_element_being_searched) {
                    return true;
                }
                temporary_node = temporary_node->next;
            }
            return false; //not found
        }
    }

    