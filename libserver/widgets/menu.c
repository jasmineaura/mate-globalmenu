/* menu.c generated by valac, the Vala compiler
 * generated from menu.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>


#define MATENU_TYPE_SHELL (matenu_shell_get_type ())
#define MATENU_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_SHELL, MatenuShell))
#define MATENU_IS_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_SHELL))
#define MATENU_SHELL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), MATENU_TYPE_SHELL, MatenuShellIface))

typedef struct _MatenuShell MatenuShell;
typedef struct _MatenuShellIface MatenuShellIface;

#define MATENU_TYPE_ITEM (matenu_item_get_type ())
#define MATENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_ITEM, MatenuItem))
#define MATENU_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_ITEM))
#define MATENU_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), MATENU_TYPE_ITEM, MatenuItemIface))

typedef struct _MatenuItem MatenuItem;
typedef struct _MatenuItemIface MatenuItemIface;

#define MATENU_TYPE_ITEM_TYPE (matenu_item_type_get_type ())

#define MATENU_TYPE_ITEM_STATE (matenu_item_state_get_type ())

#define MATENU_TYPE_MENU (matenu_menu_get_type ())
#define MATENU_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_MENU, MatenuMenu))
#define MATENU_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MATENU_TYPE_MENU, MatenuMenuClass))
#define MATENU_IS_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_MENU))
#define MATENU_IS_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MATENU_TYPE_MENU))
#define MATENU_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MATENU_TYPE_MENU, MatenuMenuClass))

typedef struct _MatenuMenu MatenuMenu;
typedef struct _MatenuMenuClass MatenuMenuClass;
typedef struct _MatenuMenuPrivate MatenuMenuPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

#define MATENU_TYPE_MENU_ITEM (matenu_menu_item_get_type ())
#define MATENU_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_MENU_ITEM, MatenuMenuItem))
#define MATENU_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MATENU_TYPE_MENU_ITEM, MatenuMenuItemClass))
#define MATENU_IS_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_MENU_ITEM))
#define MATENU_IS_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MATENU_TYPE_MENU_ITEM))
#define MATENU_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MATENU_TYPE_MENU_ITEM, MatenuMenuItemClass))

typedef struct _MatenuMenuItem MatenuMenuItem;
typedef struct _MatenuMenuItemClass MatenuMenuItemClass;

typedef enum  {
	MATENU_ITEM_TYPE_NORMAL = 0,
	MATENU_ITEM_TYPE_CHECK = 1,
	MATENU_ITEM_TYPE_RADIO = 2,
	MATENU_ITEM_TYPE_IMAGE = 3,
	MATENU_ITEM_TYPE_SEPARATOR = 4,
	MATENU_ITEM_TYPE_ARROW = 5,
	MATENU_ITEM_TYPE_ICON = 6
} MatenuItemType;

typedef enum  {
	MATENU_ITEM_STATE_UNTOGGLED = 0,
	MATENU_ITEM_STATE_TOGGLED = 1,
	MATENU_ITEM_STATE_TRISTATE = 2
} MatenuItemState;

struct _MatenuItemIface {
	GTypeInterface parent_iface;
	MatenuShell* (*get_shell) (MatenuItem* self);
	MatenuShell* (*get_sub_shell) (MatenuItem* self);
	gboolean (*get_has_sub_shell) (MatenuItem* self);
	void (*set_has_sub_shell) (MatenuItem* self, gboolean value);
	gboolean (*get_client_side_sub_shell) (MatenuItem* self);
	void (*set_client_side_sub_shell) (MatenuItem* self, gboolean value);
	const char* (*get_item_id) (MatenuItem* self);
	void (*set_item_id) (MatenuItem* self, const char* value);
	MatenuItemType (*get_item_type) (MatenuItem* self);
	void (*set_item_type) (MatenuItem* self, MatenuItemType value);
	gboolean (*get_item_use_underline) (MatenuItem* self);
	void (*set_item_use_underline) (MatenuItem* self, gboolean value);
	gboolean (*get_item_sensitive) (MatenuItem* self);
	void (*set_item_sensitive) (MatenuItem* self, gboolean value);
	gboolean (*get_item_visible) (MatenuItem* self);
	void (*set_item_visible) (MatenuItem* self, gboolean value);
	MatenuItemState (*get_item_state) (MatenuItem* self);
	void (*set_item_state) (MatenuItem* self, MatenuItemState value);
	const char* (*get_item_label) (MatenuItem* self);
	void (*set_item_label) (MatenuItem* self, const char* value);
	const char* (*get_item_icon) (MatenuItem* self);
	void (*set_item_icon) (MatenuItem* self, const char* value);
	const char* (*get_item_accel_text) (MatenuItem* self);
	void (*set_item_accel_text) (MatenuItem* self, const char* value);
	const char* (*get_item_font) (MatenuItem* self);
	void (*set_item_font) (MatenuItem* self, const char* value);
};

struct _MatenuShellIface {
	GTypeInterface parent_iface;
	MatenuItem* (*get_item) (MatenuShell* self, gint position);
	MatenuItem* (*get_item_by_id) (MatenuShell* self, const char* id);
	gint (*get_item_position) (MatenuShell* self, MatenuItem* item);
	MatenuItem* (*get_owner) (MatenuShell* self);
	gint (*get_length) (MatenuShell* self);
	void (*set_length) (MatenuShell* self, gint value);
};

struct _MatenuMenu {
	GtkMenu parent_instance;
	MatenuMenuPrivate * priv;
};

struct _MatenuMenuClass {
	GtkMenuClass parent_class;
};

struct _MatenuMenuPrivate {
	gboolean _use_rgba_colormap;
	gboolean _is_topmost;
};


extern gboolean matenu_menu_default_use_rgba_colormap;
gboolean matenu_menu_default_use_rgba_colormap = FALSE;
static gpointer matenu_menu_parent_class = NULL;
static MatenuShellIface* matenu_menu_matenu_shell_parent_iface = NULL;

GType matenu_item_type_get_type (void) G_GNUC_CONST;
GType matenu_item_state_get_type (void) G_GNUC_CONST;
GType matenu_item_get_type (void) G_GNUC_CONST;
GType matenu_shell_get_type (void) G_GNUC_CONST;
GType matenu_menu_get_type (void) G_GNUC_CONST;
#define MATENU_MENU_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), MATENU_TYPE_MENU, MatenuMenuPrivate))
enum  {
	MATENU_MENU_DUMMY_PROPERTY,
	MATENU_MENU_IS_TOPMOST,
	MATENU_MENU_USE_RGBA_COLORMAP,
	MATENU_MENU_OWNER,
	MATENU_MENU_LENGTH
};
MatenuMenu* matenu_menu_new (void);
MatenuMenu* matenu_menu_construct (GType object_type);
void gtk_menu_shell_remove_all (GtkMenuShell* menushell);
static void matenu_menu_real_destroy (GtkObject* base);
GtkMenuItem* gtk_menu_shell_get_item (GtkMenuShell* menu_shell, gint position);
static MatenuItem* matenu_menu_real_get_item (MatenuShell* base, gint position);
const char* matenu_item_get_item_id (MatenuItem* self);
static MatenuItem* matenu_menu_real_get_item_by_id (MatenuShell* base, const char* id);
gint gtk_menu_shell_get_item_position (GtkMenuShell* menu_shell, GtkMenuItem* item);
GType matenu_menu_item_get_type (void) G_GNUC_CONST;
static gint matenu_menu_real_get_item_position (MatenuShell* base, MatenuItem* item);
gboolean matenu_menu_get_is_topmost (MatenuMenu* self);
void matenu_menu_set_is_topmost (MatenuMenu* self, gboolean value);
gboolean matenu_menu_get_use_rgba_colormap (MatenuMenu* self);
void matenu_menu_set_use_rgba_colormap (MatenuMenu* self, gboolean value);
gint gtk_menu_shell_get_length (GtkMenuShell* menushell);
void gtk_menu_shell_set_length (GtkMenuShell* menushell, gint length);
static GObject * matenu_menu_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void matenu_menu_finalize (GObject* obj);
MatenuItem* matenu_shell_get_owner (MatenuShell* self);
gint matenu_shell_get_length (MatenuShell* self);
static void matenu_menu_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
void matenu_shell_set_length (MatenuShell* self, gint value);
static void matenu_menu_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static int _vala_strcmp0 (const char * str1, const char * str2);



MatenuMenu* matenu_menu_construct (GType object_type) {
	MatenuMenu * self;
	self = g_object_newv (object_type, 0, NULL);
	return self;
}


MatenuMenu* matenu_menu_new (void) {
	return matenu_menu_construct (MATENU_TYPE_MENU);
}


static void matenu_menu_real_destroy (GtkObject* base) {
	MatenuMenu * self;
	self = (MatenuMenu*) base;
	gtk_menu_shell_remove_all (self);
	GTK_OBJECT_CLASS (matenu_menu_parent_class)->destroy ((GtkObject*) GTK_MENU (self));
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static MatenuItem* matenu_menu_real_get_item (MatenuShell* base, gint position) {
	MatenuMenu * self;
	MatenuItem* result = NULL;
	GtkMenuItem* _tmp0_;
	self = (MatenuMenu*) base;
	result = _g_object_ref0 ((_tmp0_ = gtk_menu_shell_get_item (self, position), MATENU_IS_ITEM (_tmp0_) ? ((MatenuItem*) _tmp0_) : NULL));
	return result;
}


static MatenuItem* matenu_menu_real_get_item_by_id (MatenuShell* base, const char* id) {
	MatenuMenu * self;
	MatenuItem* result = NULL;
	self = (MatenuMenu*) base;
	g_return_val_if_fail (id != NULL, NULL);
	{
		GList* child_collection;
		GList* child_it;
		child_collection = gtk_container_get_children ((GtkContainer*) self);
		for (child_it = child_collection; child_it != NULL; child_it = child_it->next) {
			GtkWidget* child;
			child = (GtkWidget*) child_it->data;
			{
				GtkWidget* _tmp0_;
				MatenuItem* item;
				item = _g_object_ref0 ((_tmp0_ = child, MATENU_IS_ITEM (_tmp0_) ? ((MatenuItem*) _tmp0_) : NULL));
				if (item == NULL) {
					_g_object_unref0 (item);
					continue;
				}
				if (_vala_strcmp0 (matenu_item_get_item_id (item), id) == 0) {
					result = item;
					_g_list_free0 (child_collection);
					return result;
				}
				_g_object_unref0 (item);
			}
		}
		_g_list_free0 (child_collection);
	}
	result = NULL;
	return result;
}


static gint matenu_menu_real_get_item_position (MatenuShell* base, MatenuItem* item) {
	MatenuMenu * self;
	gint result = 0;
	MatenuItem* _tmp0_;
	self = (MatenuMenu*) base;
	g_return_val_if_fail (item != NULL, 0);
	result = gtk_menu_shell_get_item_position (self, (_tmp0_ = item, MATENU_IS_MENU_ITEM (_tmp0_) ? ((MatenuMenuItem*) _tmp0_) : NULL));
	return result;
}


gboolean matenu_menu_get_is_topmost (MatenuMenu* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_is_topmost;
	return result;
}


void matenu_menu_set_is_topmost (MatenuMenu* self, gboolean value) {
	g_return_if_fail (self != NULL);
	self->priv->_is_topmost = value;
	g_object_notify ((GObject *) self, "is-topmost");
}


gboolean matenu_menu_get_use_rgba_colormap (MatenuMenu* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_use_rgba_colormap;
	return result;
}


void matenu_menu_set_use_rgba_colormap (MatenuMenu* self, gboolean value) {
	GdkScreen* screen;
	GdkColormap* colormap;
	g_return_if_fail (self != NULL);
	if (self->priv->_use_rgba_colormap == value) {
		return;
	}
	self->priv->_use_rgba_colormap = value;
	screen = _g_object_ref0 (gtk_widget_get_screen (((GtkMenu*) self)->toplevel));
	colormap = _g_object_ref0 (gdk_screen_get_rgba_colormap (screen));
	if (colormap != NULL) {
		gtk_widget_set_colormap (((GtkMenu*) self)->toplevel, colormap);
		gtk_widget_set_colormap ((GtkWidget*) self, colormap);
	}
	_g_object_unref0 (colormap);
	_g_object_unref0 (screen);
	g_object_notify ((GObject *) self, "use-rgba-colormap");
}


static MatenuItem* matenu_menu_real_get_owner (MatenuShell* base) {
	MatenuItem* result;
	MatenuMenu* self;
	GtkWidget* _tmp0_;
	self = (MatenuMenu*) base;
	if (self->priv->_is_topmost) {
		result = NULL;
		return result;
	}
	result = (_tmp0_ = gtk_menu_get_attach_widget ((GtkMenu*) self), MATENU_IS_ITEM (_tmp0_) ? ((MatenuItem*) _tmp0_) : NULL);
	return result;
}


static gint matenu_menu_real_get_length (MatenuShell* base) {
	gint result;
	MatenuMenu* self;
	self = (MatenuMenu*) base;
	result = gtk_menu_shell_get_length (self);
	return result;
}


static void matenu_menu_real_set_length (MatenuShell* base, gint value) {
	MatenuMenu* self;
	self = (MatenuMenu*) base;
	gtk_menu_shell_set_length (self, value);
	g_object_notify ((GObject *) self, "length");
}


static GObject * matenu_menu_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	MatenuMenu * self;
	parent_class = G_OBJECT_CLASS (matenu_menu_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = MATENU_MENU (obj);
	{
		matenu_menu_set_use_rgba_colormap (self, matenu_menu_default_use_rgba_colormap);
	}
	return obj;
}


static void matenu_menu_class_init (MatenuMenuClass * klass) {
	matenu_menu_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (MatenuMenuPrivate));
	GTK_OBJECT_CLASS (klass)->destroy = matenu_menu_real_destroy;
	G_OBJECT_CLASS (klass)->get_property = matenu_menu_get_property;
	G_OBJECT_CLASS (klass)->set_property = matenu_menu_set_property;
	G_OBJECT_CLASS (klass)->constructor = matenu_menu_constructor;
	G_OBJECT_CLASS (klass)->finalize = matenu_menu_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), MATENU_MENU_IS_TOPMOST, g_param_spec_boolean ("is-topmost", "is-topmost", "is-topmost", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), MATENU_MENU_USE_RGBA_COLORMAP, g_param_spec_boolean ("use-rgba-colormap", "use-rgba-colormap", "use-rgba-colormap", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_override_property (G_OBJECT_CLASS (klass), MATENU_MENU_OWNER, "owner");
	g_object_class_override_property (G_OBJECT_CLASS (klass), MATENU_MENU_LENGTH, "length");
	{
		MatenuMenuItem* _include_menu_item_definiation;
		_include_menu_item_definiation = NULL;
		_g_object_unref0 (_include_menu_item_definiation);
	}
}


static void matenu_menu_matenu_shell_interface_init (MatenuShellIface * iface) {
	matenu_menu_matenu_shell_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_item = matenu_menu_real_get_item;
	iface->get_item_by_id = matenu_menu_real_get_item_by_id;
	iface->get_item_position = matenu_menu_real_get_item_position;
	iface->get_owner = matenu_menu_real_get_owner;
	iface->get_length = matenu_menu_real_get_length;
	iface->set_length = matenu_menu_real_set_length;
}


static void matenu_menu_instance_init (MatenuMenu * self) {
	self->priv = MATENU_MENU_GET_PRIVATE (self);
	self->priv->_use_rgba_colormap = FALSE;
	self->priv->_is_topmost = FALSE;
}


static void matenu_menu_finalize (GObject* obj) {
	MatenuMenu * self;
	self = MATENU_MENU (obj);
	G_OBJECT_CLASS (matenu_menu_parent_class)->finalize (obj);
}


GType matenu_menu_get_type (void) {
	static volatile gsize matenu_menu_type_id__volatile = 0;
	if (g_once_init_enter (&matenu_menu_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MatenuMenuClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) matenu_menu_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MatenuMenu), 0, (GInstanceInitFunc) matenu_menu_instance_init, NULL };
		static const GInterfaceInfo matenu_shell_info = { (GInterfaceInitFunc) matenu_menu_matenu_shell_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType matenu_menu_type_id;
		matenu_menu_type_id = g_type_register_static (GTK_TYPE_MENU, "MatenuMenu", &g_define_type_info, 0);
		g_type_add_interface_static (matenu_menu_type_id, MATENU_TYPE_SHELL, &matenu_shell_info);
		g_once_init_leave (&matenu_menu_type_id__volatile, matenu_menu_type_id);
	}
	return matenu_menu_type_id__volatile;
}


static void matenu_menu_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	MatenuMenu * self;
	self = MATENU_MENU (object);
	switch (property_id) {
		case MATENU_MENU_IS_TOPMOST:
		g_value_set_boolean (value, matenu_menu_get_is_topmost (self));
		break;
		case MATENU_MENU_USE_RGBA_COLORMAP:
		g_value_set_boolean (value, matenu_menu_get_use_rgba_colormap (self));
		break;
		case MATENU_MENU_OWNER:
		g_value_set_object (value, matenu_shell_get_owner ((MatenuShell*) self));
		break;
		case MATENU_MENU_LENGTH:
		g_value_set_int (value, matenu_shell_get_length ((MatenuShell*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void matenu_menu_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	MatenuMenu * self;
	self = MATENU_MENU (object);
	switch (property_id) {
		case MATENU_MENU_IS_TOPMOST:
		matenu_menu_set_is_topmost (self, g_value_get_boolean (value));
		break;
		case MATENU_MENU_USE_RGBA_COLORMAP:
		matenu_menu_set_use_rgba_colormap (self, g_value_get_boolean (value));
		break;
		case MATENU_MENU_LENGTH:
		matenu_shell_set_length ((MatenuShell*) self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static int _vala_strcmp0 (const char * str1, const char * str2) {
	if (str1 == NULL) {
		return -(str1 != str2);
	}
	if (str2 == NULL) {
		return str1 != str2;
	}
	return strcmp (str1, str2);
}




