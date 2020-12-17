
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:35 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_IBM_vertex_array_lists__
#define __GLUX_GL_IBM_vertex_array_lists__

GLUX_NEW_PLUGIN(GL_IBM_vertex_array_lists);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_VERTEX_ARRAY_LIST_IBM
#  define GL_VERTEX_ARRAY_LIST_IBM 103070
#endif
#ifndef GL_NORMAL_ARRAY_LIST_IBM
#  define GL_NORMAL_ARRAY_LIST_IBM 103071
#endif
#ifndef GL_COLOR_ARRAY_LIST_IBM
#  define GL_COLOR_ARRAY_LIST_IBM 103072
#endif
#ifndef GL_INDEX_ARRAY_LIST_IBM
#  define GL_INDEX_ARRAY_LIST_IBM 103073
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_LIST_IBM
#  define GL_TEXTURE_COORD_ARRAY_LIST_IBM 103074
#endif
#ifndef GL_EDGE_FLAG_ARRAY_LIST_IBM
#  define GL_EDGE_FLAG_ARRAY_LIST_IBM 103075
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_LIST_IBM
#  define GL_FOG_COORDINATE_ARRAY_LIST_IBM 103076
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_LIST_IBM
#  define GL_SECONDARY_COLOR_ARRAY_LIST_IBM 103077
#endif
#ifndef GL_VERTEX_ARRAY_LIST_STRIDE_IBM
#  define GL_VERTEX_ARRAY_LIST_STRIDE_IBM 103080
#endif
#ifndef GL_NORMAL_ARRAY_LIST_STRIDE_IBM
#  define GL_NORMAL_ARRAY_LIST_STRIDE_IBM 103081
#endif
#ifndef GL_COLOR_ARRAY_LIST_STRIDE_IBM
#  define GL_COLOR_ARRAY_LIST_STRIDE_IBM 103082
#endif
#ifndef GL_INDEX_ARRAY_LIST_STRIDE_IBM
#  define GL_INDEX_ARRAY_LIST_STRIDE_IBM 103083
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM
#  define GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM 103084
#endif
#ifndef GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM
#  define GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM 103085
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM
#  define GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM 103086
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM
#  define GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM 103087
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glColorPointerListIBM
typedef void (APIENTRYP PFNGLUXCOLORPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glSecondaryColorPointerListIBM
typedef void (APIENTRYP PFNGLUXSECONDARYCOLORPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glEdgeFlagPointerListIBM
typedef void (APIENTRYP PFNGLUXEDGEFLAGPOINTERLISTIBMPROC) (GLint stride, const GLboolean* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glFogCoordPointerListIBM
typedef void (APIENTRYP PFNGLUXFOGCOORDPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glIndexPointerListIBM
typedef void (APIENTRYP PFNGLUXINDEXPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glNormalPointerListIBM
typedef void (APIENTRYP PFNGLUXNORMALPOINTERLISTIBMPROC) (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glTexCoordPointerListIBM
typedef void (APIENTRYP PFNGLUXTEXCOORDPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
#ifndef __GLUX__GLFCT_glVertexPointerListIBM
typedef void (APIENTRYP PFNGLUXVERTEXPOINTERLISTIBMPROC) (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glColorPointerListIBM
extern PFNGLUXCOLORPOINTERLISTIBMPROC glColorPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glSecondaryColorPointerListIBM
extern PFNGLUXSECONDARYCOLORPOINTERLISTIBMPROC glSecondaryColorPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glEdgeFlagPointerListIBM
extern PFNGLUXEDGEFLAGPOINTERLISTIBMPROC glEdgeFlagPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glFogCoordPointerListIBM
extern PFNGLUXFOGCOORDPOINTERLISTIBMPROC glFogCoordPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glIndexPointerListIBM
extern PFNGLUXINDEXPOINTERLISTIBMPROC glIndexPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glNormalPointerListIBM
extern PFNGLUXNORMALPOINTERLISTIBMPROC glNormalPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glTexCoordPointerListIBM
extern PFNGLUXTEXCOORDPOINTERLISTIBMPROC glTexCoordPointerListIBM;
#endif
#ifndef __GLUX__GLFCT_glVertexPointerListIBM
extern PFNGLUXVERTEXPOINTERLISTIBMPROC glVertexPointerListIBM;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
