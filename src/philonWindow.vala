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

        /* UI Stuff */
        public Gtk.Window 		instance;
        public Gtk.HeaderBar 	header;
        public WebKit_View		wbview;
        public activeList		activeList_i;
        public activeNotebook	activeNotebook_i;
        public folderList		folderList_i;
        public Granite.Widgets.AppMenu 	newButton;

        /* I/O Stuff */
       // public docManager		doc;

		public philonWindow() {
			docManager.window = this;
		}

		private void setupHeaderBar(){
			/* Fancy Headbar! */
			header = new Gtk.HeaderBar();
			header.title = "Philon";
			header.show_close_button = true;
			header.destroy.connect (Gtk.main_quit);

			var accel_group = new Gtk.AccelGroup();


			/* New Icon */
			Gtk.Menu newModel = new Gtk.Menu ();
			newModel.set_accel_group(accel_group);


			Gtk.MenuItem item_folder = new Gtk.MenuItem.with_label ("Open Folder");
			item_folder.activate.connect(() =>{
				this.dialog_openFolder();
			});
			newModel.add (item_folder);

			Gtk.MenuItem item_file = new Gtk.MenuItem.with_label ("Open File");
			item_file.activate.connect(() =>{
				this.dialog_openFile();
			});
			newModel.add (item_file);

			Gtk.SeparatorMenuItem separator = new Gtk.SeparatorMenuItem ();
			newModel.add (separator);

			Gtk.MenuItem item_save = new Gtk.MenuItem.with_label ("Save File");
			item_save.activate.connect(() =>{
				this.wbview.wbview.execute_script("docSave();");
			});
			newModel.add (item_save);
			newModel.add_accelerator("activate", accel_group, 'S', Gdk.ModifierType.CONTROL_MASK, Gtk.AccelFlags.VISIBLE);

			Gtk.SeparatorMenuItem separator1 = new Gtk.SeparatorMenuItem ();
			newModel.add (separator1);

			Gtk.MenuItem item_settings = new Gtk.MenuItem.with_label ("Settings");
			item_settings.activate.connect(() =>{
				//this.dialog_openFile();
			});
			newModel.add (item_settings);


			newButton = new Granite.Widgets.AppMenu(newModel);
			newButton.set_stock_id("new");

			var nf_menu = new Granite.Widgets.ToolButtonWithMenu(new Gtk.Image.from_icon_name ("media-playback-start", Gtk.IconSize.LARGE_TOOLBAR), "", newModel);

			header.pack_start(nf_menu);

			header.pack_end(newButton);
			instance.set_titlebar(header);
		}

		private Gtk.Widget setupFolderView(){
			/* Add active Files Source List */
			activeNotebook_i = new activeNotebook();


			/* Add folder Source List */
			folderList_i = new folderList();

			var folderBox = new Granite.Widgets.ThinPaned(Gtk.Orientation.VERTICAL);
 			folderBox.add1(activeNotebook_i);
 			folderBox.add2(folderList_i);

 			folderBox.set_position(100);

 			return folderBox;
		}

		protected override void activate () {
            instance = new Gtk.Window();

            instance.title = "Hello World!";
			instance.set_position (Gtk.WindowPosition.CENTER);
			instance.set_default_size (800, 600);
			instance.destroy.connect (Gtk.main_quit);

			this.setupHeaderBar();

			this.wbview = new WebKit_View();

 			var mainBox = new Granite.Widgets.ThinPaned();
 			mainBox.add1(this.setupFolderView());
 			mainBox.add2(this.wbview);

 			mainBox.set_position(200);

			instance.add(mainBox);
			/* Add that fancyass header */
			instance.set_titlebar(header);
            instance.show_all();

            /* Keep GTK In the Loop.... Eh? Eh? */
            Gtk.main();
        }

        private void dialog_openFile() {
        	var file_chooser = new FileChooserDialog ("Open File", (Gtk.Window) this,
                                      FileChooserAction.OPEN,
                                      Stock.CANCEL, ResponseType.CANCEL,
                                      Stock.OPEN, ResponseType.ACCEPT);

	        if (file_chooser.run () == ResponseType.ACCEPT) {
	            var docName = file_chooser.get_filename();
        	            activeNotebook_i.activeList_t.activeList_i.root.add(new activeItem(this, file_chooser.get_file().get_basename(), file_chooser.get_filename ()));
	        }
	        file_chooser.destroy ();
        }

        private void dialog_openFolder(){
        	var file_chooser = new FileChooserDialog ("Open Folder", (Gtk.Window) this,
                                      FileChooserAction.SELECT_FOLDER,
                                      Stock.CANCEL, ResponseType.CANCEL,
                                      Stock.OPEN, ResponseType.ACCEPT);

	        if (file_chooser.run () == ResponseType.ACCEPT) {
	        	this.folderList_i.projectList.clear();
	            var docName = file_chooser.get_filename();
	            docManager.openFolder(docName, folderList_i, this);
	            this.folderList_i.refilter();
	        }
	        file_chooser.destroy ();
        }
	}
}