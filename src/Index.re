
let initialList: ShoppingList.t = {
    items: [||]
};

ReactDOMRe.renderToElementWithId(<ShoppingList shoppingList=initialList />, "shopping-list");
