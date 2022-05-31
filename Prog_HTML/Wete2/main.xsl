<?xml version="1.0" encoding="ISO-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/menu">
  <h2 bgcolor="lightgreen">MENU</h2>
</xsl:template>
<xsl:template match="/product">
  <html>
  <body>
  <h2>Menu</h2>
    <table border="1">
      <tr bgcolor="#9acd32">
        <th bgcolor="red">name</th>
        <th bgcolor="blue">alergens</th>
        <th bgcolor="green">price</th>
        <th bgcolor="black">description</th>
      </tr>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>