

using Gtk;
using Granite;
using WebKit;

namespace philon {
	class philonWindow : Granite.Application {
		construct {
            build_data_dir     = "";
            build_pkg_data_dir = "";
            build_release_name = "Philon";
            build_version      = "0.0.1";
            build_version_info = "0.0.1";
            program_name       = "Philon";
            exec_name          = "Philon";
            app_copyright      = "2014";
            app_years          = "2014";
            app_icon           = "taxi";
            app_launcher       = "";
            main_url           = "https://github.com/Digi59404/Philon";
            bug_url            = "https://github.com/Digi59404/Philon/issues";
            about_authors      = {
                                    "Chris Timberlake <CT@ChristopherTimberlake.com>"
                                 };
            about_documenters  = {};
            about_artists      = {};
            about_comments     = "";
            about_translators  = "";
            about_license      = "";
            about_license_type = Gtk.License.MIT_X11;
        }

        public Gtk.Window 		instance;
        public Gtk.HeaderBar 	header;
        public Gtk.Grid			mainContent;
        public WebView			wbview;

        public activeList		activeList_i;
        public folderList		folderList_i;

		public philonWindow() {}

		protected override void activate () {
            instance = new Gtk.Window();

            instance.title = "Hello World!";
			instance.set_border_width (12);
			instance.set_position (Gtk.WindowPosition.CENTER);
			instance.set_default_size (350, 70);
			instance.destroy.connect (Gtk.main_quit);

			/* Fancy Headbar! */
			header = new Gtk.HeaderBar();
			header.title = "Philon";
			header.show_close_button = true;
			header.destroy.connect (Gtk.main_quit);


			/* Add active Files Source List */
			activeList_i = new activeList();

			/* Add folder Source List */
			folderList_i = new folderList();

			/* This is gonna hold our code editor's meat! */
			wbview = new WebView();
			wbview.show();
			/* Make sure our meat scrolls */
		    var sWindow = new ScrolledWindow(null, null);
			sWindow.set_policy(PolicyType.AUTOMATIC, PolicyType.AUTOMATIC);

			/* Testing */
			wbview.load_uri("http://www.google.com");
			sWindow.add(wbview);

			var mainBox = new Gtk.Box (Gtk.Orientation.HORIZONTAL, 0);
 			var folderBox = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
 			folderBox.pack_start(activeList_i, false, true, 0);
 			folderBox.pack_start(folderList_i, false, true, 0);

 			mainBox.pack_start(folderBox, false, false, 0);
 			mainBox.pack_start(sWindow, true, true, 0);

			instance.add(mainBox);
			/* Add that fancyass header */
			instance.set_titlebar(header);
            instance.show_all();

            /* Keep GTK In the Loop.... Eh? Eh? */
            Gtk.main();
        }
	}
}