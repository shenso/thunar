/* vi:set et ai sw=2 sts=2 ts=2: */
/*-
 * Copyright (c) 2005-2006 Benedikt Meurer <benny@xfce.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __THUNAR_LOCATION_BUTTON_H__
#define __THUNAR_LOCATION_BUTTON_H__

#include "thunar/thunar-file.h"

G_BEGIN_DECLS;

typedef struct _ThunarLocationButtonClass ThunarLocationButtonClass;
typedef struct _ThunarLocationButton      ThunarLocationButton;

#define THUNAR_TYPE_LOCATION_BUTTON (thunar_location_button_get_type ())
#define THUNAR_LOCATION_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THUNAR_TYPE_LOCATION_BUTTON, ThunarLocationButton))
#define THUNAR_LOCATION_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THUNAR_TYPE_LOCATION_BUTTON, ThunarLocationButtonClass))
#define THUNAR_IS_LOCATION_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THUNAR_TYPE_LOCATION_BUTTON))
#define THUNAR_IS_LOCATION_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THUNAR_TYPE_LOCATION_BUTTON))
#define THUNAR_LOCATION_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THUNAR_TYPE_LOCATION_BUTTON, ThunarLocationButtonClass))

GType
thunar_location_button_get_type (void) G_GNUC_CONST;

GtkWidget *
thunar_location_button_new (void) G_GNUC_MALLOC;

ThunarFile *
thunar_location_button_get_file (ThunarLocationButton *location_button);
void
thunar_location_button_set_file (ThunarLocationButton *location_button,
                                 ThunarFile           *file);
gint
thunar_location_button_get_max_width (ThunarLocationButton *location_button);
void
thunar_location_button_set_max_width (ThunarLocationButton *location_button,
                                      gint                  max_width);

G_END_DECLS;

#endif /* !__THUNAR_LOCATION_BUTTON_H__ */
