/* item.c generated by valac, the Vala compiler
 * generated from item.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define MATENU_TYPE_ITEM_TYPE (matenu_item_type_get_type ())

#define MATENU_TYPE_ITEM_STATE (matenu_item_state_get_type ())

#define MATENU_TYPE_ITEM (matenu_item_get_type ())
#define MATENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_ITEM, MatenuItem))
#define MATENU_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_ITEM))
#define MATENU_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), MATENU_TYPE_ITEM, MatenuItemIface))

typedef struct _MatenuItem MatenuItem;
typedef struct _MatenuItemIface MatenuItemIface;

#define MATENU_TYPE_SHELL (matenu_shell_get_type ())
#define MATENU_SHELL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MATENU_TYPE_SHELL, MatenuShell))
#define MATENU_IS_SHELL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MATENU_TYPE_SHELL))
#define MATENU_SHELL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), MATENU_TYPE_SHELL, MatenuShellIface))

typedef struct _MatenuShell MatenuShell;
typedef struct _MatenuShellIface MatenuShellIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

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

struct _MatenuShellIface {
	GTypeInterface parent_iface;
	MatenuItem* (*get_item) (MatenuShell* self, gint position);
	MatenuItem* (*get_item_by_id) (MatenuShell* self, const char* id);
	gint (*get_item_position) (MatenuShell* self, MatenuItem* item);
	MatenuItem* (*get_owner) (MatenuShell* self);
	gint (*get_length) (MatenuShell* self);
	void (*set_length) (MatenuShell* self, gint value);
};

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



GType matenu_item_type_get_type (void) G_GNUC_CONST;
GType matenu_item_state_get_type (void) G_GNUC_CONST;
GType matenu_shell_get_type (void) G_GNUC_CONST;
GType matenu_item_get_type (void) G_GNUC_CONST;
MatenuShell* matenu_item_get_shell (MatenuItem* self);
MatenuItem* matenu_shell_get_owner (MatenuShell* self);
gboolean matenu_item_is_child_of (MatenuItem* self, MatenuItem* possible_parent);
MatenuItemState matenu_item_state_from_string (const char* str);
const char* matenu_item_state_to_string (MatenuItemState state);
MatenuItemType matenu_item_type_from_string (const char* str);
gboolean matenu_item_type_has_label (MatenuItemType type);
const char* matenu_item_type_to_string (MatenuItemType type);
MatenuShell* matenu_item_get_sub_shell (MatenuItem* self);
gboolean matenu_item_get_has_sub_shell (MatenuItem* self);
void matenu_item_set_has_sub_shell (MatenuItem* self, gboolean value);
gboolean matenu_item_get_client_side_sub_shell (MatenuItem* self);
void matenu_item_set_client_side_sub_shell (MatenuItem* self, gboolean value);
MatenuShell* matenu_shell_get_topmost_shell (MatenuShell* self);
MatenuShell* matenu_item_get_topmost_shell (MatenuItem* self);
gint matenu_shell_get_item_position (MatenuShell* self, MatenuItem* item);
gint matenu_item_get_item_position (MatenuItem* self);
const char* matenu_item_get_item_id (MatenuItem* self);
void matenu_item_set_item_id (MatenuItem* self, const char* value);
MatenuItemType matenu_item_get_item_type (MatenuItem* self);
void matenu_item_set_item_type (MatenuItem* self, MatenuItemType value);
gboolean matenu_item_get_item_use_underline (MatenuItem* self);
void matenu_item_set_item_use_underline (MatenuItem* self, gboolean value);
gboolean matenu_item_get_item_sensitive (MatenuItem* self);
void matenu_item_set_item_sensitive (MatenuItem* self, gboolean value);
gboolean matenu_item_get_item_visible (MatenuItem* self);
void matenu_item_set_item_visible (MatenuItem* self, gboolean value);
MatenuItemState matenu_item_get_item_state (MatenuItem* self);
void matenu_item_set_item_state (MatenuItem* self, MatenuItemState value);
const char* matenu_item_get_item_label (MatenuItem* self);
void matenu_item_set_item_label (MatenuItem* self, const char* value);
const char* matenu_item_get_item_icon (MatenuItem* self);
void matenu_item_set_item_icon (MatenuItem* self, const char* value);
const char* matenu_item_get_item_accel_text (MatenuItem* self);
void matenu_item_set_item_accel_text (MatenuItem* self, const char* value);
const char* matenu_item_get_item_font (MatenuItem* self);
void matenu_item_set_item_font (MatenuItem* self, const char* value);
char* matenu_item_get_item_path_name (MatenuItem* self);
char* matenu_item_get_item_path (MatenuItem* self);



GType matenu_item_type_get_type (void) {
	static volatile gsize matenu_item_type_type_id__volatile = 0;
	if (g_once_init_enter (&matenu_item_type_type_id__volatile)) {
		static const GEnumValue values[] = {{MATENU_ITEM_TYPE_NORMAL, "MATENU_ITEM_TYPE_NORMAL", "normal"}, {MATENU_ITEM_TYPE_CHECK, "MATENU_ITEM_TYPE_CHECK", "check"}, {MATENU_ITEM_TYPE_RADIO, "MATENU_ITEM_TYPE_RADIO", "radio"}, {MATENU_ITEM_TYPE_IMAGE, "MATENU_ITEM_TYPE_IMAGE", "image"}, {MATENU_ITEM_TYPE_SEPARATOR, "MATENU_ITEM_TYPE_SEPARATOR", "separator"}, {MATENU_ITEM_TYPE_ARROW, "MATENU_ITEM_TYPE_ARROW", "arrow"}, {MATENU_ITEM_TYPE_ICON, "MATENU_ITEM_TYPE_ICON", "icon"}, {0, NULL, NULL}};
		GType matenu_item_type_type_id;
		matenu_item_type_type_id = g_enum_register_static ("MatenuItemType", values);
		g_once_init_leave (&matenu_item_type_type_id__volatile, matenu_item_type_type_id);
	}
	return matenu_item_type_type_id__volatile;
}


GType matenu_item_state_get_type (void) {
	static volatile gsize matenu_item_state_type_id__volatile = 0;
	if (g_once_init_enter (&matenu_item_state_type_id__volatile)) {
		static const GEnumValue values[] = {{MATENU_ITEM_STATE_UNTOGGLED, "MATENU_ITEM_STATE_UNTOGGLED", "untoggled"}, {MATENU_ITEM_STATE_TOGGLED, "MATENU_ITEM_STATE_TOGGLED", "toggled"}, {MATENU_ITEM_STATE_TRISTATE, "MATENU_ITEM_STATE_TRISTATE", "tristate"}, {0, NULL, NULL}};
		GType matenu_item_state_type_id;
		matenu_item_state_type_id = g_enum_register_static ("MatenuItemState", values);
		g_once_init_leave (&matenu_item_state_type_id__volatile, matenu_item_state_type_id);
	}
	return matenu_item_state_type_id__volatile;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


gboolean matenu_item_is_child_of (MatenuItem* self, MatenuItem* possible_parent) {
	gboolean result = FALSE;
	MatenuShell* parent_shell;
	MatenuItem* parent_item;
	g_return_val_if_fail (possible_parent != NULL, FALSE);
	parent_shell = NULL;
	parent_item = _g_object_ref0 (self);
	{
		MatenuItem* _tmp0_;
		gboolean _tmp1_;
		parent_item = (_tmp0_ = _g_object_ref0 (self), _g_object_unref0 (parent_item), _tmp0_);
		_tmp1_ = TRUE;
		while (TRUE) {
			gboolean _tmp4_ = FALSE;
			if (!_tmp1_) {
				MatenuShell* _tmp2_;
				MatenuItem* _tmp3_;
				parent_shell = (_tmp2_ = _g_object_ref0 (matenu_item_get_shell (parent_item)), _g_object_unref0 (parent_shell), _tmp2_);
				parent_item = (_tmp3_ = _g_object_ref0 (matenu_shell_get_owner (parent_shell)), _g_object_unref0 (parent_item), _tmp3_);
			}
			_tmp1_ = FALSE;
			if (parent_item != NULL) {
				_tmp4_ = parent_item != possible_parent;
			} else {
				_tmp4_ = FALSE;
			}
			if (!_tmp4_) {
				break;
			}
			continue;
		}
	}
	result = parent_item != NULL;
	_g_object_unref0 (parent_item);
	_g_object_unref0 (parent_shell);
	return result;
}


MatenuItemState matenu_item_state_from_string (const char* str) {
	MatenuItemState result = 0;
	GQuark _tmp1_;
	const char* _tmp0_;
	static GQuark _tmp1__label0 = 0;
	static GQuark _tmp1__label1 = 0;
	static GQuark _tmp1__label2 = 0;
	static GQuark _tmp1__label3 = 0;
	static GQuark _tmp1__label4 = 0;
	static GQuark _tmp1__label5 = 0;
	static GQuark _tmp1__label6 = 0;
	static GQuark _tmp1__label7 = 0;
	_tmp0_ = str;
	_tmp1_ = (NULL == _tmp0_) ? 0 : g_quark_from_string (_tmp0_);
	if ((((_tmp1_ == ((0 != _tmp1__label0) ? _tmp1__label0 : (_tmp1__label0 = g_quark_from_static_string ("true")))) || (_tmp1_ == ((0 != _tmp1__label1) ? _tmp1__label1 : (_tmp1__label1 = g_quark_from_static_string ("toggled"))))) || (_tmp1_ == ((0 != _tmp1__label2) ? _tmp1__label2 : (_tmp1__label2 = g_quark_from_static_string ("t"))))) || (_tmp1_ == ((0 != _tmp1__label3) ? _tmp1__label3 : (_tmp1__label3 = g_quark_from_static_string ("1")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_STATE_TOGGLED;
			return result;
		}
	} else if ((((_tmp1_ == ((0 != _tmp1__label4) ? _tmp1__label4 : (_tmp1__label4 = g_quark_from_static_string ("false")))) || (_tmp1_ == ((0 != _tmp1__label5) ? _tmp1__label5 : (_tmp1__label5 = g_quark_from_static_string ("untoggled"))))) || (_tmp1_ == ((0 != _tmp1__label6) ? _tmp1__label6 : (_tmp1__label6 = g_quark_from_static_string ("f"))))) || (_tmp1_ == ((0 != _tmp1__label7) ? _tmp1__label7 : (_tmp1__label7 = g_quark_from_static_string ("0")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_STATE_UNTOGGLED;
			return result;
		}
	} else
	switch (0) {
		default:
		{
			result = MATENU_ITEM_STATE_TRISTATE;
			return result;
		}
	}
}


const char* matenu_item_state_to_string (MatenuItemState state) {
	const char* result = NULL;
	switch (state) {
		case MATENU_ITEM_STATE_UNTOGGLED:
		{
			result = "untoggled";
			return result;
		}
		case MATENU_ITEM_STATE_TOGGLED:
		{
			result = "toggled";
			return result;
		}
		case MATENU_ITEM_STATE_TRISTATE:
		{
			result = NULL;
			return result;
		}
	}
	result = NULL;
	return result;
}


MatenuItemType matenu_item_type_from_string (const char* str) {
	MatenuItemType result = 0;
	GQuark _tmp1_;
	const char* _tmp0_;
	static GQuark _tmp1__label0 = 0;
	static GQuark _tmp1__label1 = 0;
	static GQuark _tmp1__label2 = 0;
	static GQuark _tmp1__label3 = 0;
	static GQuark _tmp1__label4 = 0;
	static GQuark _tmp1__label5 = 0;
	static GQuark _tmp1__label6 = 0;
	static GQuark _tmp1__label7 = 0;
	static GQuark _tmp1__label8 = 0;
	static GQuark _tmp1__label9 = 0;
	static GQuark _tmp1__label10 = 0;
	_tmp0_ = str;
	_tmp1_ = (NULL == _tmp0_) ? 0 : g_quark_from_string (_tmp0_);
	if ((_tmp1_ == ((0 != _tmp1__label0) ? _tmp1__label0 : (_tmp1__label0 = g_quark_from_static_string ("check")))) || (_tmp1_ == ((0 != _tmp1__label1) ? _tmp1__label1 : (_tmp1__label1 = g_quark_from_static_string ("c")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_CHECK;
			return result;
		}
	} else if ((_tmp1_ == ((0 != _tmp1__label2) ? _tmp1__label2 : (_tmp1__label2 = g_quark_from_static_string ("radio")))) || (_tmp1_ == ((0 != _tmp1__label3) ? _tmp1__label3 : (_tmp1__label3 = g_quark_from_static_string ("r")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_RADIO;
			return result;
		}
	} else if ((_tmp1_ == ((0 != _tmp1__label4) ? _tmp1__label4 : (_tmp1__label4 = g_quark_from_static_string ("image")))) || (_tmp1_ == ((0 != _tmp1__label5) ? _tmp1__label5 : (_tmp1__label5 = g_quark_from_static_string ("i")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_IMAGE;
			return result;
		}
	} else if ((_tmp1_ == ((0 != _tmp1__label6) ? _tmp1__label6 : (_tmp1__label6 = g_quark_from_static_string ("arrow")))) || (_tmp1_ == ((0 != _tmp1__label7) ? _tmp1__label7 : (_tmp1__label7 = g_quark_from_static_string ("a")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_ARROW;
			return result;
		}
	} else if ((_tmp1_ == ((0 != _tmp1__label8) ? _tmp1__label8 : (_tmp1__label8 = g_quark_from_static_string ("separator")))) || (_tmp1_ == ((0 != _tmp1__label9) ? _tmp1__label9 : (_tmp1__label9 = g_quark_from_static_string ("s")))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_SEPARATOR;
			return result;
		}
	} else if (_tmp1_ == ((0 != _tmp1__label10) ? _tmp1__label10 : (_tmp1__label10 = g_quark_from_static_string ("icon"))))
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_ICON;
			return result;
		}
	} else
	switch (0) {
		default:
		{
			result = MATENU_ITEM_TYPE_NORMAL;
			return result;
		}
	}
}


gboolean matenu_item_type_has_label (MatenuItemType type) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	if (type == MATENU_ITEM_TYPE_NORMAL) {
		_tmp2_ = TRUE;
	} else {
		_tmp2_ = type == MATENU_ITEM_TYPE_IMAGE;
	}
	if (_tmp2_) {
		_tmp1_ = TRUE;
	} else {
		_tmp1_ = type == MATENU_ITEM_TYPE_CHECK;
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		_tmp0_ = type == MATENU_ITEM_TYPE_RADIO;
	}
	if (_tmp0_) {
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


const char* matenu_item_type_to_string (MatenuItemType type) {
	const char* result = NULL;
	switch (type) {
		case MATENU_ITEM_TYPE_CHECK:
		{
			result = "check";
			return result;
		}
		case MATENU_ITEM_TYPE_RADIO:
		{
			result = "radio";
			return result;
		}
		case MATENU_ITEM_TYPE_NORMAL:
		{
			result = NULL;
			return result;
		}
		case MATENU_ITEM_TYPE_IMAGE:
		{
			result = "image";
			return result;
		}
		case MATENU_ITEM_TYPE_ICON:
		{
			result = "icon";
			return result;
		}
		case MATENU_ITEM_TYPE_ARROW:
		{
			result = "arrow";
			return result;
		}
		case MATENU_ITEM_TYPE_SEPARATOR:
		{
			result = "separator";
			return result;
		}
	}
	result = NULL;
	return result;
}


MatenuShell* matenu_item_get_shell (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_shell (self);
}


MatenuShell* matenu_item_get_sub_shell (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_sub_shell (self);
}


gboolean matenu_item_get_has_sub_shell (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_has_sub_shell (self);
}


void matenu_item_set_has_sub_shell (MatenuItem* self, gboolean value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_has_sub_shell (self, value);
}


gboolean matenu_item_get_client_side_sub_shell (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_client_side_sub_shell (self);
}


void matenu_item_set_client_side_sub_shell (MatenuItem* self, gboolean value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_client_side_sub_shell (self, value);
}


MatenuShell* matenu_item_get_topmost_shell (MatenuItem* self) {
	MatenuShell* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = matenu_shell_get_topmost_shell (matenu_item_get_shell (self));
	return result;
}


gint matenu_item_get_item_position (MatenuItem* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = matenu_shell_get_item_position (matenu_item_get_shell (self), self);
	return result;
}


const char* matenu_item_get_item_id (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_id (self);
}


void matenu_item_set_item_id (MatenuItem* self, const char* value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_id (self, value);
}


MatenuItemType matenu_item_get_item_type (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_type (self);
}


void matenu_item_set_item_type (MatenuItem* self, MatenuItemType value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_type (self, value);
}


gboolean matenu_item_get_item_use_underline (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_use_underline (self);
}


void matenu_item_set_item_use_underline (MatenuItem* self, gboolean value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_use_underline (self, value);
}


gboolean matenu_item_get_item_sensitive (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_sensitive (self);
}


void matenu_item_set_item_sensitive (MatenuItem* self, gboolean value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_sensitive (self, value);
}


gboolean matenu_item_get_item_visible (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_visible (self);
}


void matenu_item_set_item_visible (MatenuItem* self, gboolean value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_visible (self, value);
}


MatenuItemState matenu_item_get_item_state (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_state (self);
}


void matenu_item_set_item_state (MatenuItem* self, MatenuItemState value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_state (self, value);
}


const char* matenu_item_get_item_label (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_label (self);
}


void matenu_item_set_item_label (MatenuItem* self, const char* value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_label (self, value);
}


const char* matenu_item_get_item_icon (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_icon (self);
}


void matenu_item_set_item_icon (MatenuItem* self, const char* value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_icon (self, value);
}


const char* matenu_item_get_item_accel_text (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_accel_text (self);
}


void matenu_item_set_item_accel_text (MatenuItem* self, const char* value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_accel_text (self, value);
}


const char* matenu_item_get_item_font (MatenuItem* self) {
	return MATENU_ITEM_GET_INTERFACE (self)->get_item_font (self);
}


void matenu_item_set_item_font (MatenuItem* self, const char* value) {
	MATENU_ITEM_GET_INTERFACE (self)->set_item_font (self, value);
}


char* matenu_item_get_item_path_name (MatenuItem* self) {
	char* result;
	g_return_val_if_fail (self != NULL, NULL);
	if (matenu_item_get_item_id (self) != NULL) {
		result = g_strdup (matenu_item_get_item_id (self));
		return result;
	} else {
		result = g_strdup_printf ("%i", matenu_item_get_item_position (self));
		return result;
	}
}


char* matenu_item_get_item_path (MatenuItem* self) {
	char* result;
	GString* sb;
	MatenuItem* item;
	MatenuShell* parent;
	char* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	sb = g_string_new ("");
	item = _g_object_ref0 (self);
	parent = _g_object_ref0 (matenu_item_get_shell (item));
	g_string_append (sb, _tmp0_ = matenu_item_get_item_path_name (self));
	_g_free0 (_tmp0_);
	while (TRUE) {
		MatenuItem* _tmp2_;
		MatenuItem* _tmp1_;
		char* _tmp3_;
		MatenuShell* _tmp4_;
		if (!(parent != NULL)) {
			break;
		}
		item = (_tmp2_ = _g_object_ref0 ((_tmp1_ = matenu_shell_get_owner (parent), MATENU_IS_ITEM (_tmp1_) ? ((MatenuItem*) _tmp1_) : NULL)), _g_object_unref0 (item), _tmp2_);
		if (item == NULL) {
			break;
		}
		g_string_prepend_unichar (sb, (gunichar) '/');
		g_string_prepend (sb, _tmp3_ = matenu_item_get_item_path_name (item));
		_g_free0 (_tmp3_);
		parent = (_tmp4_ = _g_object_ref0 (matenu_item_get_shell (item)), _g_object_unref0 (parent), _tmp4_);
	}
	g_string_prepend_unichar (sb, (gunichar) '/');
	result = g_strdup (sb->str);
	_g_object_unref0 (parent);
	_g_object_unref0 (item);
	_g_string_free0 (sb);
	return result;
}


static void matenu_item_base_init (MatenuItemIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_object_interface_install_property (iface, g_param_spec_object ("shell", "shell", "shell", MATENU_TYPE_SHELL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_object ("sub-shell", "sub-shell", "sub-shell", MATENU_TYPE_SHELL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("has-sub-shell", "has-sub-shell", "has-sub-shell", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("client-side-sub-shell", "client-side-sub-shell", "client-side-sub-shell", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("item-id", "item-id", "item-id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_enum ("item-type", "item-type", "item-type", MATENU_TYPE_ITEM_TYPE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("item-use-underline", "item-use-underline", "item-use-underline", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("item-sensitive", "item-sensitive", "item-sensitive", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("item-visible", "item-visible", "item-visible", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_enum ("item-state", "item-state", "item-state", MATENU_TYPE_ITEM_STATE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("item-label", "item-label", "item-label", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("item-icon", "item-icon", "item-icon", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("item-accel-text", "item-accel-text", "item-accel-text", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		g_object_interface_install_property (iface, g_param_spec_string ("item-font", "item-font", "item-font", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	}
}


GType matenu_item_get_type (void) {
	static volatile gsize matenu_item_type_id__volatile = 0;
	if (g_once_init_enter (&matenu_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MatenuItemIface), (GBaseInitFunc) matenu_item_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType matenu_item_type_id;
		matenu_item_type_id = g_type_register_static (G_TYPE_INTERFACE, "MatenuItem", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (matenu_item_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&matenu_item_type_id__volatile, matenu_item_type_id);
	}
	return matenu_item_type_id__volatile;
}




