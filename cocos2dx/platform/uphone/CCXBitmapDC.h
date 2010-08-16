/****************************************************************************
Copyright (c) 2010 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CCXBITMAP_DC_H__
#define __CCXBITMAP_DC_H__

#include "TG3.h"
#include "ccTypes.h"
#include "Cocos2dDefine.h"

namespace cocos2d{
	class CCX_DLL CCXBitmapDC
	{
	public:
		CCXBitmapDC(const char *text, CGSize dimensions, UITextAlignment alignment, const char *fontName, float fontSize);
		virtual ~CCXBitmapDC(void)
		{
			if (m_pBitmap)
			{
				m_pBitmap->Destroy();
				m_pBitmap = NULL;
			}
		}

		void* GetBuffer(void);
		CGSize GetSize();
		CGSize GetTextSize();
	protected:
		TBitmap *m_pBitmap;
		CGSize m_tTextSize;
		CGSize m_tScaleSize;
	};
}

#endif //__CCXBITMAP_DC_H__