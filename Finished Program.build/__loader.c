
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 8 > 0
static unsigned char *bytecode_data[8];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ExifTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$action(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$datalabel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$marker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$plot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$point(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$chart$xmlwriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$compat$python3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$dml$chtfmt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$dml$color(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$dml$effect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$dml$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$dml$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$action(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$lang(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$enum$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$exc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$media(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$oxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$package(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$packuri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$serialized(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$shared(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$opc$spec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$action(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$datalabel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$marker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$plot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$chart$shared(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$coreprops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$dml$color(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$dml$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$dml$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$ns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$presentation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes$autoshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes$graphfrm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes$groupshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$shapes$shared(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$simpletypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$slide(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$theme(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$oxml$xmlchemy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$package(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$coreprops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$embeddedpackage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$media(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$presentation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$parts$slide(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$presentation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$autoshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$freeform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$graphfrm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$placeholder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shapes$shapetree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$shared(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$slide(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$spec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$text$fonts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$text$layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$text$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pptx$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\154\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\155\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\165\146\162\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\103\165\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\144\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\160\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ExifTags", modulecode_PIL$ExifTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\170\151\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.FitsImagePlugin", modulecode_PIL$FitsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\151\164\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FitsStubImagePlugin", modulecode_PIL$FitsStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\151\164\163\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\154\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\160\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\164\145\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\142\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\107\162\141\144\151\145\156\164\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\162\151\142\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\110\144\146\65\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\156\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\56\160\171"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\150\157\160\163\56\160\171"
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\155\163\56\160\171"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\157\154\157\162\56\160\171"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"PIL.ImageFont", modulecode_PIL$ImageFont, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\157\156\164\56\160\171"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\115\157\144\145\56\160\171"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\117\160\163\56\160\171"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\120\141\154\145\164\164\145\56\160\171"
#endif
},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\121\164\56\160\171"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\150\157\167\56\160\171"
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\124\153\56\160\171"
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\127\151\156\56\160\171"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\164\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\160\164\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\62\113\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\120\162\145\163\145\164\163\56\160\171"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\143\111\144\141\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\151\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\163\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\120\141\162\163\145\162\56\160\171"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\151\170\141\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\156\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\163\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\171\101\143\143\145\163\163\56\160\171"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\147\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\160\151\144\145\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\165\156\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\147\141\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\145\142\120\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\155\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\126\124\150\165\155\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\142\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\142\151\156\141\162\171\56\160\171"
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\144\145\160\162\145\143\141\164\145\56\160\171"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\165\164\151\154\56\160\171"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\104\157\143\165\155\145\156\164\163\134\107\151\164\110\165\142\134\114\171\162\151\143\163\55\124\157\55\120\157\167\145\162\160\157\151\156\164\134\106\151\156\151\163\150\145\144\40\120\162\157\147\162\141\155\56\160\171"
#endif
},
    {"lxml", modulecode_lxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx", modulecode_pptx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.action", modulecode_pptx$action, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\141\143\164\151\157\156\56\160\171"
#endif
},
    {"pptx.api", modulecode_pptx$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\141\160\151\56\160\171"
#endif
},
    {"pptx.chart", modulecode_pptx$chart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.chart.axis", modulecode_pptx$chart$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\141\170\151\163\56\160\171"
#endif
},
    {"pptx.chart.category", modulecode_pptx$chart$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\143\141\164\145\147\157\162\171\56\160\171"
#endif
},
    {"pptx.chart.chart", modulecode_pptx$chart$chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\143\150\141\162\164\56\160\171"
#endif
},
    {"pptx.chart.datalabel", modulecode_pptx$chart$datalabel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\144\141\164\141\154\141\142\145\154\56\160\171"
#endif
},
    {"pptx.chart.legend", modulecode_pptx$chart$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"pptx.chart.marker", modulecode_pptx$chart$marker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\155\141\162\153\145\162\56\160\171"
#endif
},
    {"pptx.chart.plot", modulecode_pptx$chart$plot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\160\154\157\164\56\160\171"
#endif
},
    {"pptx.chart.point", modulecode_pptx$chart$point, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\160\157\151\156\164\56\160\171"
#endif
},
    {"pptx.chart.series", modulecode_pptx$chart$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pptx.chart.xmlwriter", modulecode_pptx$chart$xmlwriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\150\141\162\164\134\170\155\154\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pptx.compat", modulecode_pptx$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.compat.python3", modulecode_pptx$compat$python3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\143\157\155\160\141\164\134\160\171\164\150\157\156\63\56\160\171"
#endif
},
    {"pptx.dml", modulecode_pptx$dml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\144\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.dml.chtfmt", modulecode_pptx$dml$chtfmt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\144\155\154\134\143\150\164\146\155\164\56\160\171"
#endif
},
    {"pptx.dml.color", modulecode_pptx$dml$color, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\144\155\154\134\143\157\154\157\162\56\160\171"
#endif
},
    {"pptx.dml.effect", modulecode_pptx$dml$effect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\144\155\154\134\145\146\146\145\143\164\56\160\171"
#endif
},
    {"pptx.dml.fill", modulecode_pptx$dml$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\144\155\154\134\146\151\154\154\56\160\171"
#endif
},
    {"pptx.dml.line", modulecode_pptx$dml$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\144\155\154\134\154\151\156\145\56\160\171"
#endif
},
    {"pptx.enum", modulecode_pptx$enum, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.enum.action", modulecode_pptx$enum$action, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\141\143\164\151\157\156\56\160\171"
#endif
},
    {"pptx.enum.base", modulecode_pptx$enum$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\142\141\163\145\56\160\171"
#endif
},
    {"pptx.enum.chart", modulecode_pptx$enum$chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\143\150\141\162\164\56\160\171"
#endif
},
    {"pptx.enum.dml", modulecode_pptx$enum$dml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\144\155\154\56\160\171"
#endif
},
    {"pptx.enum.lang", modulecode_pptx$enum$lang, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\154\141\156\147\56\160\171"
#endif
},
    {"pptx.enum.shapes", modulecode_pptx$enum$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\163\150\141\160\145\163\56\160\171"
#endif
},
    {"pptx.enum.text", modulecode_pptx$enum$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\156\165\155\134\164\145\170\164\56\160\171"
#endif
},
    {"pptx.exc", modulecode_pptx$exc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\145\170\143\56\160\171"
#endif
},
    {"pptx.media", modulecode_pptx$media, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\155\145\144\151\141\56\160\171"
#endif
},
    {"pptx.opc", modulecode_pptx$opc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.opc.constants", modulecode_pptx$opc$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pptx.opc.oxml", modulecode_pptx$opc$oxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\157\170\155\154\56\160\171"
#endif
},
    {"pptx.opc.package", modulecode_pptx$opc$package, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\160\141\143\153\141\147\145\56\160\171"
#endif
},
    {"pptx.opc.packuri", modulecode_pptx$opc$packuri, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\160\141\143\153\165\162\151\56\160\171"
#endif
},
    {"pptx.opc.serialized", modulecode_pptx$opc$serialized, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\163\145\162\151\141\154\151\172\145\144\56\160\171"
#endif
},
    {"pptx.opc.shared", modulecode_pptx$opc$shared, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\163\150\141\162\145\144\56\160\171"
#endif
},
    {"pptx.opc.spec", modulecode_pptx$opc$spec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\160\143\134\163\160\145\143\56\160\171"
#endif
},
    {"pptx.oxml", modulecode_pptx$oxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.oxml.action", modulecode_pptx$oxml$action, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\141\143\164\151\157\156\56\160\171"
#endif
},
    {"pptx.oxml.chart", modulecode_pptx$oxml$chart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.oxml.chart.axis", modulecode_pptx$oxml$chart$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\141\170\151\163\56\160\171"
#endif
},
    {"pptx.oxml.chart.chart", modulecode_pptx$oxml$chart$chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\143\150\141\162\164\56\160\171"
#endif
},
    {"pptx.oxml.chart.datalabel", modulecode_pptx$oxml$chart$datalabel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\144\141\164\141\154\141\142\145\154\56\160\171"
#endif
},
    {"pptx.oxml.chart.legend", modulecode_pptx$oxml$chart$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\154\145\147\145\156\144\56\160\171"
#endif
},
    {"pptx.oxml.chart.marker", modulecode_pptx$oxml$chart$marker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\155\141\162\153\145\162\56\160\171"
#endif
},
    {"pptx.oxml.chart.plot", modulecode_pptx$oxml$chart$plot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\160\154\157\164\56\160\171"
#endif
},
    {"pptx.oxml.chart.series", modulecode_pptx$oxml$chart$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pptx.oxml.chart.shared", modulecode_pptx$oxml$chart$shared, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\150\141\162\164\134\163\150\141\162\145\144\56\160\171"
#endif
},
    {"pptx.oxml.coreprops", modulecode_pptx$oxml$coreprops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\143\157\162\145\160\162\157\160\163\56\160\171"
#endif
},
    {"pptx.oxml.dml", modulecode_pptx$oxml$dml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\144\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.oxml.dml.color", modulecode_pptx$oxml$dml$color, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\144\155\154\134\143\157\154\157\162\56\160\171"
#endif
},
    {"pptx.oxml.dml.fill", modulecode_pptx$oxml$dml$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\144\155\154\134\146\151\154\154\56\160\171"
#endif
},
    {"pptx.oxml.dml.line", modulecode_pptx$oxml$dml$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\144\155\154\134\154\151\156\145\56\160\171"
#endif
},
    {"pptx.oxml.ns", modulecode_pptx$oxml$ns, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\156\163\56\160\171"
#endif
},
    {"pptx.oxml.presentation", modulecode_pptx$oxml$presentation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\160\162\145\163\145\156\164\141\164\151\157\156\56\160\171"
#endif
},
    {"pptx.oxml.shapes", modulecode_pptx$oxml$shapes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.oxml.shapes.autoshape", modulecode_pptx$oxml$shapes$autoshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\141\165\164\157\163\150\141\160\145\56\160\171"
#endif
},
    {"pptx.oxml.shapes.connector", modulecode_pptx$oxml$shapes$connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\143\157\156\156\145\143\164\157\162\56\160\171"
#endif
},
    {"pptx.oxml.shapes.graphfrm", modulecode_pptx$oxml$shapes$graphfrm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\147\162\141\160\150\146\162\155\56\160\171"
#endif
},
    {"pptx.oxml.shapes.groupshape", modulecode_pptx$oxml$shapes$groupshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\147\162\157\165\160\163\150\141\160\145\56\160\171"
#endif
},
    {"pptx.oxml.shapes.picture", modulecode_pptx$oxml$shapes$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"pptx.oxml.shapes.shared", modulecode_pptx$oxml$shapes$shared, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\150\141\160\145\163\134\163\150\141\162\145\144\56\160\171"
#endif
},
    {"pptx.oxml.simpletypes", modulecode_pptx$oxml$simpletypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\151\155\160\154\145\164\171\160\145\163\56\160\171"
#endif
},
    {"pptx.oxml.slide", modulecode_pptx$oxml$slide, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\163\154\151\144\145\56\160\171"
#endif
},
    {"pptx.oxml.table", modulecode_pptx$oxml$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\164\141\142\154\145\56\160\171"
#endif
},
    {"pptx.oxml.text", modulecode_pptx$oxml$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\164\145\170\164\56\160\171"
#endif
},
    {"pptx.oxml.theme", modulecode_pptx$oxml$theme, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\164\150\145\155\145\56\160\171"
#endif
},
    {"pptx.oxml.xmlchemy", modulecode_pptx$oxml$xmlchemy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\157\170\155\154\134\170\155\154\143\150\145\155\171\56\160\171"
#endif
},
    {"pptx.package", modulecode_pptx$package, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\143\153\141\147\145\56\160\171"
#endif
},
    {"pptx.parts", modulecode_pptx$parts, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.parts.chart", modulecode_pptx$parts$chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\143\150\141\162\164\56\160\171"
#endif
},
    {"pptx.parts.coreprops", modulecode_pptx$parts$coreprops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\143\157\162\145\160\162\157\160\163\56\160\171"
#endif
},
    {"pptx.parts.embeddedpackage", modulecode_pptx$parts$embeddedpackage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\145\155\142\145\144\144\145\144\160\141\143\153\141\147\145\56\160\171"
#endif
},
    {"pptx.parts.image", modulecode_pptx$parts$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\151\155\141\147\145\56\160\171"
#endif
},
    {"pptx.parts.media", modulecode_pptx$parts$media, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\155\145\144\151\141\56\160\171"
#endif
},
    {"pptx.parts.presentation", modulecode_pptx$parts$presentation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\160\162\145\163\145\156\164\141\164\151\157\156\56\160\171"
#endif
},
    {"pptx.parts.slide", modulecode_pptx$parts$slide, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\141\162\164\163\134\163\154\151\144\145\56\160\171"
#endif
},
    {"pptx.presentation", modulecode_pptx$presentation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\160\162\145\163\145\156\164\141\164\151\157\156\56\160\171"
#endif
},
    {"pptx.shapes", modulecode_pptx$shapes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.shapes.autoshape", modulecode_pptx$shapes$autoshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\141\165\164\157\163\150\141\160\145\56\160\171"
#endif
},
    {"pptx.shapes.base", modulecode_pptx$shapes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pptx.shapes.connector", modulecode_pptx$shapes$connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\143\157\156\156\145\143\164\157\162\56\160\171"
#endif
},
    {"pptx.shapes.freeform", modulecode_pptx$shapes$freeform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\146\162\145\145\146\157\162\155\56\160\171"
#endif
},
    {"pptx.shapes.graphfrm", modulecode_pptx$shapes$graphfrm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\147\162\141\160\150\146\162\155\56\160\171"
#endif
},
    {"pptx.shapes.group", modulecode_pptx$shapes$group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\147\162\157\165\160\56\160\171"
#endif
},
    {"pptx.shapes.picture", modulecode_pptx$shapes$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\160\151\143\164\165\162\145\56\160\171"
#endif
},
    {"pptx.shapes.placeholder", modulecode_pptx$shapes$placeholder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\160\154\141\143\145\150\157\154\144\145\162\56\160\171"
#endif
},
    {"pptx.shapes.shapetree", modulecode_pptx$shapes$shapetree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\160\145\163\134\163\150\141\160\145\164\162\145\145\56\160\171"
#endif
},
    {"pptx.shared", modulecode_pptx$shared, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\150\141\162\145\144\56\160\171"
#endif
},
    {"pptx.slide", modulecode_pptx$slide, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\154\151\144\145\56\160\171"
#endif
},
    {"pptx.spec", modulecode_pptx$spec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\163\160\145\143\56\160\171"
#endif
},
    {"pptx.table", modulecode_pptx$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\164\141\142\154\145\56\160\171"
#endif
},
    {"pptx.text", modulecode_pptx$text, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\164\145\170\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pptx.text.fonts", modulecode_pptx$text$fonts, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\164\145\170\164\134\146\157\156\164\163\56\160\171"
#endif
},
    {"pptx.text.layout", modulecode_pptx$text$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\164\145\170\164\134\154\141\171\157\165\164\56\160\171"
#endif
},
    {"pptx.text.text", modulecode_pptx$text$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\164\145\170\164\134\164\145\170\164\56\160\171"
#endif
},
    {"pptx.util", modulecode_pptx$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\160\164\170\134\165\164\151\154\56\160\171"
#endif
},
    {"site", NULL, 0, 16810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {"tkinter", NULL, 1, 176146, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"tkinter.commondialog", NULL, 2, 1209, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\143\157\155\155\157\156\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.constants", NULL, 3, 1677, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"tkinter.dialog", NULL, 4, 1520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.filedialog", NULL, 5, 12564, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\146\151\154\145\144\151\141\154\157\147\56\160\171"
#endif
},
    {"tkinter.messagebox", NULL, 6, 3103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\155\145\163\163\141\147\145\142\157\170\56\160\171"
#endif
},
    {"tkinter.ttk", NULL, 7, 56825, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\103\171\162\165\163\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\71\134\154\151\142\134\164\153\151\156\164\145\162\134\164\164\153\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

