using GLib;

namespace philon {
	class docManager {

		public static philonWindow window;
		public static docManager(){
		}

		/* Root Method */
		public static void openFolder(string path, folderList folderlist, philonWindow window){
			var file = File.new_for_path(path);
			try {
				var e = file.enumerate_children(FileAttribute.STANDARD_NAME, 0, new Cancellable());
				while(true){
					var files = e.next_file(new Cancellable());
					if (files == null) {
	                    break;
	                }
					if (files.get_file_type () == FileType.DIRECTORY) {
						//File subdir = file.resolve_relative_path (files.get_name ());
						//list_children (subdir,  + " ", cancellable);
						folderlist.root.add( new folderFolder(window, files.get_name (), path+"/"+files.get_name ()));
					} else {
						folderlist.root.add( new folderItem(window, files.get_name (), path+"/"+files.get_name ()));
					}
				}

			} catch (Error err){
				stderr.printf(err.message);
			}
		}

		/* When you open a Folder! */
		public static void openFolderFolder(string path, folderFolder folder, philonWindow window){
			var file = File.new_for_path(path);
			try {
				var e = file.enumerate_children(FileAttribute.STANDARD_NAME, 0, new Cancellable());
				while(true){
					var files = e.next_file(new Cancellable());
					if (files == null) {
	                    break;
	                }
					if (files.get_file_type () == FileType.DIRECTORY) {
						folder.add( new folderFolder(window, files.get_name (), path+"/"+files.get_name ()));
					} else {
						folder.add( new folderItem(window, files.get_name (), path+"/"+files.get_name ()));
					}
				}

			} catch (Error err){
				stderr.printf(err.message);
			}
		}
	}
}