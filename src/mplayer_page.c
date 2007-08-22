#include "ubuntu-tweak.h"

gchar *key_vo_driver="/apps/ubuntu-tweak/apps/mplayer/vo_driver";
gchar *script_mplayer="scripts/ubuntu-tweak-script mplayer";

GtkWidget *create_mplayer_page()
{
	GtkWidget *main_vbox;
	GtkWidget *vbox;
	GtkWidget *hbox;
	GtkWidget *label;
	GtkWidget *checkbutton;

	main_vbox=gtk_vbox_new(FALSE,10);
	gtk_widget_show(main_vbox);
	gtk_container_set_border_width(GTK_CONTAINER(main_vbox),5);

	label=gtk_label_new("在这里设置mplayer");
	gtk_widget_show(label);
	gtk_box_pack_start(GTK_BOX(main_vbox),label,FALSE,FALSE,0);

	hbox=gtk_hbox_new(FALSE,10);
	gtk_widget_show(hbox);
	gtk_box_pack_start(GTK_BOX(main_vbox),hbox,FALSE,FALSE,0);

	label=gtk_label_new(" ");
	gtk_widget_show(label);
	gtk_box_pack_start(GTK_BOX(hbox),label,FALSE,FALSE,0);

	vbox=gtk_vbox_new(FALSE,10);
	gtk_widget_show(vbox);
	gtk_box_pack_start(GTK_BOX(hbox),vbox,FALSE,FALSE,0);

	checkbutton=create_text_checkbutton("Use x11 Video Driver",key_vo_driver,script_mplayer,NULL);
	gtk_widget_show(checkbutton);
	gtk_box_pack_start(GTK_BOX(vbox),checkbutton,FALSE,FALSE,0);

	return main_vbox; 
}
