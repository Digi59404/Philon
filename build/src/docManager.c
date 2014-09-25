/* docManager.c generated by valac 0.24.0, the Vala compiler
 * generated from docManager.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <granite.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <stdio.h>
#include <gobject/gvaluecollector.h>


#define PHILON_TYPE_DOC_MANAGER (philon_doc_manager_get_type ())
#define PHILON_DOC_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PHILON_TYPE_DOC_MANAGER, philondocManager))
#define PHILON_DOC_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PHILON_TYPE_DOC_MANAGER, philondocManagerClass))
#define PHILON_IS_DOC_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PHILON_TYPE_DOC_MANAGER))
#define PHILON_IS_DOC_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PHILON_TYPE_DOC_MANAGER))
#define PHILON_DOC_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PHILON_TYPE_DOC_MANAGER, philondocManagerClass))

typedef struct _philondocManager philondocManager;
typedef struct _philondocManagerClass philondocManagerClass;
typedef struct _philondocManagerPrivate philondocManagerPrivate;

#define PHILON_TYPE_PHILON_WINDOW (philon_philon_window_get_type ())
#define PHILON_PHILON_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PHILON_TYPE_PHILON_WINDOW, philonphilonWindow))
#define PHILON_PHILON_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PHILON_TYPE_PHILON_WINDOW, philonphilonWindowClass))
#define PHILON_IS_PHILON_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PHILON_TYPE_PHILON_WINDOW))
#define PHILON_IS_PHILON_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PHILON_TYPE_PHILON_WINDOW))
#define PHILON_PHILON_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PHILON_TYPE_PHILON_WINDOW, philonphilonWindowClass))

typedef struct _philonphilonWindow philonphilonWindow;
typedef struct _philonphilonWindowClass philonphilonWindowClass;

#define PHILON_TYPE_FOLDER_LIST (philon_folder_list_get_type ())
#define PHILON_FOLDER_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PHILON_TYPE_FOLDER_LIST, philonfolderList))
#define PHILON_FOLDER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PHILON_TYPE_FOLDER_LIST, philonfolderListClass))
#define PHILON_IS_FOLDER_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PHILON_TYPE_FOLDER_LIST))
#define PHILON_IS_FOLDER_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PHILON_TYPE_FOLDER_LIST))
#define PHILON_FOLDER_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PHILON_TYPE_FOLDER_LIST, philonfolderListClass))

typedef struct _philonfolderList philonfolderList;
typedef struct _philonfolderListClass philonfolderListClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define PHILON_TYPE_FOLDER_FOLDER (philon_folder_folder_get_type ())
#define PHILON_FOLDER_FOLDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PHILON_TYPE_FOLDER_FOLDER, philonfolderFolder))
#define PHILON_FOLDER_FOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PHILON_TYPE_FOLDER_FOLDER, philonfolderFolderClass))
#define PHILON_IS_FOLDER_FOLDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PHILON_TYPE_FOLDER_FOLDER))
#define PHILON_IS_FOLDER_FOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PHILON_TYPE_FOLDER_FOLDER))
#define PHILON_FOLDER_FOLDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PHILON_TYPE_FOLDER_FOLDER, philonfolderFolderClass))

typedef struct _philonfolderFolder philonfolderFolder;
typedef struct _philonfolderFolderClass philonfolderFolderClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define PHILON_TYPE_FOLDER_ITEM (philon_folder_item_get_type ())
#define PHILON_FOLDER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PHILON_TYPE_FOLDER_ITEM, philonfolderItem))
#define PHILON_FOLDER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PHILON_TYPE_FOLDER_ITEM, philonfolderItemClass))
#define PHILON_IS_FOLDER_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PHILON_TYPE_FOLDER_ITEM))
#define PHILON_IS_FOLDER_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PHILON_TYPE_FOLDER_ITEM))
#define PHILON_FOLDER_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PHILON_TYPE_FOLDER_ITEM, philonfolderItemClass))

typedef struct _philonfolderItem philonfolderItem;
typedef struct _philonfolderItemClass philonfolderItemClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _philonParamSpecdocManager philonParamSpecdocManager;

struct _philondocManager {
	GTypeInstance parent_instance;
	volatile int ref_count;
	philondocManagerPrivate * priv;
};

struct _philondocManagerClass {
	GTypeClass parent_class;
	void (*finalize) (philondocManager *self);
};

struct _philonParamSpecdocManager {
	GParamSpec parent_instance;
};


static gpointer philon_doc_manager_parent_class = NULL;
extern philonphilonWindow* philon_doc_manager_window;
philonphilonWindow* philon_doc_manager_window = NULL;

gpointer philon_doc_manager_ref (gpointer instance);
void philon_doc_manager_unref (gpointer instance);
GParamSpec* philon_param_spec_doc_manager (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void philon_value_set_doc_manager (GValue* value, gpointer v_object);
void philon_value_take_doc_manager (GValue* value, gpointer v_object);
gpointer philon_value_get_doc_manager (const GValue* value);
GType philon_doc_manager_get_type (void) G_GNUC_CONST;
enum  {
	PHILON_DOC_MANAGER_DUMMY_PROPERTY
};
GType philon_philon_window_get_type (void) G_GNUC_CONST;
philondocManager* philon_doc_manager_new (void);
philondocManager* philon_doc_manager_construct (GType object_type);
GType philon_folder_list_get_type (void) G_GNUC_CONST;
void philon_doc_manager_openFolder (const gchar* path, philonfolderList* folderlist, philonphilonWindow* window);
philonfolderFolder* philon_folder_folder_new (philonphilonWindow* window, const gchar* name, const gchar* path);
philonfolderFolder* philon_folder_folder_construct (GType object_type, philonphilonWindow* window, const gchar* name, const gchar* path);
GType philon_folder_folder_get_type (void) G_GNUC_CONST;
philonfolderItem* philon_folder_item_new (philonphilonWindow* window, const gchar* name, const gchar* path);
philonfolderItem* philon_folder_item_construct (GType object_type, philonphilonWindow* window, const gchar* name, const gchar* path);
GType philon_folder_item_get_type (void) G_GNUC_CONST;
void philon_doc_manager_openFolderFolder (const gchar* path, philonfolderFolder* folder, philonphilonWindow* window);
static void philon_doc_manager_finalize (philondocManager* obj);


philondocManager* philon_doc_manager_construct (GType object_type) {
	philondocManager* self = NULL;
#line 7 "/home/digi/Projects/Philon/src/docManager.vala"
	self = (philondocManager*) g_type_create_instance (object_type);
#line 7 "/home/digi/Projects/Philon/src/docManager.vala"
	return self;
#line 122 "docManager.c"
}


philondocManager* philon_doc_manager_new (void) {
#line 7 "/home/digi/Projects/Philon/src/docManager.vala"
	return philon_doc_manager_construct (PHILON_TYPE_DOC_MANAGER);
#line 129 "docManager.c"
}


void philon_doc_manager_openFolder (const gchar* path, philonfolderList* folderlist, philonphilonWindow* window) {
	GFile* file = NULL;
	const gchar* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
#line 11 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (path != NULL);
#line 11 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (folderlist != NULL);
#line 11 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (window != NULL);
#line 12 "/home/digi/Projects/Philon/src/docManager.vala"
	_tmp0_ = path;
#line 12 "/home/digi/Projects/Philon/src/docManager.vala"
	_tmp1_ = g_file_new_for_path (_tmp0_);
#line 12 "/home/digi/Projects/Philon/src/docManager.vala"
	file = _tmp1_;
#line 150 "docManager.c"
	{
		GFileEnumerator* e = NULL;
		GFile* _tmp2_ = NULL;
		GCancellable* _tmp3_ = NULL;
		GCancellable* _tmp4_ = NULL;
		GFileEnumerator* _tmp5_ = NULL;
		GFileEnumerator* _tmp6_ = NULL;
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp2_ = file;
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp3_ = g_cancellable_new ();
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp4_ = _tmp3_;
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp5_ = g_file_enumerate_children (_tmp2_, G_FILE_ATTRIBUTE_STANDARD_NAME, 0, _tmp4_, &_inner_error_);
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp6_ = _tmp5_;
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_object_unref0 (_tmp4_);
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		e = _tmp6_;
#line 14 "/home/digi/Projects/Philon/src/docManager.vala"
		if (_inner_error_ != NULL) {
#line 174 "docManager.c"
			goto __catch0_g_error;
		}
#line 15 "/home/digi/Projects/Philon/src/docManager.vala"
		while (TRUE) {
#line 179 "docManager.c"
			GFileInfo* files = NULL;
			GFileEnumerator* _tmp7_ = NULL;
			GCancellable* _tmp8_ = NULL;
			GCancellable* _tmp9_ = NULL;
			GFileInfo* _tmp10_ = NULL;
			GFileInfo* _tmp11_ = NULL;
			GFileInfo* _tmp12_ = NULL;
			GFileInfo* _tmp13_ = NULL;
			GFileType _tmp14_ = 0;
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp7_ = e;
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp8_ = g_cancellable_new ();
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp9_ = _tmp8_;
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp10_ = g_file_enumerator_next_file (_tmp7_, _tmp9_, &_inner_error_);
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp11_ = _tmp10_;
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			_g_object_unref0 (_tmp9_);
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			files = _tmp11_;
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
			if (_inner_error_ != NULL) {
#line 16 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (e);
#line 207 "docManager.c"
				goto __catch0_g_error;
			}
#line 17 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp12_ = files;
#line 17 "/home/digi/Projects/Philon/src/docManager.vala"
			if (_tmp12_ == NULL) {
#line 18 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (files);
#line 18 "/home/digi/Projects/Philon/src/docManager.vala"
				break;
#line 218 "docManager.c"
			}
#line 20 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp13_ = files;
#line 20 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp14_ = g_file_info_get_file_type (_tmp13_);
#line 20 "/home/digi/Projects/Philon/src/docManager.vala"
			if (_tmp14_ == G_FILE_TYPE_DIRECTORY) {
#line 226 "docManager.c"
				philonfolderList* _tmp15_ = NULL;
				GraniteWidgetsSourceListExpandableItem* _tmp16_ = NULL;
				GraniteWidgetsSourceListExpandableItem* _tmp17_ = NULL;
				philonphilonWindow* _tmp18_ = NULL;
				GFileInfo* _tmp19_ = NULL;
				const gchar* _tmp20_ = NULL;
				const gchar* _tmp21_ = NULL;
				gchar* _tmp22_ = NULL;
				gchar* _tmp23_ = NULL;
				GFileInfo* _tmp24_ = NULL;
				const gchar* _tmp25_ = NULL;
				gchar* _tmp26_ = NULL;
				gchar* _tmp27_ = NULL;
				philonfolderFolder* _tmp28_ = NULL;
				philonfolderFolder* _tmp29_ = NULL;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp15_ = folderlist;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp16_ = granite_widgets_source_list_get_root ((GraniteWidgetsSourceList*) _tmp15_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp17_ = _tmp16_;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp18_ = window;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp19_ = files;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp20_ = g_file_info_get_name (_tmp19_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp21_ = path;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp22_ = g_strconcat (_tmp21_, "/", NULL);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp23_ = _tmp22_;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp24_ = files;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp25_ = g_file_info_get_name (_tmp24_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp26_ = g_strconcat (_tmp23_, _tmp25_, NULL);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp27_ = _tmp26_;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp28_ = philon_folder_folder_new (_tmp18_, _tmp20_, _tmp27_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp29_ = _tmp28_;
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				granite_widgets_source_list_expandable_item_add (_tmp17_, (GraniteWidgetsSourceListItem*) _tmp29_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (_tmp29_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp27_);
#line 23 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp23_);
#line 280 "docManager.c"
			} else {
				philonfolderList* _tmp30_ = NULL;
				GraniteWidgetsSourceListExpandableItem* _tmp31_ = NULL;
				GraniteWidgetsSourceListExpandableItem* _tmp32_ = NULL;
				philonphilonWindow* _tmp33_ = NULL;
				GFileInfo* _tmp34_ = NULL;
				const gchar* _tmp35_ = NULL;
				const gchar* _tmp36_ = NULL;
				gchar* _tmp37_ = NULL;
				gchar* _tmp38_ = NULL;
				GFileInfo* _tmp39_ = NULL;
				const gchar* _tmp40_ = NULL;
				gchar* _tmp41_ = NULL;
				gchar* _tmp42_ = NULL;
				philonfolderItem* _tmp43_ = NULL;
				philonfolderItem* _tmp44_ = NULL;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp30_ = folderlist;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp31_ = granite_widgets_source_list_get_root ((GraniteWidgetsSourceList*) _tmp30_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp32_ = _tmp31_;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp33_ = window;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp34_ = files;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp35_ = g_file_info_get_name (_tmp34_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp36_ = path;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp37_ = g_strconcat (_tmp36_, "/", NULL);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp38_ = _tmp37_;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp39_ = files;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp40_ = g_file_info_get_name (_tmp39_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp41_ = g_strconcat (_tmp38_, _tmp40_, NULL);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp42_ = _tmp41_;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp43_ = philon_folder_item_new (_tmp33_, _tmp35_, _tmp42_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp44_ = _tmp43_;
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				granite_widgets_source_list_expandable_item_add (_tmp32_, (GraniteWidgetsSourceListItem*) _tmp44_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (_tmp44_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp42_);
#line 25 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp38_);
#line 335 "docManager.c"
			}
#line 15 "/home/digi/Projects/Philon/src/docManager.vala"
			_g_object_unref0 (files);
#line 339 "docManager.c"
		}
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_object_unref0 (e);
#line 343 "docManager.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* err = NULL;
		FILE* _tmp45_ = NULL;
		GError* _tmp46_ = NULL;
		const gchar* _tmp47_ = NULL;
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		err = _inner_error_;
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		_inner_error_ = NULL;
#line 30 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp45_ = stderr;
#line 30 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp46_ = err;
#line 30 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp47_ = _tmp46_->message;
#line 30 "/home/digi/Projects/Philon/src/docManager.vala"
		fprintf (_tmp45_, "%s", _tmp47_);
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_error_free0 (err);
#line 366 "docManager.c"
	}
	__finally0:
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
	if (_inner_error_ != NULL) {
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_object_unref0 (file);
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		g_clear_error (&_inner_error_);
#line 13 "/home/digi/Projects/Philon/src/docManager.vala"
		return;
#line 379 "docManager.c"
	}
#line 11 "/home/digi/Projects/Philon/src/docManager.vala"
	_g_object_unref0 (file);
#line 383 "docManager.c"
}


void philon_doc_manager_openFolderFolder (const gchar* path, philonfolderFolder* folder, philonphilonWindow* window) {
	GFile* file = NULL;
	const gchar* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
#line 35 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (path != NULL);
#line 35 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (folder != NULL);
#line 35 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (window != NULL);
#line 36 "/home/digi/Projects/Philon/src/docManager.vala"
	_tmp0_ = path;
#line 36 "/home/digi/Projects/Philon/src/docManager.vala"
	_tmp1_ = g_file_new_for_path (_tmp0_);
#line 36 "/home/digi/Projects/Philon/src/docManager.vala"
	file = _tmp1_;
#line 404 "docManager.c"
	{
		GFileEnumerator* e = NULL;
		GFile* _tmp2_ = NULL;
		GCancellable* _tmp3_ = NULL;
		GCancellable* _tmp4_ = NULL;
		GFileEnumerator* _tmp5_ = NULL;
		GFileEnumerator* _tmp6_ = NULL;
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp2_ = file;
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp3_ = g_cancellable_new ();
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp4_ = _tmp3_;
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp5_ = g_file_enumerate_children (_tmp2_, G_FILE_ATTRIBUTE_STANDARD_NAME, 0, _tmp4_, &_inner_error_);
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp6_ = _tmp5_;
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_object_unref0 (_tmp4_);
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		e = _tmp6_;
#line 38 "/home/digi/Projects/Philon/src/docManager.vala"
		if (_inner_error_ != NULL) {
#line 428 "docManager.c"
			goto __catch1_g_error;
		}
#line 39 "/home/digi/Projects/Philon/src/docManager.vala"
		while (TRUE) {
#line 433 "docManager.c"
			GFileInfo* files = NULL;
			GFileEnumerator* _tmp7_ = NULL;
			GCancellable* _tmp8_ = NULL;
			GCancellable* _tmp9_ = NULL;
			GFileInfo* _tmp10_ = NULL;
			GFileInfo* _tmp11_ = NULL;
			GFileInfo* _tmp12_ = NULL;
			GFileInfo* _tmp13_ = NULL;
			GFileType _tmp14_ = 0;
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp7_ = e;
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp8_ = g_cancellable_new ();
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp9_ = _tmp8_;
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp10_ = g_file_enumerator_next_file (_tmp7_, _tmp9_, &_inner_error_);
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp11_ = _tmp10_;
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			_g_object_unref0 (_tmp9_);
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			files = _tmp11_;
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
			if (_inner_error_ != NULL) {
#line 40 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (e);
#line 461 "docManager.c"
				goto __catch1_g_error;
			}
#line 41 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp12_ = files;
#line 41 "/home/digi/Projects/Philon/src/docManager.vala"
			if (_tmp12_ == NULL) {
#line 42 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (files);
#line 42 "/home/digi/Projects/Philon/src/docManager.vala"
				break;
#line 472 "docManager.c"
			}
#line 44 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp13_ = files;
#line 44 "/home/digi/Projects/Philon/src/docManager.vala"
			_tmp14_ = g_file_info_get_file_type (_tmp13_);
#line 44 "/home/digi/Projects/Philon/src/docManager.vala"
			if (_tmp14_ == G_FILE_TYPE_DIRECTORY) {
#line 480 "docManager.c"
				philonfolderFolder* _tmp15_ = NULL;
				philonphilonWindow* _tmp16_ = NULL;
				GFileInfo* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				const gchar* _tmp19_ = NULL;
				gchar* _tmp20_ = NULL;
				gchar* _tmp21_ = NULL;
				GFileInfo* _tmp22_ = NULL;
				const gchar* _tmp23_ = NULL;
				gchar* _tmp24_ = NULL;
				gchar* _tmp25_ = NULL;
				philonfolderFolder* _tmp26_ = NULL;
				philonfolderFolder* _tmp27_ = NULL;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp15_ = folder;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp16_ = window;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp17_ = files;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp18_ = g_file_info_get_name (_tmp17_);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp19_ = path;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp20_ = g_strconcat (_tmp19_, "/", NULL);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp21_ = _tmp20_;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp22_ = files;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp23_ = g_file_info_get_name (_tmp22_);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp24_ = g_strconcat (_tmp21_, _tmp23_, NULL);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp25_ = _tmp24_;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp26_ = philon_folder_folder_new (_tmp16_, _tmp18_, _tmp25_);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp27_ = _tmp26_;
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				granite_widgets_source_list_expandable_item_add ((GraniteWidgetsSourceListExpandableItem*) _tmp15_, (GraniteWidgetsSourceListItem*) _tmp27_);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (_tmp27_);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp25_);
#line 45 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp21_);
#line 528 "docManager.c"
			} else {
				philonfolderFolder* _tmp28_ = NULL;
				philonphilonWindow* _tmp29_ = NULL;
				GFileInfo* _tmp30_ = NULL;
				const gchar* _tmp31_ = NULL;
				const gchar* _tmp32_ = NULL;
				gchar* _tmp33_ = NULL;
				gchar* _tmp34_ = NULL;
				GFileInfo* _tmp35_ = NULL;
				const gchar* _tmp36_ = NULL;
				gchar* _tmp37_ = NULL;
				gchar* _tmp38_ = NULL;
				philonfolderItem* _tmp39_ = NULL;
				philonfolderItem* _tmp40_ = NULL;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp28_ = folder;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp29_ = window;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp30_ = files;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp31_ = g_file_info_get_name (_tmp30_);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp32_ = path;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp33_ = g_strconcat (_tmp32_, "/", NULL);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp34_ = _tmp33_;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp35_ = files;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp36_ = g_file_info_get_name (_tmp35_);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp37_ = g_strconcat (_tmp34_, _tmp36_, NULL);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp38_ = _tmp37_;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp39_ = philon_folder_item_new (_tmp29_, _tmp31_, _tmp38_);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_tmp40_ = _tmp39_;
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				granite_widgets_source_list_expandable_item_add ((GraniteWidgetsSourceListExpandableItem*) _tmp28_, (GraniteWidgetsSourceListItem*) _tmp40_);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_object_unref0 (_tmp40_);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp38_);
#line 47 "/home/digi/Projects/Philon/src/docManager.vala"
				_g_free0 (_tmp34_);
#line 577 "docManager.c"
			}
#line 39 "/home/digi/Projects/Philon/src/docManager.vala"
			_g_object_unref0 (files);
#line 581 "docManager.c"
		}
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_object_unref0 (e);
#line 585 "docManager.c"
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* err = NULL;
		FILE* _tmp41_ = NULL;
		GError* _tmp42_ = NULL;
		const gchar* _tmp43_ = NULL;
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		err = _inner_error_;
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		_inner_error_ = NULL;
#line 52 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp41_ = stderr;
#line 52 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp42_ = err;
#line 52 "/home/digi/Projects/Philon/src/docManager.vala"
		_tmp43_ = _tmp42_->message;
#line 52 "/home/digi/Projects/Philon/src/docManager.vala"
		fprintf (_tmp41_, "%s", _tmp43_);
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_error_free0 (err);
#line 608 "docManager.c"
	}
	__finally1:
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
	if (_inner_error_ != NULL) {
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		_g_object_unref0 (file);
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		g_clear_error (&_inner_error_);
#line 37 "/home/digi/Projects/Philon/src/docManager.vala"
		return;
#line 621 "docManager.c"
	}
#line 35 "/home/digi/Projects/Philon/src/docManager.vala"
	_g_object_unref0 (file);
#line 625 "docManager.c"
}


static void philon_value_doc_manager_init (GValue* value) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	value->data[0].v_pointer = NULL;
#line 632 "docManager.c"
}


static void philon_value_doc_manager_free_value (GValue* value) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (value->data[0].v_pointer) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		philon_doc_manager_unref (value->data[0].v_pointer);
#line 641 "docManager.c"
	}
}


static void philon_value_doc_manager_copy_value (const GValue* src_value, GValue* dest_value) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (src_value->data[0].v_pointer) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		dest_value->data[0].v_pointer = philon_doc_manager_ref (src_value->data[0].v_pointer);
#line 651 "docManager.c"
	} else {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		dest_value->data[0].v_pointer = NULL;
#line 655 "docManager.c"
	}
}


static gpointer philon_value_doc_manager_peek_pointer (const GValue* value) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	return value->data[0].v_pointer;
#line 663 "docManager.c"
}


static gchar* philon_value_doc_manager_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (collect_values[0].v_pointer) {
#line 670 "docManager.c"
		philondocManager* object;
		object = collect_values[0].v_pointer;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		if (object->parent_instance.g_class == NULL) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 677 "docManager.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 681 "docManager.c"
		}
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		value->data[0].v_pointer = philon_doc_manager_ref (object);
#line 685 "docManager.c"
	} else {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		value->data[0].v_pointer = NULL;
#line 689 "docManager.c"
	}
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	return NULL;
#line 693 "docManager.c"
}


static gchar* philon_value_doc_manager_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	philondocManager** object_p;
	object_p = collect_values[0].v_pointer;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (!object_p) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 704 "docManager.c"
	}
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (!value->data[0].v_pointer) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		*object_p = NULL;
#line 710 "docManager.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		*object_p = value->data[0].v_pointer;
#line 714 "docManager.c"
	} else {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		*object_p = philon_doc_manager_ref (value->data[0].v_pointer);
#line 718 "docManager.c"
	}
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	return NULL;
#line 722 "docManager.c"
}


GParamSpec* philon_param_spec_doc_manager (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	philonParamSpecdocManager* spec;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_val_if_fail (g_type_is_a (object_type, PHILON_TYPE_DOC_MANAGER), NULL);
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	return G_PARAM_SPEC (spec);
#line 736 "docManager.c"
}


gpointer philon_value_get_doc_manager (const GValue* value) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PHILON_TYPE_DOC_MANAGER), NULL);
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	return value->data[0].v_pointer;
#line 745 "docManager.c"
}


void philon_value_set_doc_manager (GValue* value, gpointer v_object) {
	philondocManager* old;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PHILON_TYPE_DOC_MANAGER));
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	old = value->data[0].v_pointer;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (v_object) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, PHILON_TYPE_DOC_MANAGER));
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		value->data[0].v_pointer = v_object;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		philon_doc_manager_ref (value->data[0].v_pointer);
#line 765 "docManager.c"
	} else {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		value->data[0].v_pointer = NULL;
#line 769 "docManager.c"
	}
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (old) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		philon_doc_manager_unref (old);
#line 775 "docManager.c"
	}
}


void philon_value_take_doc_manager (GValue* value, gpointer v_object) {
	philondocManager* old;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, PHILON_TYPE_DOC_MANAGER));
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	old = value->data[0].v_pointer;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (v_object) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, PHILON_TYPE_DOC_MANAGER));
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		value->data[0].v_pointer = v_object;
#line 794 "docManager.c"
	} else {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		value->data[0].v_pointer = NULL;
#line 798 "docManager.c"
	}
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (old) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		philon_doc_manager_unref (old);
#line 804 "docManager.c"
	}
}


static void philon_doc_manager_class_init (philondocManagerClass * klass) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	philon_doc_manager_parent_class = g_type_class_peek_parent (klass);
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	PHILON_DOC_MANAGER_CLASS (klass)->finalize = philon_doc_manager_finalize;
#line 814 "docManager.c"
}


static void philon_doc_manager_instance_init (philondocManager * self) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	self->ref_count = 1;
#line 821 "docManager.c"
}


static void philon_doc_manager_finalize (philondocManager* obj) {
	philondocManager * self;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PHILON_TYPE_DOC_MANAGER, philondocManager);
#line 829 "docManager.c"
}


GType philon_doc_manager_get_type (void) {
	static volatile gsize philon_doc_manager_type_id__volatile = 0;
	if (g_once_init_enter (&philon_doc_manager_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { philon_value_doc_manager_init, philon_value_doc_manager_free_value, philon_value_doc_manager_copy_value, philon_value_doc_manager_peek_pointer, "p", philon_value_doc_manager_collect_value, "p", philon_value_doc_manager_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (philondocManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) philon_doc_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (philondocManager), 0, (GInstanceInitFunc) philon_doc_manager_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType philon_doc_manager_type_id;
		philon_doc_manager_type_id = g_type_register_fundamental (g_type_fundamental_next (), "philondocManager", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&philon_doc_manager_type_id__volatile, philon_doc_manager_type_id);
	}
	return philon_doc_manager_type_id__volatile;
}


gpointer philon_doc_manager_ref (gpointer instance) {
	philondocManager* self;
	self = instance;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	g_atomic_int_inc (&self->ref_count);
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	return instance;
#line 854 "docManager.c"
}


void philon_doc_manager_unref (gpointer instance) {
	philondocManager* self;
	self = instance;
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		PHILON_DOC_MANAGER_GET_CLASS (self)->finalize (self);
#line 4 "/home/digi/Projects/Philon/src/docManager.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 867 "docManager.c"
	}
}



