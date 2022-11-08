edits = document.getElementsByClassName('edit');
Array.from(edits).forEach((element) => {
    element.addEventListener("click", (e) => {
        console.log("edit");
         tr = e.target.parentNode.parentNode;
         title = tr.getElementById('td1').innerText;
         description = tr.getElementById('td2').innerText;
        console.log(title,description);
        console.log("hello");
    })
});