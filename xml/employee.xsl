﻿<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
  <xsl:template match="/">
  <html>
  <body>
  <h2>Employee</h2>
  <table border="1">
<tr bgcolor="red">
<th>Fullname</th>
<th>Designation</th>
<th>Address</th>
</tr>  
<xsl:for-each select="company/employee">
<tr>
<td><xsl:value-of select="fullname"/></td>
<td><xsl:value-of select="designation"/></td>
<td><xsl:value-of select="address"/></td>
</tr>
</xsl:for-each>
  </table>
  </body>
  </html>
  </xsl:template>
</xsl:stylesheet>