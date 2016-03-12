

@protocol IGEventViewerMediaPreloaderVideoProgressDelegate <NSObject>
@required
-(void)eventMediaPreloader:(id)arg1 didFailVideoForPost:(id)arg2 url:(id)arg3;
-(void)eventMediaPreloader:(id)arg1 didLoadVideoForPost:(id)arg2 url:(id)arg3;

@end

