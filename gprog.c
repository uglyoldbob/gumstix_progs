#include <gtk/gtk.h>

#define s(x) #x
#define g(x) s(x)

#define STRING_MAKE(x,y) g(x) y

gint main (gint argc,
      gchar *argv[])
{
  gtk_init (&argc, &argv);
  char* gui_filename = STRING_MAKE(CONF_DIR,"/main.ui");
  GtkBuilder* builder = gtk_builder_new_from_file(gui_filename);
  GtkWidget *window = NULL;

  window = gtk_builder_get_object(builder, "main_window");
  gtk_widget_show(GTK_WIDGET(window));

  gtk_widget_show (window);

  //quit program when window is closed
  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_main ();
  return 0;
}
