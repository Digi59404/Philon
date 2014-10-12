using Gtk;
using Granite;
using WebKit;
using JSCore;

namespace philon {
	
	class WebKit_View : Bin{
		public WebView			wbview;

		public WebKit_View(){
			/* This is gonna hold our code editor's meat! */
			this.wbview = new WebView();
			var settings = new WebSettings();
			settings.enable_plugins = true;
    		settings.enable_scripts = true;
    		settings.enable_universal_access_from_file_uris = true;
    		settings.enable_developer_extras = true;


			//var inspector = this.wbview.get_inspector();

			//inspector.get_web_view(getInspectorView);
			//this.wbview.show();
			//inspector.open_window();
			//inspector.show();

			/* Make sure our meat scrolls */
		    var sWindow = new ScrolledWindow(null, null);
			sWindow.set_policy(PolicyType.AUTOMATIC, PolicyType.AUTOMATIC);


			/* Testing */
			this.wbview.load_uri("file:///home/digi/Projects/Philon/data/philon/index.html");
			this.wbview.web_inspector.inspect_web_view.connect(getInspectorView); 
			this.wbview.set_settings(settings);
			this.wbview.window_object_cleared.connect(this.JSCore_Definitions);
			sWindow.add(this.wbview);

			//this.exposeJS();

			this.add(sWindow);
		}

		public void JSCore_Definitions(WebFrame frame, void *context, void *window_object)
		{
		    unowned JSCore.Context ctx = (JSCore.Context) context;
		    JSCore.Object global = ctx.get_global_object();
		    
		    JSCore.String name = new JSCore.String.with_utf8_c_string("SaveFile");
		    JSCore.Value ex;
		                        
		    global.set_property(ctx,
		                        name,
		                        new JSCore.Object.function_with_callback(ctx, name, SaveFile),
		                        JSCore.PropertyAttribute.ReadOnly,
		                        out ex);

		   	JSCore.String markunsaved = new JSCore.String.with_utf8_c_string("MarkUnsaved");
		    JSCore.Value ex1;
		                        
		    global.set_property(ctx,
		                        markunsaved,
		                        new JSCore.Object.function_with_callback(ctx, markunsaved, MarkUnsaved),
		                        JSCore.PropertyAttribute.ReadOnly,
		                        out ex1);


		    JSCore.String openfile = new JSCore.String.with_utf8_c_string("OpenFile");
		    JSCore.Value ex2;             
		    global.set_property(ctx,
		                        openfile,
		                        new JSCore.Object.function_with_callback(ctx, openfile, JSOpenFile),
		                        JSCore.PropertyAttribute.ReadOnly,
		                        out ex2);

		 	JSCore.String clearunsaved = new JSCore.String.with_utf8_c_string("ClearUnsaved");
		    JSCore.Value ex3;
		                        
		    global.set_property(ctx,
		                        clearunsaved,
		                        new JSCore.Object.function_with_callback(ctx, clearunsaved, ClearUnsaved),
		                        JSCore.PropertyAttribute.ReadOnly,
		                        out ex3);          
		}
        public unowned WebView getInspectorView(WebView v)
		{
		    Window iWindow = new Window();
		    WebView iWebview = new WebView();

		    ScrolledWindow sWindow = new ScrolledWindow(null, null);
		    sWindow.set_policy(PolicyType.AUTOMATIC, PolicyType.AUTOMATIC);

		    sWindow.add(iWebview);
		    iWindow.add(sWindow);
		    iWindow.title = " (Web Inspector)";

		    int width, height;
		    //get_size(out width, out height);
		    //iWindow.set_default_size(width, height);

		    iWindow.show_all();

		    iWindow.delete_event.connect(() =>
		    {
			this.wbview.web_inspector.close();
			return false;
		    });

		    unowned WebView r = iWebview;
		    return r;
		}   
	}

    public static JSCore.Value SaveFile(JSCore.Context ctx, JSCore.Object function, JSCore.Object thisObject, JSCore.Value[] arguments, out JSCore.Value exception)
    {
		exception = null;

		JSCore.String js_string = arguments[0].to_string_copy(ctx, null);
		JSCore.String file_path = arguments[1].to_string_copy(ctx, null);

		size_t max_size = js_string.get_maximum_utf8_c_string_size();
		char *c_string = new char[max_size];
		js_string.get_utf8_c_string(c_string, max_size);
		
		char *c_path = new char[1024];
		file_path.get_utf8_c_string(c_path, 1023);

		 var filedata = (string) c_string;
		try {
		        var file                    = File.new_for_path ((string)c_path);
		        FileIOStream iostream       = file.replace_readwrite (null, false, FileCreateFlags.NONE);

		    OutputStream ostream = iostream.output_stream;
		    DataOutputStream dostream = new DataOutputStream (ostream);
		    uint8[] data = filedata.data;
		    long written = 0;
		    while (written < data.length) { 
			    written += dostream.write (data[written:data.length]);
		    }
		    //dvparent.badge = null;

		    } catch (Error e) {
		        stderr.printf ("%s\n", e.message);
		    } 

		return new JSCore.Value.string(ctx, js_string);
    }

	public static JSCore.Value JSOpenFile(JSCore.Context ctx, JSCore.Object function, JSCore.Object thisObject, JSCore.Value[] arguments, out JSCore.Value exception)
    {
		JSCore.String file_path = arguments[0].to_string_copy(ctx, null);
		char *c_path = new char[1024];
		file_path.get_utf8_c_string(c_path, 1023);

		var file        = GLib.File.new_for_path((string) c_path);
		var tmp_buffer  = new StringBuilder();
		var ext_result  = "txt";

		if(!file.query_exists ()){
			stderr.printf ("File '%s' doesn't exist.", file.get_path ());
		}

		try {
			var dis = new DataInputStream(file.read());
			string line;
			while ((line = dis.read_line (null)) != null) {
			    	tmp_buffer.append(line);//this.string_clean(line));
			    	tmp_buffer.append("\n");
		}

		} catch(GLib.Error e){
			stderr.printf ("Error Reading Files: '%s' ", file.get_path());
		}

		return new JSCore.Value.string(ctx, new JSCore.String.with_utf8_c_string(tmp_buffer.str));
    }
    public static JSCore.Value MarkUnsaved(JSCore.Context ctx, JSCore.Object function, JSCore.Object thisObject, JSCore.Value[] arguments, out JSCore.Value exception)
    {
		exception = null;
		JSCore.String file_path = arguments[0].to_string_copy(ctx, null);


		char *c_path = new char[1024];
		file_path.get_utf8_c_string(c_path, 1023);
		//FileManager.docview.MarkUnsaved((string)c_path);
		docManager.window.activeNotebook_i.activeList_t.activeList_i.selected.badge = "UNSAVED";

		return new JSCore.Value.string(ctx, file_path);
    }
    public static JSCore.Value ClearUnsaved(JSCore.Context ctx, JSCore.Object function, JSCore.Object thisObject, JSCore.Value[] arguments, out JSCore.Value exception)
    {
		exception = null;
		JSCore.String file_path = arguments[0].to_string_copy(ctx, null);


		char *c_path = new char[1024];
		file_path.get_utf8_c_string(c_path, 1023);
		//FileManager.docview.MarkUnsaved((string)c_path);
		docManager.window.activeNotebook_i.activeList_t.activeList_i.selected.badge = "";

		return new JSCore.Value.string(ctx, file_path);
    }
}