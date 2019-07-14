
let initialList: ShoppingList.t = {
    items: [||]
};

ReactDOMRe.renderToElementWithId(<ShoppingList initialList=initialList.items />, "shopping-list");
