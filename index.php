<!DOCTYPE html>
<html>
<body>

<div id="demo">
</div>

<script>
function loadDoc() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("demo").innerHTML =
      this.responseText;
    }
  };
  xhttp.open("GET", "file.txt", true);
  xhttp.send();
}
loadDoc();
setInterval("loadDoc()", 5000);
</script>

</body>
</html>

