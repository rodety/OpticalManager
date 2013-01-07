/****************************************************************************
*
*  Copyright (C) 2002-2012 Helta Kft. / NociSoft Software Solutions
*  All rights reserved.
*  Author: Norbert Szabo
*  E-mail: norbert@nocisoft.com, office@nocisoft.com
*  Web: www.nocisoft.com
*
*  This file is part of the NCReport Report Generator System
*
*  Licensees holding a valid NCReport License Agreement may use this
*  file in accordance with the rights, responsibilities, and obligations
*  contained therein. Please consult your licensing agreement or contact
*  norbert@nocisoft.com if any conditions of this licensing are not clear
*  to you.
*
*  This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
*  WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*
****************************************************************************/

#ifndef NCREPORTPRINTEROUTPUT_H
#define NCREPORTPRINTEROUTPUT_H

#include "ncreportoutput.h"
#include "sharedlib_global.h"

QT_BEGIN_NAMESPACE
class QPrinter;
QT_END_NAMESPACE

/*!
Printer output class.
*/
class NCREPORT_LIB_API NCReportPrinterOutput : public NCReportOutput
{
	Q_OBJECT
public:
	NCReportPrinterOutput( QPrinter::PrinterMode quality = QPrinter::HighResolution, int dpi=-1, QObject* parent=0);
	virtual ~NCReportPrinterOutput();

	//virtual bool printDialog( QPrinter *pr );

	virtual bool setup();
	virtual void cleanup();
	virtual void begin();
	virtual void end();
	virtual void newPage();
	//QDomDocument xmlOutput() const;
	QPrinter* printer() const;
	virtual void setCopies( int num );
	virtual int resolution() const;
	virtual void setResolution( int dpi );
	virtual QPaintDevice* device() const;

protected:
	virtual	void initPrinter();
	virtual	void initPage();
	/*!Virtual function for customized setting up of the printer*/
	virtual void customInitPrinter( QPrinter* );
	//virtual	void deletePrinter();

	void setInitDone( bool );
	bool initDone() const;
	void setDialogDone( bool );
	bool dialogDone() const;

private:
	QPrinter *pr;
	bool m_initDone;
	bool m_dialogDone;
};


#endif // NCREPORTPRINTEROUTPUT_H
