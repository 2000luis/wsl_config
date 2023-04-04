import click

@click.command()
@click.option("--income", prompt="Inserta venta", help="Cantidad de venta")
def finance(income):
    cantidad=int(income)
    mitad=cantidad/2
    mto=int(mitad)
    pago=mto-770
    if cantidad > 1000:
        if cantidad%2==0:
            if mitad>999:
                e=" "
                divider=            "___________________________________________________________"
                mdivid=             "-----------------------------------------------------------"
                header=                      "| Half | Pago |    Invertir    |  OPI  | I+OPI*2 | Gastos |"
                iOPI=pago+int(mto/3)*2
                respuesta=f"| {mto}{e}| $770 | {mto}-770= {str(pago)+e if pago > 999 else str(pago)+e+e}|  {int(mto/3)}  |  ${str(iOPI)+e+e if (iOPI)>999 else str(iOPI)+e+e+e }|  ${int(mto/3)}  |"
                click.echo(divider)
                click.echo(header)
                click.echo(respuesta)
                click.echo(mdivid)
            elif mitad>760:
                e="  "
                e2="   "
                e3="    "
                divider=            "___________________________________________________________"
                mdivid=             "-----------------------------------------------------------"
                header=                      "| Half | Pago |    Invertir    |  OPI  | I+OPI*2 | Gastos |"
                respuesta=f"| {mto}{e}| $770 | {mto}-770 = {str(pago)+e if pago>99 else str(pago)+e2 if pago>9 else str(pago)+e3 }|  {int(mto/3)}  |   {pago+int(mto/3)*2}   |  ${int(mto/3)}  |"
                click.echo(divider)
                click.echo(header)
                click.echo(respuesta)
                click.echo(mdivid)
            else:
                e="  "
                e2="   "
                e3="    "
                divider=            "___________________________________________________________"
                mdivid=             "-----------------------------------------------------------"
                header=                      "| Half | Pago |    Invertir    |  OPI  | I+OPI*2 | Gastos |"
                respuesta=f"| {mto}{e}| $770 | {mto}-770 = {str(pago)+e if pago>99 else str(pago)+e2 if pago>9 else str(pago)+e3 }|  {int(mto/3)}  |   {pago+int(mto/3)*2}   |  ${int(mto/3)}  |"
                click.echo(divider)
                click.echo(header)
                click.echo(respuesta)
                click.echo(mdivid)
        else:
            click.echo( "Seas mamon mete enteros")
    elif cantidad>770:
        divider=    "____________"
        header=     "| Invertir |"
        click.echo(divider)
        click.echo(header)
        click.echo(f"|   {cantidad-770}    |")
    else:
        click.echo(f"Falta {770-cantidad} para completar pago")


if __name__ == "__main__":
    finance()






































