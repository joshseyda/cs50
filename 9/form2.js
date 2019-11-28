$(document).ready(function() {

  $("#registration").submit(function() {

      if (!$("#registration input[name=email]").val())
      {
          alert("missing email");
          return false;
      }
      else if (!$("#registration input[name=password]").val())
      {
          alert("missing password");
          return false;
      }
      else if ($("#registration input[name=password]").val() != $("#registration input[name=confirmation]").val()) 
      {
          alert("passwords don't match");
          return false;
      }
      else if (!$("#registration input[name=agreement]").is(":checked")) 
      {
          alert("checkbox unchecked");
          return false;
      }
      return true;

  });

});
